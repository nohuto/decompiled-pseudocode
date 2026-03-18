/*
 * XREFs of ??$As@VIBitmapDest@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIBitmapDest@@@WRL@Microsoft@@@Details@12@@Z @ 0x18008821C
 * Callers:
 *     ?SupportsFastLock@CBitmapSourceD2DCacheAdapter@@UEBA_NXZ @ 0x180088470 (-SupportsFastLock@CBitmapSourceD2DCacheAdapter@@UEBA_NXZ.c)
 *     ?LockForRead@CBitmapSourceD2DCacheAdapter@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800884D0 (-LockForRead@CBitmapSourceD2DCacheAdapter@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IBitmapSource>::As<IBitmapDest>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
           a2);
}
