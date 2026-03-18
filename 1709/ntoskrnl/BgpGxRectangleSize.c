/*
 * XREFs of BgpGxRectangleSize @ 0x14013B5B0
 * Callers:
 *     AnFwConfigureProgressResources @ 0x1407CE39C (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x1407CE47C (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x1407CEDC0 (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
