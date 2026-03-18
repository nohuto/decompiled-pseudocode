/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C00781E0
 * Callers:
 *     bInitBMOBJ @ 0x1C01D7858 (bInitBMOBJ.c)
 *     bInitICM @ 0x1C01D78AC (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01D7B18 (bInitPALOBJ.c)
 *     bInitBRUSHOBJ @ 0x1C01D7DD0 (bInitBRUSHOBJ.c)
 *     bInitBrush @ 0x1C01D8214 (bInitBrush.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C0078370 (HmgModifyHandleType.c)
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
    HmgModifyHandleType(v5);
  }
  LOBYTE(v3) = a1 != 0;
  return v3;
}
