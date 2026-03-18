/*
 * XREFs of NtCreateProfileEx @ 0x140760974
 * Callers:
 *     <none>
 * Callees:
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 */

NTSTATUS __stdcall NtCreateProfileEx(
        PHANDLE ProfileHandle,
        HANDLE ProcessHandle,
        PVOID ImageBase,
        SIZE_T ImageSize,
        ULONG Granularity,
        PVOID Buffer,
        ULONG ProfilingSize,
        KPROFILE_SOURCE Source,
        USHORT GroupCount,
        PGROUP_AFFINITY Affinity)
{
  return ExpProfileCreate(
           (unsigned __int64)ProfileHandle,
           (ULONG_PTR)ProcessHandle,
           (unsigned __int64)ImageBase,
           ImageSize,
           Granularity,
           Buffer,
           ProfilingSize,
           Source,
           GroupCount,
           (unsigned __int64)Affinity,
           0);
}
