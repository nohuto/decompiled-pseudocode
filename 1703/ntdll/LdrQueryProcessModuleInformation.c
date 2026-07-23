/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180004E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067C7C @ 0x180067C7C (sub_180067C7C.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return sub_180067C7C(0, 2, (_DWORD)ModuleInformation, Size, (__int64)ReturnedSize);
}
