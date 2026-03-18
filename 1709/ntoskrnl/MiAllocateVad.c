/*
 * XREFs of MiAllocateVad @ 0x14045ED28
 * Callers:
 *     MiInitializeUserNoAccess @ 0x14045BCF8 (MiInitializeUserNoAccess.c)
 *     MiAllocateSharedUserVad @ 0x14045ECD0 (MiAllocateSharedUserVad.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 */

_QWORD *__fastcall MiAllocateVad(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned int v9; // eax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    v7[5] = 0LL;
    v7[2] = -2LL;
    *((_DWORD *)v7 + 6) = a1 >> 12;
    *((_BYTE *)v7 + 32) = a1 >> 44;
    *((_DWORD *)v7 + 7) = a2 >> 12;
    *((_BYTE *)v7 + 33) = a2 >> 44;
    if ( a3 == 1 )
    {
      v8 = ((unsigned int)(a2 >> 12) | ((unsigned __int64)(unsigned __int8)(a2 >> 44) << 32))
         - ((unsigned int)(a1 >> 12) | ((unsigned __int64)(unsigned __int8)(a1 >> 44) << 32))
         + 1;
      *((_DWORD *)v7 + 13) |= 0x80000000;
    }
    else
    {
      v8 = 0x7FFFFFFFFLL;
    }
    *((_DWORD *)v7 + 13) ^= (*((_DWORD *)v7 + 13) ^ v8) & 0x7FFFFFFF;
    v9 = v7[6] & 0xFFFFFF0F;
    *((_BYTE *)v7 + 34) = v8 >> 31;
    *((_DWORD *)v7 + 12) = v9 | 0x8008;
    if ( MiAddSecureEntry((_DWORD)v7, a1, a2, -2147483647, 0) )
      return v7;
    ExFreePoolWithTag(v7, 0);
  }
  return 0LL;
}
