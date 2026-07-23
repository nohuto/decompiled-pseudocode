/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A5760
 * Callers:
 *     sub_1800016BC @ 0x1800016BC (sub_1800016BC.c)
 *     sub_180001E74 @ 0x180001E74 (sub_180001E74.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_18000D764 @ 0x18000D764 (sub_18000D764.c)
 *     sub_18001E548 @ 0x18001E548 (sub_18001E548.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_18002FEC4 @ 0x18002FEC4 (sub_18002FEC4.c)
 *     sub_1800313E0 @ 0x1800313E0 (sub_1800313E0.c)
 *     sub_180034A40 @ 0x180034A40 (sub_180034A40.c)
 *     LdrResSearchResource @ 0x180059D70 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x18005BF00 (LdrpResGetMappingSize.c)
 *     sub_1800867F4 @ 0x1800867F4 (sub_1800867F4.c)
 *     sub_180086CEC @ 0x180086CEC (sub_180086CEC.c)
 *     sub_18008AA3C @ 0x18008AA3C (sub_18008AA3C.c)
 *     RtlLockCurrentThread @ 0x18008BC60 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x18008BD20 (RtlUnlockCurrentThread.c)
 *     sub_18008C2B0 @ 0x18008C2B0 (sub_18008C2B0.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 *     sub_1800EFBEC @ 0x1800EFBEC (sub_1800EFBEC.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F30F0 (RtlFlushSecureMemoryCache.c)
 *     sub_1800F3AF8 @ 0x1800F3AF8 (sub_1800F3AF8.c)
 *     RtlGetNonVolatileToken @ 0x1800F3F50 (RtlGetNonVolatileToken.c)
 *     sub_1800F5B90 @ 0x1800F5B90 (sub_1800F5B90.c)
 *     sub_180100B70 @ 0x180100B70 (sub_180100B70.c)
 *     sub_180100F68 @ 0x180100F68 (sub_180100F68.c)
 *     sub_180102C1C @ 0x180102C1C (sub_180102C1C.c)
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
