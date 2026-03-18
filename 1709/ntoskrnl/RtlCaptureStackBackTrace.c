/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1400D5700
 * Callers:
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 *     MiShowBadMapper @ 0x140213CEC (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x140215AE4 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x140250DE8 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x140253A10 (RtlGetCallersAddress.c)
 *     SepGetStackTraceHash @ 0x14025E24C (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x140277DCC (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x14051427C (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x1407A5770 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x1407B385C (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x1407B8244 (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x1407B85A8 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x1407BA314 (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1407BB52C (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1407BB6AC (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  ULONG v9; // ecx
  unsigned int v10; // r8d
  unsigned int i; // edx
  __int64 v13; // rax

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8);
  v9 = 0;
  v10 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v9 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v10 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v9;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
