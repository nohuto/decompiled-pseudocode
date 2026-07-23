/*
 * XREFs of ZwSetEvent @ 0x18009AC80
 * Callers:
 *     sub_180003FA8 @ 0x180003FA8 (sub_180003FA8.c)
 *     sub_18000881C @ 0x18000881C (sub_18000881C.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     RtlpUnWaitCriticalSection @ 0x18004A860 (RtlpUnWaitCriticalSection.c)
 *     sub_18004AE00 @ 0x18004AE00 (sub_18004AE00.c)
 *     sub_180055078 @ 0x180055078 (sub_180055078.c)
 *     sub_18005907C @ 0x18005907C (sub_18005907C.c)
 *     sub_1800594E0 @ 0x1800594E0 (sub_1800594E0.c)
 *     sub_1800730D0 @ 0x1800730D0 (sub_1800730D0.c)
 *     sub_18009A320 @ 0x18009A320 (sub_18009A320.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     sub_1800F3E58 @ 0x1800F3E58 (sub_1800F3E58.c)
 *     sub_1800F7710 @ 0x1800F7710 (sub_1800F7710.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 14;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
