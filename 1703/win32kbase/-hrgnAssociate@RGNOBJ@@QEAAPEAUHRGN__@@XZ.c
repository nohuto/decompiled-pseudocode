/*
 * XREFs of ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C003DD04
 * Callers:
 *     ?GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1C0012A84 (-GetRegionHandleAndReset@CRegion@@QEAAJPEAPEAUHRGN__@@@Z.c)
 *     GreExtCreateRegion @ 0x1C00229E0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00965F8 (GreCreatePolyPolygonRgnInternal.c)
 * Callees:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C003F540 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 */

struct HOBJ__ *__fastcall RGNOBJ::hrgnAssociate(struct OBJECT **this)
{
  struct OBJECT *v1; // rbx
  struct HOBJ__ *result; // rax

  v1 = *this;
  result = HmgInsertObjectInternal(*this, 1u, 4u);
  if ( result )
  {
    if ( v1 )
      _InterlockedDecrement((volatile signed __int32 *)v1 + 3);
  }
  return result;
}
