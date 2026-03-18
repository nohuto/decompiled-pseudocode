/*
 * XREFs of CmpStartKcbStack @ 0x1404FC4F8
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404FC480 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebx
  PVOID v5; // rsi
  SIZE_T v7; // rbp
  PVOID TransientPoolWithTag; // rax

  v2 = 0;
  v5 = 0LL;
  if ( a2 >= 2 && a2 != 1 )
  {
    v7 = 8LL * (unsigned int)(a2 - 1);
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(a1, v7, 0x35364D43u);
    v5 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return (unsigned int)-1073741670;
    memset(TransientPoolWithTag, 0, v7);
  }
  *(_WORD *)a1 = a2;
  *(_WORD *)(a1 + 2) = -1;
  *(_QWORD *)(a1 + 24) = v5;
  return v2;
}
