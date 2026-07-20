/*
 * XREFs of RtlLookupFunctionEntry_0 @ 0x14000C910
 * Callers:
 *     __report_gsfailure @ 0x14000C6E0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PRUNTIME_FUNCTION __stdcall RtlLookupFunctionEntry_0(
        DWORD64 ControlPc,
        PDWORD64 ImageBase,
        PUNWIND_HISTORY_TABLE HistoryTable)
{
  return RtlLookupFunctionEntry(ControlPc, ImageBase, HistoryTable);
}
