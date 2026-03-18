/*
 * XREFs of ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x180080DBC
 * Callers:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18004735C (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180166910 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     ?IsCompositionThread@CPartitionVerticalBlankScheduler@@UEBA_NXZ @ 0x18005A230 (-IsCompositionThread@CPartitionVerticalBlankScheduler@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180080F84 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(CCompositionSurfaceInfo *this)
{
  CPartitionVerticalBlankScheduler *v2; // rcx
  __int64 (*v3)(void); // rax
  char IsCompositionThread; // al
  unsigned int v5; // edi
  int CompositionSurfaceRenderingRealization; // ebx
  unsigned int v7; // ebx
  int updated; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-F8h]
  _DWORD v12[8]; // [rsp+30h] [rbp-E8h] BYREF
  HGDIOBJ ho; // [rsp+50h] [rbp-C8h]

  memset_0(v12, 0, 0xC8uLL);
  v2 = (CPartitionVerticalBlankScheduler *)*((_QWORD *)g_pComposition + 69);
  v3 = *(__int64 (**)(void))(*(_QWORD *)v2 + 112LL);
  if ( (char *)v3 == (char *)CPartitionVerticalBlankScheduler::IsCompositionThread )
    IsCompositionThread = CPartitionVerticalBlankScheduler::IsCompositionThread(v2);
  else
    IsCompositionThread = v3();
  if ( !IsCompositionThread )
  {
    v7 = -2003292412;
    v11 = 460;
LABEL_15:
    v10 = v7;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v11);
    goto LABEL_9;
  }
  v5 = IsCompositionThread == 0 ? 0x88982F04 : 0;
  CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v12);
  if ( CompositionSurfaceRenderingRealization < 0 )
  {
    v7 = CompositionSurfaceRenderingRealization | 0x10000000;
    v11 = 467;
    goto LABEL_15;
  }
  v7 = v5;
  if ( v12[0] == 200 && v12[1] == *((_DWORD *)this + 10) && v12[2] == *((_DWORD *)this + 11) )
  {
    updated = CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, (const struct CSM_SURFACE_UPDATE *)v12);
    v7 = updated;
    if ( updated < 0 )
    {
      v11 = 475;
      v10 = updated;
      goto LABEL_17;
    }
  }
LABEL_9:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v7;
}
