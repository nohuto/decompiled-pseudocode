/*
 * XREFs of LdrGetProcedureAddressEx @ 0x1800560C0
 * Callers:
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
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
