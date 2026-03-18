/*
 * XREFs of RtlCaptureStackBackTrace @ 0x14006E1E0
 * Callers:
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     RtlpLogHeapFailure @ 0x14017D77C (RtlpLogHeapFailure.c)
 *     MiShowBadMapper @ 0x14020CCEC (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x14020E384 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x140225958 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x14023B538 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x14023DC60 (RtlGetCallersAddress.c)
 *     SepGetStackTraceHash @ 0x140246B0C (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14025155C (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x1404B7DAC (CmpLogDirtyVectorUse.c)
 *     VfPendingFinishLogging @ 0x140771ABC (VfPendingFinishLogging.c)
 *     ViPoolLogStackCallout @ 0x140775AB0 (ViPoolLogStackCallout.c)
 *     ViFaultsInjectionNotification @ 0x140776448 (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x1407767AC (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x140778434 (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140778A28 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x140779620 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1407797A0 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
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
