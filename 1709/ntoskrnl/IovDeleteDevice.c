/*
 * XREFs of IovDeleteDevice @ 0x1407A4FCC
 * Callers:
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 * Callees:
 *     VfIoDeleteDevice @ 0x1407B4248 (VfIoDeleteDevice.c)
 */

__int64 __fastcall IovDeleteDevice(ULONG_PTR a1)
{
  return VfIoDeleteDevice(a1);
}
