/*
 * XREFs of NtdllpReallocateStringRoutine @ 0x1800D6828
 * Callers:
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18002BE5C (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpLoadDependentModule @ 0x18002F160 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180031E0C (LdrpAppendUnicodeStringToFilenameBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NtdllpReallocateStringRoutine(__int64 a1, __int64 a2)
{
  return RtlReAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a2, a1);
}
