/*
 * XREFs of CmpConstructNameFromKcbNameBlocks @ 0x1406659C0
 * Callers:
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpCopyCompressedName @ 0x1404D2CB0 (CmpCopyCompressedName.c)
 *     CmpKeyFullNameLength @ 0x140501640 (CmpKeyFullNameLength.c)
 */

__int64 __fastcall CmpConstructNameFromKcbNameBlocks(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  _WORD *TransientPoolWithTag; // rax
  _WORD *v9; // r14
  unsigned __int16 v10; // di
  __int64 v11; // rdx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // di

  v3 = a1;
  v4 = CmpKeyFullNameLength(a1);
  v6 = v4;
  if ( v4 <= 0xFFFF )
  {
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(v5, v4 + 16LL, 0x624E4D43u);
    v7 = 0;
    v9 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v6 + 16);
      *v9 = v6;
      v9[1] = v6;
      v10 = (unsigned __int16)v6 >> 1;
      for ( *((_QWORD *)v9 + 1) = v9 + 8; v3; v3 = *(_QWORD *)(v3 + 64) )
      {
        if ( (*(_DWORD *)(v3 + 176) & 0x40000) == 0 || !*(_QWORD *)(v3 + 64) )
        {
          v11 = *(_QWORD *)(v3 + 72);
          v12 = *(_WORD *)(v11 + 24);
          if ( (*(_DWORD *)v11 & 1) == 0 )
            v12 >>= 1;
          v13 = v10 - v12;
          if ( (*(_DWORD *)v11 & 1) != 0 )
            CmpCopyCompressedName(
              (_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v13),
              2 * v12,
              (unsigned __int8 *)(v11 + 26),
              v12);
          else
            memmove((void *)(*((_QWORD *)v9 + 1) + 2LL * v13), (const void *)(v11 + 26), 2LL * v12);
          v10 = v13 - 1;
          *(_WORD *)(*((_QWORD *)v9 + 1) + 2LL * v10) = 92;
        }
      }
      *a2 = v9;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
