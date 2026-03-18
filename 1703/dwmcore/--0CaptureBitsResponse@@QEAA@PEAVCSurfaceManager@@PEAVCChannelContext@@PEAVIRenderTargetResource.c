/*
 * XREFs of ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800AFBF0
 * Callers:
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18005C198 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@PEAX6@Z @ 0x180149EA8 (--0VisualCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetRe.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18014A72C (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChan.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::CaptureBitsResponse(
        CaptureBitsResponse *this,
        struct CSurfaceManager *a2,
        struct CChannelContext *a3,
        struct IRenderTargetResource *a4,
        struct CVisualTree *a5,
        float a6,
        const struct WICRect *a7,
        enum DXGI_FORMAT a8,
        unsigned __int64 a9)
{
  int v9; // edi
  __int128 v12; // xmm0

  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  v9 = 0;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CResponseItem::`vftable';
  *((_QWORD *)this + 3) = a2;
  *((_WORD *)this + 16) = 0;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  *((_QWORD *)this + 5) = a4;
  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  *((_QWORD *)this + 7) = a9;
  if ( a4 )
    (*(void (__fastcall **)(struct IRenderTargetResource *))(*(_QWORD *)a4 + 8LL))(a4);
  *((_QWORD *)this + 6) = a3;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  *((_QWORD *)this + 8) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  *((float *)this + 24) = a6;
  *((_DWORD *)this + 26) = 3;
  v12 = (__int128)*a7;
  *((_DWORD *)this + 25) = a8;
  LOBYTE(v9) = a8 == DXGI_FORMAT_R16G16B16A16_FLOAT;
  *((_DWORD *)this + 27) = v9;
  *((_OWORD *)this + 5) = v12;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_ETWGUID_RTCAPTURE_Start);
  return this;
}
