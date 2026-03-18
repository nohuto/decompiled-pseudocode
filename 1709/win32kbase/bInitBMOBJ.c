/*
 * XREFs of bInitBMOBJ @ 0x1C01DFBA4
 * Callers:
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     GreCreateBitmap @ 0x1C003C550 (GreCreateBitmap.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C006EF50 (-bSetStockObject@@YAHPEAXHH@Z.c)
 */

struct HOBJ__ *bInitBMOBJ()
{
  unsigned int v0; // edi
  struct HOBJ__ *result; // rax
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx

  v0 = 0;
  result = (struct HOBJ__ *)GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = (unsigned __int64)result;
  if ( result )
  {
    v3 = HmgShareLockCheck(result, 5);
    v4 = v3;
    if ( v3 )
    {
      HmgSetOwner(*(_QWORD *)(v3 + 32), 0, 5);
      bSetStockObject(v2, 21, 0);
      *(_QWORD *)(v4 + 32) = v2 | 0x800000;
      SURFACE::pdibDefault = (struct OBJECT *)v4;
      v0 = 1;
      HmgDecrementShareReferenceCountEx((struct OBJECT *)v4, 0LL);
    }
    return (struct HOBJ__ *)v0;
  }
  return result;
}
