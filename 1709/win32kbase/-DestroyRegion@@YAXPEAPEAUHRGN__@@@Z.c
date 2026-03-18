/*
 * XREFs of ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x1C0063CAC
 * Callers:
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     GreSetRegionOwner @ 0x1C0042A00 (GreSetRegionOwner.c)
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
