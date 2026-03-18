/*
 * XREFs of ?InvalidateShadowIntermediate@CDropShadow@@AEAAX_NAEAUShadowIntermediates@1@@Z @ 0x180160D38
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?OnChanged@CDropShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180160E50 (-OnChanged@CDropShadow@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x180160EC4 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x18016103C (-SetBlurRadius@CDropShadow@@AEAAXM@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CDropShadow::InvalidateShadowIntermediate(
        CDropShadow *this,
        char a2,
        struct CDropShadow::ShadowIntermediates *a3)
{
  if ( a2 )
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)a3 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)a3 + 2);
  CSpriteVisualContent::ReleasePrimitiveCaches(this);
}
