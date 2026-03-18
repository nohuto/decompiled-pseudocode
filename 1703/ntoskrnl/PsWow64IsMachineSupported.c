/*
 * XREFs of PsWow64IsMachineSupported @ 0x140426784
 * Callers:
 *     PsWow64GetSupportedArchitectures @ 0x14000AEB4 (PsWow64GetSupportedArchitectures.c)
 * Callees:
 *     PspWow64GetSharedInformation @ 0x1404267A8 (PspWow64GetSharedInformation.c)
 */

_BOOL8 __fastcall PsWow64IsMachineSupported(__int64 a1)
{
  return PspWow64GetSharedInformation(a1, 6LL) != 0;
}
