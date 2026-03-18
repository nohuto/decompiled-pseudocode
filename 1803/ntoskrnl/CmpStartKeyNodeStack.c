/*
 * XREFs of CmpStartKeyNodeStack @ 0x1406FB418
 * Callers:
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x1406FFED4 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2)
{
  unsigned int v2; // edi
  __int16 v5; // bx
  PVOID TransientPoolWithTag; // rax
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // rbx

  v2 = 0;
  if ( a2 < 2 )
  {
LABEL_7:
    *(_WORD *)a1 = a2;
    return v2;
  }
  v5 = a2 - 1;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 32LL * (__int16)(a2 - 1), 0x39364D43u);
  *(_QWORD *)(a1 + 72) = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    if ( v5 > 0 )
    {
      v7 = 0LL;
      v8 = (unsigned __int16)v5;
      do
      {
        v9 = v7 + *(_QWORD *)(a1 + 72);
        memset((void *)v9, 0, 0x20uLL);
        *(_DWORD *)(v9 + 8) = -1;
        *(_QWORD *)(v9 + 24) = 0LL;
        v7 += 32LL;
        *(_DWORD *)(v9 + 24) = -1;
        *(_WORD *)(v9 + 28) = 0;
        --v8;
      }
      while ( v8 );
    }
    goto LABEL_7;
  }
  return (unsigned int)-1073741670;
}
