/*
 * XREFs of RtlInitializeSListHead @ 0x180076DA0
 * Callers:
 *     RtlpHpLfhContextInitialize @ 0x180004254 (RtlpHpLfhContextInitialize.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18007EF30 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E8B10 (RtlResetMemoryBlockLookaside.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FA140 (RtlStdInitializeStackDatabase.c)
 *     RtlpInitializeStackTraceLog @ 0x180100DB4 (RtlpInitializeStackTraceLog.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180106484 (RtlpSubSegmentDebugInitialize.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180112010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
