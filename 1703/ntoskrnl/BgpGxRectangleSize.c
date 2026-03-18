/*
 * XREFs of BgpGxRectangleSize @ 0x14014047C
 * Callers:
 *     AnFwConfigureProgressResources @ 0x140755880 (AnFwConfigureProgressResources.c)
 *     BgpGxReservePoolRectangleSize @ 0x140755960 (BgpGxReservePoolRectangleSize.c)
 *     AnFwDisplayFade @ 0x14075651C (AnFwDisplayFade.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxRectangleSize(int a1, int a2, int a3)
{
  return ((unsigned int)(a3 * a2 * a1 + 7) >> 3) + 72;
}
