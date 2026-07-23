/*
 * XREFs of ZwWriteVirtualMemory @ 0x18009B200
 * Callers:
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     sub_1800ECAC0 @ 0x1800ECAC0 (sub_1800ECAC0.c)
 *     RtlRemoteCall @ 0x1800F45B0 (RtlRemoteCall.c)
 *     sub_18010BD7C @ 0x18010BD7C (sub_18010BD7C.c)
 *     sub_18010C2E8 @ 0x18010C2E8 (sub_18010C2E8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesWritten)
{
  NTSTATUS result; // eax

  result = 58;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
