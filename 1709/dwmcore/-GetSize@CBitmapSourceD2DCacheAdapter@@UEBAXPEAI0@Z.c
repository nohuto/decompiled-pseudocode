/*
 * XREFs of ?GetSize@CBitmapSourceD2DCacheAdapter@@UEBAXPEAI0@Z @ 0x180088580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBitmapSourceD2DCacheAdapter::GetSize(
        CBitmapSourceD2DCacheAdapter *this,
        unsigned int *a2,
        unsigned int *a3)
{
  (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 1) + 32LL))(
    *((_QWORD *)this + 1),
    a2,
    a3);
}
