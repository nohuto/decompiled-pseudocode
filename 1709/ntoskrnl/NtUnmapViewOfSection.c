/*
 * XREFs of NtUnmapViewOfSection @ 0x140583D34
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x140499FA0 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __stdcall NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return NtUnmapViewOfSectionEx(ProcessHandle, BaseAddress, 0);
}
