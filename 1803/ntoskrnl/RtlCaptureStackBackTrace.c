/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140130B00
 * Callers:
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 *     MiShowBadMapper @ 0x140251FB0 (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x1402539C4 (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x140286898 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x140289080 (RtlGetCallersAddress.c)
 *     RtlpHpHeapHandleError @ 0x14029367C (RtlpHpHeapHandleError.c)
 *     SepGetStackTraceHash @ 0x14029FBDC (SepGetStackTraceHash.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x1402AAEDC (ViKeLogCriticalRegionStackTrace.c)
 *     CmpLogDirtyVectorUse @ 0x140498F50 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x140812740 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x140820A0C (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x14082549C (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x140825800 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x14082767C (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140827CF8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1408288DC (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x140828A64 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1401309E0 (RtlWalkFrameChain.c)
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
