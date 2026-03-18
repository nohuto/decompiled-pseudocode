/*
 * XREFs of ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEBAJI@Z @ 0x18002B4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x18002B360 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 */

__int64 __fastcall CComponentTransform3D::NotifyCurrentPropertyValues(CComponentTransform3D *this, int a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 7LL;
  v3[1] = (__int64)&CComponentTransform3D::k_rgAnimDef;
  return CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(this, a2, v3);
}
