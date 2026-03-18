/*
 * XREFs of IovDeleteDevice @ 0x140811F98
 * Callers:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
