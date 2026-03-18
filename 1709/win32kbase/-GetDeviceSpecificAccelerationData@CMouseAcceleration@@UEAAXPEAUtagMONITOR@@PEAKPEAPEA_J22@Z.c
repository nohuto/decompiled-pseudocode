/*
 * XREFs of ?GetDeviceSpecificAccelerationData@CMouseAcceleration@@UEAAXPEAUtagMONITOR@@PEAKPEAPEA_J22@Z @ 0x1C005ED10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMouseAcceleration::GetDeviceSpecificAccelerationData(
        CMouseAcceleration *this,
        struct tagMONITOR *a2,
        unsigned int *a3,
        __int64 **a4,
        __int64 **a5,
        __int64 **a6)
{
  *a3 = 5;
  *a4 = (__int64 *)((char *)a2 + 248);
  *a5 = (__int64 *)((char *)a2 + 328);
  *a6 = (__int64 *)((char *)a2 + 360);
}
