/*
 * XREFs of ?RegionGreaterThanContentResAllDimension@@YAHAEBU_D3DKMDT_2DREGION@@AEBU_POINTL@@@Z @ 0x1C01F8AE4
 * Callers:
 *     BmlCompareSourceModes @ 0x1C00D4E3C (BmlCompareSourceModes.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RegionGreaterThanContentResAllDimension(const struct _D3DKMDT_2DREGION *a1, const struct _POINTL *a2)
{
  UINT cx; // r9d
  UINT cy; // eax
  unsigned int y; // ecx
  _BOOL8 result; // rax

  cx = a1->cx;
  result = 0;
  if ( a1->cx >= a2->x )
  {
    cy = a1->cy;
    y = a2->y;
    if ( cy >= y && cx >= y && cy >= a2->x )
      return 1;
  }
  return result;
}
