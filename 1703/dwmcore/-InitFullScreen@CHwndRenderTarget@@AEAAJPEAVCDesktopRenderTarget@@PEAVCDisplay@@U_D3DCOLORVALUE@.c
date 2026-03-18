/*
 * XREFs of ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18006C860
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x18006A0B0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x18006A7E4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180146B38 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180146D40 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18006C1F0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x18006E2D0 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C9EE4 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::InitFullScreen(
        CHwndRenderTarget *this,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        char a6,
        char a7,
        char a8)
{
  char *v11; // rdi
  __int128 v12; // xmm0

  *((_QWORD *)this + 17) = a2;
  CHwndRenderTarget::ReleaseResources(this);
  v11 = (char *)this + 112;
  ReplaceInterface<CRegionWrapper,CRegionWrapper>((char *)this + 112, a3);
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 1361LL)
    && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 176LL))(this) )
  {
    *(_OWORD *)(*(_QWORD *)v11 + 96LL) = *(_OWORD *)((char *)this + 412);
    *(_OWORD *)(*(_QWORD *)v11 + 80LL) = *(_OWORD *)((char *)this + 428);
    *(_DWORD *)(*(_QWORD *)v11 + 288LL) = *((_DWORD *)this + 113);
  }
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 176LL))(this) )
    *((_QWORD *)this + 58) = *(_QWORD *)(*(_QWORD *)(a3 + 128) + 16LL);
  v12 = *a4;
  *((_BYTE *)this + 784) = a7;
  *((_BYTE *)this + 797) = a8;
  *((_DWORD *)this + 93) = a5;
  *((_DWORD *)this + 98) = a5 & 0xFFFEFFFF;
  *((_BYTE *)this + 786) = a6;
  *(_OWORD *)((char *)this + 396) = v12;
  CHwndRenderTarget::EnsureWNFHandles(this);
  return 0LL;
}
