/*
 * XREFs of ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C009B88C
 * Callers:
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001F4A0 (GreDeleteObject.c)
 *     GreSetBitmapOwnerEx @ 0x1C003FC78 (GreSetBitmapOwnerEx.c)
 */

void __fastcall DestroyBitmap(HBITMAP *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetBitmapOwnerEx(v2, 0x80000002);
    GreDeleteObject((HBRUSH)*a1);
    *a1 = 0LL;
  }
}
