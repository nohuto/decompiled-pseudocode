/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D8EC
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000B200 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180038E60 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?ResetDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180037A80 (-ResetDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        CCompositionSurfaceBitmap *a3,
        __int64 a4,
        CShape *a5,
        unsigned int a6)
{
  unsigned int v7; // edi
  void (__fastcall *v11)(CCompositionSurfaceBitmap *__hidden); // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // eax

  v7 = 0;
  v11 = *(void (__fastcall **)(CCompositionSurfaceBitmap *__hidden))(*(_QWORD *)a3 + 200LL);
  if ( v11 == CCompositionSurfaceBitmap::ResetDisplayOverlapCount )
    CCompositionSurfaceBitmap::ResetDisplayOverlapCount(a3);
  else
    v11(a3);
  v12 = *(_QWORD *)(a1 + 1088);
  v13 = 0LL;
  if ( *(_DWORD *)(v12 + 24) )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)v12 + 8 * v13);
      if ( *(_BYTE *)(v14 + 1088) )
      {
        v15 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, v14, a2, a3, a4, a5, a6);
        v7 = v15;
        if ( v15 < 0 )
          break;
      }
      v12 = *(_QWORD *)(a1 + 1088);
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 24) )
        return v7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x7C1u);
  }
  return v7;
}
