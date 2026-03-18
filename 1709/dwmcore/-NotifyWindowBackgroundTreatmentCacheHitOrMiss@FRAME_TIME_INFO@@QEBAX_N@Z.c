/*
 * XREFs of ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x1800108E4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(FRAME_TIME_INFO *this, char a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  if ( a2 )
    ++*(_DWORD *)(v2 + 1160);
  else
    ++*(_DWORD *)(v2 + 1164);
}
