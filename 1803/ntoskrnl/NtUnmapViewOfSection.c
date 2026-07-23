/*
 * XREFs of NtUnmapViewOfSection @ 0x1404D6F24
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x1404D6F40 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __stdcall NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return NtUnmapViewOfSectionEx(ProcessHandle, BaseAddress, 0);
}
