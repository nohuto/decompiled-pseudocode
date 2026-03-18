/*
 * XREFs of ?NotifyCurrentPropertyValues@CViewBox@@UEBAJI@Z @ 0x1801A6DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x18002B360 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 */

__int64 __fastcall CViewBox::NotifyCurrentPropertyValues(CViewBox *this, int a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 4LL;
  v3[1] = (__int64)&CViewBox::k_rgAnimDef;
  return CPropertyChangeResource::NotifyCurrentPropertyValuesImpl(this, a2, v3);
}
