/*
 * XREFs of ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_N@Z @ 0x180171D9C
 * Callers:
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18012E8A0 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180170B40 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?OnChanged@CDropShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180171E70 (-OnChanged@CDropShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x180171ED8 (-SetBlurRadius@CDropShadow@@AEAAXM@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDropShadow::InvalidateShadowIntermediate(CDropShadow *this, char a2)
{
  if ( a2 )
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 19);
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
}
