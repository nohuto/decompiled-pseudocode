/*
 * XREFs of PoEndDeviceBusy @ 0x14022A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PoEndDeviceBusy(PULONG IdlePointer)
{
  _InterlockedDecrement((volatile signed __int32 *)IdlePointer + 2);
}
