/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C006EF50
 * Callers:
 *     bInitICM @ 0x1C01DF194 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01DF3FC (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C01DF6B8 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01DFAFC (bInitBrush.c)
 *     bInitBMOBJ @ 0x1C01DFBA4 (bInitBMOBJ.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C001ECE0 (HmgModifyHandleType.c)
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  void *v5; // rcx

  v3 = 0;
  if ( a1 )
  {
    v5 = (void *)(a1 | 0x800000);
    if ( a3 )
      gahStockObjects96[a2] = v5;
    else
      gahStockObjects[a2] = v5;
    HmgModifyHandleType((__int64)v5);
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
