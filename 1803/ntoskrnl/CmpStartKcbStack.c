/*
 * XREFs of CmpStartKcbStack @ 0x1404A5CCC
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x1404A5BC8 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKeyDeleted @ 0x1404A5C40 (CmpIsKeyDeleted.c)
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebx
  PVOID v5; // rbp
  SIZE_T v7; // r14
  PVOID TransientPoolWithTag; // rax

  v2 = 0;
  v5 = 0LL;
  if ( a2 >= 2 && a2 != 1 )
  {
    v7 = 8LL * (unsigned int)(a2 - 1);
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v7, 0x35364D43u);
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
