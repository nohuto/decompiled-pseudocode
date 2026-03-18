/*
 * XREFs of VidMmTerminateDevice @ 0x1C0012B50
 * Callers:
 *     <none>
 * Callees:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C00018B0 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 */

VIDMM_DEVICE *__fastcall VidMmTerminateDevice(VIDMM_DEVICE *a1)
{
  VIDMM_DEVICE *result; // rax

  if ( a1 )
    return VIDMM_DEVICE::`scalar deleting destructor'(a1);
  return result;
}
