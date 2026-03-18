/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0063CE0
 * Callers:
 *     CleanupGDI @ 0x1C006398C (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternal @ 0x1C0061E40 (bDeleteDCInternal.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*a1;
  if ( v2 )
  {
    GreSetDCOwnerEx(v2, 2147483650LL, 0LL, 1LL);
    bDeleteDCInternal((struct HOBJ__ *)*a1, 1, 0, 0);
    *a1 = 0LL;
  }
}
