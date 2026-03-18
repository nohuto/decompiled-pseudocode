/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C00A8EC0
 * Callers:
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001E0C0 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C001E5F0 (GreSetRegionOwner.c)
 */

void __fastcall DestroyRegion(HBRUSH *a1)
{
  HBRUSH v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetRegionOwner((__int64)v2, 0x80000002);
    GreDeleteObject(*a1);
    *a1 = 0LL;
  }
}
