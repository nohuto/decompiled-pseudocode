/*
 * XREFs of LdrGetProcedureAddressEx @ 0x180015D80
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x180015A3C (LdrpGetShimEngineInterface.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800293D0 (LdrGetProcedureAddressForCaller.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressEx(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags)
{
  PVOID *Callback; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(DllHandle, ProcedureName, ProcedureNumber, ProcedureAddress, Flags, Callback);
}
