/*
 * XREFs of IovDeleteDevice @ 0x140763308
 * Callers:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall IovDeleteDevice(__int64 a1, __int64 a2)
{
  return VfIoDeleteDevice(a1, a2);
}
