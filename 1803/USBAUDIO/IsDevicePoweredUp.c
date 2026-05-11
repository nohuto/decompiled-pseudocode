/*
 * XREFs of IsDevicePoweredUp @ 0x1C0017BF4
 * Callers:
 *     PinAddPinToList @ 0x1C00020D8 (PinAddPinToList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 520LL) == 1;
}
