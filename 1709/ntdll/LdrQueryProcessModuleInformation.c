/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180002C10
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x1800172B8 (LdrQueryProcessModuleInformationEx.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return LdrQueryProcessModuleInformationEx(0, 2, (_DWORD)ModuleInformation, Size, (__int64)ReturnedSize);
}
