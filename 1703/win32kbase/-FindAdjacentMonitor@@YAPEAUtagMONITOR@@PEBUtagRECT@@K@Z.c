/*
 * XREFs of ?FindAdjacentMonitor@@YAPEAUtagMONITOR@@PEBUtagRECT@@K@Z @ 0x1C00DE308
 * Callers:
 *     ?TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z @ 0x1C00DE394 (-TransformOffscreenAdjacentRect@@YAHPEAUtagRECT@@00KK@Z.c)
 * Callees:
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C007290C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x1C00DE230 (-ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z.c)
 */

struct tagMONITOR *__fastcall FindAdjacentMonitor(const struct tagRECT *a1, char a2)
{
  __int64 v2; // rdi
  int v5; // esi
  __int64 i; // rbx
  int v7; // eax
  struct tagRECT v9; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  v5 = 0;
  for ( i = *((_QWORD *)gpDispInfo + 12); i; i = *(_QWORD *)(i + 56) )
  {
    v9 = *ExpandedMonitorRect(&v10, (struct tagMONITOR *)i, a2);
    v7 = ComputeAdjacencyOverlap(a1, &v9);
    if ( v7 > v5 )
    {
      v2 = i;
      v5 = v7;
    }
  }
  return (struct tagMONITOR *)v2;
}
