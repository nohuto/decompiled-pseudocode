/*
 * XREFs of ZwAllocateVirtualMemory @ 0x18009ADC0
 * Callers:
 *     sub_180003DE4 @ 0x180003DE4 (sub_180003DE4.c)
 *     RtlExtendMemoryZone @ 0x180003E90 (RtlExtendMemoryZone.c)
 *     sub_18000625C @ 0x18000625C (sub_18000625C.c)
 *     sub_180006360 @ 0x180006360 (sub_180006360.c)
 *     sub_18000AAA8 @ 0x18000AAA8 (sub_18000AAA8.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_18002A7C8 @ 0x18002A7C8 (sub_18002A7C8.c)
 *     RtlCreateQueryDebugBuffer @ 0x18004C9A0 (RtlCreateQueryDebugBuffer.c)
 *     RtlAllocateHandle @ 0x18004D6F0 (RtlAllocateHandle.c)
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     RtlCreateMemoryZone @ 0x180073A60 (RtlCreateMemoryZone.c)
 *     sub_18007488C @ 0x18007488C (sub_18007488C.c)
 *     RtlCommitDebugInfo_0 @ 0x180077EAC (RtlCommitDebugInfo_0.c)
 *     RtlCreateUserStack @ 0x18007A490 (RtlCreateUserStack.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     sub_1800D2FD8 @ 0x1800D2FD8 (sub_1800D2FD8.c)
 *     sub_1800D7A54 @ 0x1800D7A54 (sub_1800D7A54.c)
 *     sub_1800D7F24 @ 0x1800D7F24 (sub_1800D7F24.c)
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 *     sub_1800D8968 @ 0x1800D8968 (sub_1800D8968.c)
 *     RtlValidateProcessHeaps @ 0x1800EBD00 (RtlValidateProcessHeaps.c)
 *     sub_1800EBE38 @ 0x1800EBE38 (sub_1800EBE38.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 *     sub_1800F6800 @ 0x1800F6800 (sub_1800F6800.c)
 *     sub_1800F6C6C @ 0x1800F6C6C (sub_1800F6C6C.c)
 *     sub_1800F6D48 @ 0x1800F6D48 (sub_1800F6D48.c)
 *     sub_1800F7CB0 @ 0x1800F7CB0 (sub_1800F7CB0.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     PssNtCaptureSnapshot @ 0x180109790 (PssNtCaptureSnapshot.c)
 *     sub_18010A448 @ 0x18010A448 (sub_18010A448.c)
 *     sub_18010AD6C @ 0x18010AD6C (sub_18010AD6C.c)
 *     sub_18010B78C @ 0x18010B78C (sub_18010B78C.c)
 *     sub_18010BD7C @ 0x18010BD7C (sub_18010BD7C.c)
 *     sub_18010C2E8 @ 0x18010C2E8 (sub_18010C2E8.c)
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
