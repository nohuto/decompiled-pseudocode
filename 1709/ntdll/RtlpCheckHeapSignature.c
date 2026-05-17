/*
 * XREFs of RtlpCheckHeapSignature @ 0x18004A1AC
 * Callers:
 *     RtlLockHeap @ 0x18004A090 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18004A120 (RtlUnlockHeap.c)
 *     RtlValidateHeap @ 0x18004BEC0 (RtlValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x180103090 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x18010343C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180103874 (RtlDebugCreateTagHeap.c)
 *     RtlDebugDestroyHeap @ 0x1801039B0 (RtlDebugDestroyHeap.c)
 *     RtlDebugFreeHeap @ 0x180103A6C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180103D5C (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180103EFC (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180104040 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180104594 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180104758 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801048E8 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180104A64 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180104AEC (RtlDebugZeroHeap.c)
 * Callees:
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180104C08 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCheckHeapSignature(_DWORD *a1, const char *a2)
{
  if ( a1[38] == -285217025 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", a1);
  if ( a2 )
    DbgPrint(", passed to %s", a2);
  DbgPrint("\n");
  RtlpBreakPointHeap();
  return 0;
}
