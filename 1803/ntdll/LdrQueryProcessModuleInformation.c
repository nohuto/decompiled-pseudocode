/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x180004000
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077930 @ 0x180077930 (sub_180077930.c)
 */

NTSTATUS __cdecl LdrQueryProcessModuleInformation(
        PRTL_PROCESS_MODULES ModuleInformation,
        ULONG Size,
        PULONG ReturnedSize)
{
  return sub_180077930(0, 2, (_DWORD)ModuleInformation, Size, (__int64)ReturnedSize);
}
