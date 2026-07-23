/*
 * XREFs of ZwFreeVirtualMemory @ 0x1800A0480
 * Callers:
 *     WerpFreeSid @ 0x180002620 (WerpFreeSid.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800036E8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpHeapAllocate @ 0x180003B70 (RtlpHpHeapAllocate.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800193D0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpHpSegPageRangeDecommit @ 0x18004A1DC (RtlpHpSegPageRangeDecommit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18004A630 (RtlpSecMemFreeVirtualMemory.c)
 *     PsspCaptureHandleInformation @ 0x18005BD74 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x18005CCA8 (PsspFreeLinkedHandleList.c)
 *     PsspCaptureAuxiliaryPages @ 0x18005CD24 (PsspCaptureAuxiliaryPages.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18005D2A4 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PssNtFreeSnapshot @ 0x18005D700 (PssNtFreeSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18005E2A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     EtwpShutdownCompression @ 0x18005EEFC (EtwpShutdownCompression.c)
 *     EtwpFreeLoggerContext @ 0x180060EAC (EtwpFreeLoggerContext.c)
 *     RtlpHpHeapDestroy @ 0x1800615DC (RtlpHpHeapDestroy.c)
 *     RtlpHpSegSegmentFree @ 0x1800620C0 (RtlpHpSegSegmentFree.c)
 *     EtwpAllocateTraceBufferPool @ 0x18006474C (EtwpAllocateTraceBufferPool.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1800671A4 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpHpLargeAlloc @ 0x18006EC20 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x18006F490 (RtlpHpLargeFree.c)
 *     RtlpInitParameterBlock @ 0x18007FE88 (RtlpInitParameterBlock.c)
 *     RtlFreeUserStack @ 0x180086D30 (RtlFreeUserStack.c)
 *     RtlDestroyMemoryZone @ 0x180087DC0 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180088760 (RtlDestroyHandleTable.c)
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 *     GetShipAssertBuffer @ 0x18008FC0C (GetShipAssertBuffer.c)
 *     LdrCreateEnclave @ 0x1800CFF70 (LdrCreateEnclave.c)
 *     LdrDeleteEnclave @ 0x1800D0060 (LdrDeleteEnclave.c)
 *     RtlCreateProcessReflection @ 0x1800D6CD0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D7260 (RtlpProcessReflectionStartup.c)
 *     WerReportExceptionWorker @ 0x1800DD4C0 (WerReportExceptionWorker.c)
 *     RtlExtendMemoryZone @ 0x1800E8B70 (RtlExtendMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x1800FA100 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FA140 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x1800FB238 (RtlpTraceDatabaseFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180105BF0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpLargeAllocationDestroy @ 0x180107570 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x180107690 (RtlpHpLargeReAlloc.c)
 *     PssNtFreeRemoteSnapshot @ 0x18010B890 (PssNtFreeRemoteSnapshot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
