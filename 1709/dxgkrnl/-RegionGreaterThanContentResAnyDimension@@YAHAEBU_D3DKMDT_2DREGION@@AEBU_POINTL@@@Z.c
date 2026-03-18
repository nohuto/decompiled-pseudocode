/*
 * XREFs of ?RegionGreaterThanContentResAnyDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z @ 0x1C01F8B14
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00D4E3C (BmlCompareSourceModes.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RegionGreaterThanContentResAnyDimension(const struct _D3DKMDT_2DREGION *a1, const struct _POINTL *a2)
{
  return a1->cx >= a2->x && a1->cy >= a2->y || a1->cx >= a2->y && a1->cy >= a2->x;
}
