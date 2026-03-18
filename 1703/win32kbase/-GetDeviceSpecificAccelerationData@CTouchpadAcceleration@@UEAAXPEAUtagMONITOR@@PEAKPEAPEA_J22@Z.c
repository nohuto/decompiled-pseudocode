/*
 * XREFs of ?GetDeviceSpecificAccelerationData@CTouchpadAcceleration@@UEAAXPEAUtagMONITOR@@PEAKPEAPEA_J22@Z @ 0x1C0095770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTouchpadAcceleration::GetDeviceSpecificAccelerationData(
        CTouchpadAcceleration *this,
        struct tagMONITOR *a2,
        unsigned int *a3,
        __int64 **a4,
        __int64 **a5,
        __int64 **a6)
{
  *a3 = 5;
  *a4 = (__int64 *)((char *)a2 + 280);
  *a5 = (__int64 *)((char *)a2 + 360);
  *a6 = (__int64 *)((char *)a2 + 392);
}
