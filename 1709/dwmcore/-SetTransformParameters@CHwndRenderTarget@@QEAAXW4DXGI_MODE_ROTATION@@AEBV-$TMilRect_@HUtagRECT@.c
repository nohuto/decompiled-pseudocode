/*
 * XREFs of ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180017318
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C0A28 (-ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGE.c)
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1801343BC (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPR.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180078128 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CHwndRenderTarget::SetTransformParameters(__int64 a1, int a2, __int128 *a3, _OWORD *a4)
{
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 v6; // r10

  v4 = *(_QWORD *)(a1 + 112);
  *(_OWORD *)(a1 + 412) = *a4;
  v5 = *a3;
  *(_DWORD *)(a1 + 452) = a2;
  *(_OWORD *)(a1 + 428) = v5;
  if ( v4 )
  {
    *(_OWORD *)(v4 + 96) = *a4;
    *(_OWORD *)(*(_QWORD *)(a1 + 112) + 80LL) = *a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 112) + 292LL) = a2;
    LOBYTE(v4) = TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                   *(_QWORD *)(a1 + 112) + 80LL,
                   *(_QWORD *)(a1 + 112) + 64LL) ^ 1;
    *(_BYTE *)(v6 + 801) = v4;
  }
  return v4;
}
