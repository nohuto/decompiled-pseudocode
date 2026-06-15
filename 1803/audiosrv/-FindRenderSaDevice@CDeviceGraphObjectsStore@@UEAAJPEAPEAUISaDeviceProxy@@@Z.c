/*
 * XREFs of ?FindRenderSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1800CC8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800969F8 (-FindFirstMatchingSaDevice@CDeviceGraphObjectsStore@@IEAAJV-$function@$$A6A_NPEAUISaDeviceProxy@.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::FindRenderSaDevice(
        CDeviceGraphObjectsStore *this,
        struct ISaDeviceProxy **a2)
{
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  v3[0] = off_18012C7C0;
  v3[7] = v3;
  return CDeviceGraphObjectsStore::FindFirstMatchingSaDevice((__int64)this, (__int64)v3, (__int64 *)a2);
}
