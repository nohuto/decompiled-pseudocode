/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC
 * Callers:
 *     NtGdiExtSelectClipRgn @ 0x1C00170F0 (NtGdiExtSelectClipRgn.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     GreExtSelectClipRgn @ 0x1C008074C (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x1C00808C0 (GreGetRandomRgn.c)
 *     GreHintSpriteBlt @ 0x1C00E4BB4 (GreHintSpriteBlt.c)
 *     GreUpdateSpriteClipRgn @ 0x1C00E6FFC (GreUpdateSpriteClipRgn.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED218 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreSubtractRgnRectList @ 0x1C00FD314 (GreSubtractRgnRectList.c)
 *     NtGdiFrameRgn @ 0x1C012A6A0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C012B6D0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C012C5F0 (NtGdiFillRgn.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0251270 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     W32kCddClipRegion @ 0x1C0252D50 (W32kCddClipRegion.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C0259028 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02665D8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C0267300 (GreSetClientRgn.c)
 *     GreScaleRgn @ 0x1C027A240 (GreScaleRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C027A2E0 (GreScaleRgnToDestLogPixel.c)
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
