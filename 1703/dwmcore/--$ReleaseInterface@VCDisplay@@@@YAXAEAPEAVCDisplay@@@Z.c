/*
 * XREFs of ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18006C1F0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ @ 0x1800ABDB0 (-DestroyDeviceResources@CCallbackRendererManager@@IEAAXXZ.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x1800B72E4 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800C2D68 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N33@Z @ 0x1800CD7E8 (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18014673C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180155988 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180155E54 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?GetDirtyRegion@CHolographicInteropTexture@@QEAAPEBVCDirtyRegion@@XZ @ 0x1801A3EAC (-GetDirtyRegion@CHolographicInteropTexture@@QEAAPEBVCDirtyRegion@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CDisplay>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
