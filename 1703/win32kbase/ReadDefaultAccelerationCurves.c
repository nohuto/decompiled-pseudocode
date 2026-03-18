/*
 * XREFs of ReadDefaultAccelerationCurves @ 0x1C0070360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ReadDefaultAccelerationCurves(int a1, struct _UNICODE_STRING *a2)
{
  CDeviceAcceleration::CreateDefaultAcceleratorCurve(*(&qword_1C0186098 + 3 * a1), a2);
}
