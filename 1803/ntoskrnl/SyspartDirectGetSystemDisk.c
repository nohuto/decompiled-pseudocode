/*
 * XREFs of SyspartDirectGetSystemDisk @ 0x1405F26F0
 * Callers:
 *     <none>
 * Callees:
 *     SiGetSystemDeviceName @ 0x1405695B4 (SiGetSystemDeviceName.c)
 */

__int64 __fastcall SyspartDirectGetSystemDisk(void *a1, unsigned int a2, unsigned int *a3)
{
  return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemDisk, a1, a2, a3);
}
