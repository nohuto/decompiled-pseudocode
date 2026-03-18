/*
 * XREFs of ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800177E4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x18002CC84 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x18009863C (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009E998 (--1CLightStack@@QEAA@XZ.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18009EDDC (-Clear@CLightStack@@QEAAXXZ.c)
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x1800B7744 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1800C58D0 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N3@Z @ 0x18013699C (-ResetRenderTarget@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@U_D3DCOLORVALUE@@U-$TMILFla.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180147698 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180147B04 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180156044 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1801BDF1C (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1801BE340 (-AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdr.c)
 *     ?TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z @ 0x1801BF07C (-TryGetDirtyRegion@CHolographicInteropTexture@@QEAAXPEAPEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
