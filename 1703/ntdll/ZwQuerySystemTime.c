/*
 * XREFs of ZwQuerySystemTime @ 0x1800A5E40
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x180074550 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x1800747E0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180074B10 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     RtlRunEncodeUnicodeString @ 0x1800E5920 (RtlRunEncodeUnicodeString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return ZwQuerySystemTime_0(SystemTime);
}
