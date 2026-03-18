/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A8D7C
 * Callers:
 *     CleanupGDI @ 0x1C00A9D70 (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternal @ 0x1C0059000 (bDeleteDCInternal.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((unsigned int)v2, -2147483646, 0, 1);
    bDeleteDCInternal(*a1, 1, 0, 0);
    *a1 = 0LL;
  }
}
