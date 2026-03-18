/*
 * XREFs of ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FBE0
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180093610 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(__int64 a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  char result; // al

  if ( *(float *)a2 > *(float *)a1 )
    *(_DWORD *)a1 = *(_DWORD *)a2;
  v2 = *(float *)(a2 + 4);
  if ( v2 > *(float *)(a1 + 4) )
    *(float *)(a1 + 4) = v2;
  v3 = *(float *)(a2 + 8);
  if ( *(float *)(a1 + 8) > v3 )
    *(float *)(a1 + 8) = v3;
  v4 = *(float *)(a2 + 12);
  if ( *(float *)(a1 + 12) > v4 )
    *(float *)(a1 + 12) = v4;
  if ( *(float *)(a1 + 8) > *(float *)a1 && *(float *)(a1 + 12) > *(float *)(a1 + 4) )
    return 1;
  result = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
