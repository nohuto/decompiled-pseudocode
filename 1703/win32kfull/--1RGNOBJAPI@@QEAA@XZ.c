/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     GreUpdateSpriteClipRgn @ 0x1C009D248 (GreUpdateSpriteClipRgn.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A7DF4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreSubtractRgnRectList @ 0x1C00F02F4 (GreSubtractRgnRectList.c)
 *     GreGetRandomRgn @ 0x1C00F84A0 (GreGetRandomRgn.c)
 *     NtGdiFrameRgn @ 0x1C011E410 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0120E28 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0122720 (NtGdiFillRgn.c)
 *     GreHintSpriteBlt @ 0x1C013564C (GreHintSpriteBlt.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013EDB0 (GreExtSelectClipRgnInternal.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C024F820 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     W32kCddClipRegion @ 0x1C0251260 (W32kCddClipRegion.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C02578F0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0267808 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C0268540 (GreSetClientRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C027D840 (GreScaleRgnToDestLogPixel.c)
 *     NtGdiScaleRgn @ 0x1C028E870 (NtGdiScaleRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
