/*
 * XREFs of ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001A52C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(FRAME_TIME_INFO *this, char a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  if ( a2 )
    ++*(_DWORD *)(v2 + 100);
  else
    ++*(_DWORD *)(v2 + 104);
}
