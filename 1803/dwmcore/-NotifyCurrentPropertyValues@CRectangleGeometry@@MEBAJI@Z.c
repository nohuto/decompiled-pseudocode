/*
 * XREFs of ?NotifyCurrentPropertyValues@CRectangleGeometry@@MEBAJI@Z @ 0x1801A3670
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x18002B360 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 */

__int64 __fastcall CRectangleGeometry::NotifyCurrentPropertyValues(CRectangleGeometry *this, int a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 15LL;
  v3[1] = (__int64)&CRectangleGeometry::k_rgAnimDef;
  return CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(this, a2, v3);
}
