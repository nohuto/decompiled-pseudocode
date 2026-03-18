/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D170
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180025B00 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180029790 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?ResetDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ @ 0x180028D90 (-ResetDisplayOverlapCount@CCompositionSurfaceBitmap@@UEAAXXZ.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        CCompositionSurfaceBitmap *a3,
        __int64 a4,
        CShape *a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  void (__fastcall *v11)(CCompositionSurfaceBitmap *); // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  COverlayContext *v14; // rdx
  int v15; // eax

  v6 = 0;
  if ( !*(_DWORD *)(a1 + 1040)
    || (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 112LL))(a3) )
  {
    v11 = *(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 216LL);
    if ( v11 == CCompositionSurfaceBitmap::ResetDisplayOverlapCount )
      CCompositionSurfaceBitmap::ResetDisplayOverlapCount(a3);
    else
      v11(a3);
    v12 = *(_QWORD *)(a1 + 1184);
    v13 = 0LL;
    if ( *(_DWORD *)(v12 + 24) )
    {
      while ( 1 )
      {
        v14 = *(COverlayContext **)(*(_QWORD *)v12 + 8 * v13);
        if ( *((_BYTE *)v14 + 1176) )
        {
          v15 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, v14, a2, a3, a4, a5, a6);
          v6 = v15;
          if ( v15 < 0 )
            break;
        }
        v12 = *(_QWORD *)(a1 + 1184);
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 24) )
          return v6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x7C2u);
    }
  }
  return v6;
}
