/*
 * XREFs of MiAllocateVad @ 0x1404EA7EC
 * Callers:
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 *     MiAllocateProcessVads @ 0x1404EA744 (MiAllocateProcessVads.c)
 *     MiCreatePlaceholderStorage @ 0x140755004 (MiCreatePlaceholderStorage.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 */

_DWORD *__fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  int v8; // edx
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  int v11; // edi
  int v12; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v8 = v7[12];
    *((_QWORD *)v7 + 5) = 0LL;
    v9 = v8 & 0xFFFFFF07 | 8;
    *((_QWORD *)v7 + 2) = -2LL;
    v7[6] = a1 >> 12;
    *((_BYTE *)v7 + 32) = a1 >> 44;
    v7[7] = a2 >> 12;
    *((_BYTE *)v7 + 33) = a2 >> 44;
    v7[12] = v9;
    if ( (a3 & 1) != 0 )
    {
      v7[13] |= 0x80000000;
      v10 = ((unsigned int)(a2 >> 12) | ((unsigned __int64)(unsigned __int8)(a2 >> 44) << 32))
          - ((unsigned int)(a1 >> 12) | ((unsigned __int64)(unsigned __int8)(a1 >> 44) << 32))
          + 1;
      v11 = a3 & 2;
    }
    else
    {
      v11 = a3 & 2;
      if ( v11 )
      {
        v10 = 0x7FFFFFFFDLL;
        v9 = v9 & 0xFFFFFF07 | 0xC0;
        v7[12] = v9;
      }
      else
      {
        v10 = 0x7FFFFFFFFLL;
      }
    }
    v12 = v10 ^ v7[13];
    v7[12] = v9 | 0x4000;
    v7[13] ^= v12 & 0x7FFFFFFF;
    *((_BYTE *)v7 + 34) = v10 >> 31;
    if ( v11 || MiAddSecureEntry((_DWORD)v7, a1, a2, -2147483647, 0) )
      return v7;
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
