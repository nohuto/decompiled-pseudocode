/*
 * XREFs of DoAccel @ 0x1C012E750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DoAccel(int a1, int *a2, int *a3, struct _SUBPIXELS *a4)
{
  CDeviceAcceleration::Accelerate(*(&qword_1C0186098 + 3 * a1), a2, a3, a4);
}
