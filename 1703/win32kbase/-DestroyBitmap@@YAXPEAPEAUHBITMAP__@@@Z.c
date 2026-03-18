/*
 * XREFs of ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C0078BB4
 * Callers:
 *     CleanupGDI @ 0x1C00787E8 (CleanupGDI.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C002F950 (HmgDecrementShareReferenceCount.c)
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
 */

void __fastcall DestroyBitmap(HBITMAP *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx

  v1 = (__int64)*a1;
  if ( *a1 )
  {
    v3 = HmgShareLockCheck((unsigned int)*a1, 5);
    if ( v3 )
    {
      if ( (v1 & 0x800000) == 0 )
        HmgSetOwner(v1, -2147483646, 5);
      HmgDecrementShareReferenceCount(v3);
    }
    GreDeleteObject((HBRUSH)*a1);
    *a1 = 0LL;
  }
}
