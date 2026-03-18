/*
 * XREFs of PoSetDeviceBusyEx @ 0x1402748C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PoSetDeviceBusyEx(PULONG IdlePointer)
{
  _InterlockedIncrement((volatile signed __int32 *)IdlePointer + 1);
}
