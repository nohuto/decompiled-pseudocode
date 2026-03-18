/*
 * XREFs of ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEBAJI@Z @ 0x1801832C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x18002B360 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 */

__int64 __fastcall CComponentTransform2D::NotifyCurrentPropertyValues(CComponentTransform2D *this, int a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 6LL;
  v3[1] = (__int64)&CComponentTransform2D::k_rgAnimDef;
  return CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(this, a2, v3);
}
