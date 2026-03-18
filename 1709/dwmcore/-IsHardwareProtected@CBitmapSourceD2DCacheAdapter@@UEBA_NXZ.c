/*
 * XREFs of ?IsHardwareProtected@CBitmapSourceD2DCacheAdapter@@UEBA_NXZ @ 0x1800C1AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapSourceD2DCacheAdapter::IsHardwareProtected(CBitmapSourceD2DCacheAdapter *this)
{
  return *((_BYTE *)this + 20);
}
