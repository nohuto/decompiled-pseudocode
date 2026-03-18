/*
 * XREFs of ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0078B6C
 * Callers:
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 * Callees:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 */

void __fastcall DestroyDC(HDC *a1)
{
  HDC v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    GreSetDCOwnerEx((unsigned int)v2, 0x80000002, 0, 1);
    bDeleteDCInternal(*a1, 1, 0, 0);
    *a1 = 0LL;
  }
}
