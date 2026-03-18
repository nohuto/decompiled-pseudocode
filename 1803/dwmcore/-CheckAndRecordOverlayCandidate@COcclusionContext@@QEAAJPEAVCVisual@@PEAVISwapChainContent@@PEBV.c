/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006D04
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180007A70 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006B90 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        CShape *a5,
        unsigned int a6)
{
  unsigned int v6; // edi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // eax

  v6 = 0;
  if ( !*(_DWORD *)(a1 + 1040) || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a3 + 112LL))(a3) )
  {
    (*(void (__fastcall **)(_QWORD *))(*a3 + 216LL))(a3);
    v11 = *(_QWORD *)(a1 + 1184);
    v12 = 0LL;
    if ( *(_DWORD *)(v11 + 24) )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(*(_QWORD *)v11 + 8 * v12);
        if ( *(_BYTE *)(v13 + 1188) )
        {
          v14 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, v13, a2, a3, a4, a5, a6);
          v6 = v14;
          if ( v14 < 0 )
            break;
        }
        v11 = *(_QWORD *)(a1 + 1184);
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 24) )
          return v6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7CCu);
    }
  }
  return v6;
}
