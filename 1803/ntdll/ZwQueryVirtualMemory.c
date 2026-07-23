/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009AF20
 * Callers:
 *     sub_18000C4A0 @ 0x18000C4A0 (sub_18000C4A0.c)
 *     sub_18000EF10 @ 0x18000EF10 (sub_18000EF10.c)
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 *     sub_180011A6C @ 0x180011A6C (sub_180011A6C.c)
 *     sub_18002A38C @ 0x18002A38C (sub_18002A38C.c)
 *     sub_18004FC74 @ 0x18004FC74 (sub_18004FC74.c)
 *     LdrResSearchResource @ 0x180051250 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x180053280 (LdrpResGetMappingSize.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     RtlLockCurrentThread @ 0x180081720 (RtlLockCurrentThread.c)
 *     sub_180082060 @ 0x180082060 (sub_180082060.c)
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 *     RtlUnlockCurrentThread @ 0x180085B10 (RtlUnlockCurrentThread.c)
 *     sub_180087F60 @ 0x180087F60 (sub_180087F60.c)
 *     sub_1800C98F0 @ 0x1800C98F0 (sub_1800C98F0.c)
 *     sub_1800D078C @ 0x1800D078C (sub_1800D078C.c)
 *     sub_1800D8968 @ 0x1800D8968 (sub_1800D8968.c)
 *     sub_1800EBBBC @ 0x1800EBBBC (sub_1800EBBBC.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F01D0 (RtlFlushSecureMemoryCache.c)
 *     sub_1800F0C00 @ 0x1800F0C00 (sub_1800F0C00.c)
 *     RtlGetNonVolatileToken @ 0x1800F1070 (RtlGetNonVolatileToken.c)
 *     sub_1800F2E70 @ 0x1800F2E70 (sub_1800F2E70.c)
 *     sub_1800FFB1C @ 0x1800FFB1C (sub_1800FFB1C.c)
 *     sub_180104908 @ 0x180104908 (sub_180104908.c)
 *     sub_180105554 @ 0x180105554 (sub_180105554.c)
 *     sub_1801059D8 @ 0x1801059D8 (sub_1801059D8.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010A810 @ 0x18010A810 (sub_18010A810.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
