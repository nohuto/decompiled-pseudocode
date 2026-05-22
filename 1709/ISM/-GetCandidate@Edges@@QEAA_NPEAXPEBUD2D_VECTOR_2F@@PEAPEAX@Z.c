/*
 * XREFs of ?GetCandidate@Edges@@QEAA_NPEAXPEBUD2D_VECTOR_2F@@PEAPEAX@Z @ 0x18002B4E8
 * Callers:
 *     ?OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z @ 0x18002D2E0 (-OnDeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@PEAW4InputBufferingDecision@@@Z.c)
 *     ?OnContextualInput@EdgeGestureTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18002D470 (-OnContextualInput@EdgeGestureTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProces.c)
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18002D880 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@_NW4EdgeGestureEdges@@1H@Z @ 0x18002E110 (-OnSwipe@EdgeGestureTarget@@AEAA-AW4State@1@_NW4EdgeGestureEdges@@1H@Z.c)
 * Callees:
 *     ?FindEdge@Edges@@AEAAHI@Z @ 0x18002B2A0 (-FindEdge@Edges@@AEAAHI@Z.c)
 */

char __fastcall Edges::GetCandidate(Edges *this, int **a2, const struct D2D_VECTOR_2F *a3, void **a4)
{
  int *v8; // r11
  int Edge; // eax
  __int64 v10; // r11
  float v11; // xmm2_4
  float v12; // xmm2_4

  if ( a4 )
    *a4 = 0LL;
  if ( !a2 )
    return 0;
  v8 = *a2;
  if ( *a2 == a2[1] )
    return 0;
  while ( 1 )
  {
    Edge = Edges::FindEdge(this, *v8);
    if ( Edge >= 0 )
    {
      if ( !a3 )
        break;
      v11 = *(float *)(*(_QWORD *)this + 72LL * Edge + 32);
      if ( v11 > 0.0 && a3->x > 0.0 )
        break;
      if ( v11 < 0.0 && a3->x < 0.0 )
        break;
      v12 = *(float *)(*(_QWORD *)this + 72LL * Edge + 36);
      if ( v12 > 0.0 && a3->y > 0.0 )
        break;
      if ( v12 < 0.0 && a3->y < 0.0 )
        break;
    }
    v8 = (int *)(v10 + 4);
    if ( v8 == a2[1] )
      return 0;
  }
  if ( a4 )
    *a4 = (void *)*(unsigned int *)(*(_QWORD *)this + 72LL * Edge + 40);
  return 1;
}
