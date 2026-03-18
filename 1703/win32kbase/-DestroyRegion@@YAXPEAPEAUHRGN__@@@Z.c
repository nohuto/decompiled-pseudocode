/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0078B38
 * Callers:
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C0043350 (GreSetRegionOwner.c)
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
