/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1800A5600
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 *     sub_1800024C4 @ 0x1800024C4 (sub_1800024C4.c)
 *     sub_180003F2C @ 0x180003F2C (sub_180003F2C.c)
 *     sub_180004B3C @ 0x180004B3C (sub_180004B3C.c)
 *     sub_180007900 @ 0x180007900 (sub_180007900.c)
 *     sub_18000799C @ 0x18000799C (sub_18000799C.c)
 *     sub_180009164 @ 0x180009164 (sub_180009164.c)
 *     sub_18000A020 @ 0x18000A020 (sub_18000A020.c)
 *     sub_18000A73C @ 0x18000A73C (sub_18000A73C.c)
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     sub_18000C8C0 @ 0x18000C8C0 (sub_18000C8C0.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_18000EA74 @ 0x18000EA74 (sub_18000EA74.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C138 @ 0x18001C138 (sub_18001C138.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     sub_18002CC00 @ 0x18002CC00 (sub_18002CC00.c)
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 *     sub_18005304C @ 0x18005304C (sub_18005304C.c)
 *     RtlCreateQueryDebugBuffer @ 0x180056140 (RtlCreateQueryDebugBuffer.c)
 *     sub_180056B50 @ 0x180056B50 (sub_180056B50.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     RtlCommitDebugInfo_0 @ 0x1800682D4 (RtlCommitDebugInfo_0.c)
 *     RtlAllocateHandle @ 0x180072B10 (RtlAllocateHandle.c)
 *     sub_180072F9C @ 0x180072F9C (sub_180072F9C.c)
 *     sub_180078E44 @ 0x180078E44 (sub_180078E44.c)
 *     RtlCreateMemoryZone @ 0x180080280 (RtlCreateMemoryZone.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     RtlCreateUserStack @ 0x180085920 (RtlCreateUserStack.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     sub_1800D9C04 @ 0x1800D9C04 (sub_1800D9C04.c)
 *     sub_1800DE6C4 @ 0x1800DE6C4 (sub_1800DE6C4.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 *     RtlExtendMemoryZone @ 0x1800E9820 (RtlExtendMemoryZone.c)
 *     RtlValidateProcessHeaps @ 0x1800EFD20 (RtlValidateProcessHeaps.c)
 *     sub_1800EFE3C @ 0x1800EFE3C (sub_1800EFE3C.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 *     sub_1800F8D00 @ 0x1800F8D00 (sub_1800F8D00.c)
 *     sub_1800F916C @ 0x1800F916C (sub_1800F916C.c)
 *     sub_1800F9244 @ 0x1800F9244 (sub_1800F9244.c)
 *     sub_1800F9CE0 @ 0x1800F9CE0 (sub_1800F9CE0.c)
 *     sub_180106D98 @ 0x180106D98 (sub_180106D98.c)
 *     sub_1801077AC @ 0x1801077AC (sub_1801077AC.c)
 *     sub_18010840C @ 0x18010840C (sub_18010840C.c)
 *     sub_1801088FC @ 0x1801088FC (sub_1801088FC.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
