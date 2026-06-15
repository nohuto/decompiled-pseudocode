/*
 * XREFs of ?FindSaDeviceByResourceId@CDeviceGraphObjectsStore@@UEAAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x1800966F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x18000E95C (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindSaDeviceByResourceId(
        CDeviceGraphObjectsStore *this,
        __int64 a2,
        struct ISaDeviceProxy **a3)
{
  _QWORD v4[9]; // [rsp+20h] [rbp-48h] BYREF

  v4[1] = a2;
  v4[0] = off_1800F44B8;
  v4[7] = v4;
  return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v4, a3);
}
