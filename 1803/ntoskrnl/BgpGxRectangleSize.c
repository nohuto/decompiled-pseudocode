/*
 * XREFs of BgpGxRectangleSize @ 0x140165048
 * Callers:
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 *     AnFwConfigureProgressResources @ 0x14083B6D8 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x14083B7B8 (BgpGxReservePoolRectangleSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
