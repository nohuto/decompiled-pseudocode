/*
 * XREFs of DoAccel @ 0x1C012DC50
 * Callers:
 *     <none>
 * Callees:
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C005EB60 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 */

void __fastcall DoAccel(int a1, struct CInpPushLock *a2, int *a3, struct _SUBPIXELS *a4)
{
  CDeviceAcceleration::Accelerate(*(&qword_1C0188098 + 3 * a1), a2, a3, a4);
}
