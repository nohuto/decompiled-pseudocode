/*
 * XREFs of ?DestroyWhiteColor@CProjectedShadowCaster@@AEAAXXZ @ 0x18019FBA8
 * Callers:
 *     ?OnChanged@CProjectedShadowCaster@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801A0780 (-OnChanged@CProjectedShadowCaster@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETMASK@@@Z @ 0x1801A084C (-ProcessSetMask@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTE.c)
 *     ?RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z @ 0x1801A0A10 (-RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z.c)
 *     ?SetBlurRadius@CProjectedShadowCaster@@AEAAXM@Z @ 0x1801A0D4C (-SetBlurRadius@CProjectedShadowCaster@@AEAAXM@Z.c)
 *     ?SetBrush@CProjectedShadowCaster@@AEAAXPEAVCSpriteVisualContent@@@Z @ 0x1801A0D9C (-SetBrush@CProjectedShadowCaster@@AEAAXPEAVCSpriteVisualContent@@@Z.c)
 *     ?SetOpacityMultiplier@CProjectedShadowCaster@@AEAAXM@Z @ 0x1801A0E04 (-SetOpacityMultiplier@CProjectedShadowCaster@@AEAAXM@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CProjectedShadowCaster::DestroyWhiteColor(CRenderTargetImageSource **this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi

  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(this + 17);
  v2 = 0LL;
  v3 = (this[9] - this[8]) >> 3;
  v4 = (int)v3;
  if ( (int)v3 > 0 )
  {
    do
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)(*((_QWORD *)this[8] + v2++)
                                                                                        + 96LL));
    while ( v2 < v4 );
  }
}
