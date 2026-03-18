/*
 * XREFs of EtwpCovSampAcquireSamplerRundown @ 0x1407B3294
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1407B3478 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1407B358C (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampImageNotify @ 0x1407B63B0 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1407B6E40 (EtwpCovSampSampleBufferProcess.c)
 *     EtwpCoverageSamplerQuery @ 0x1407B7744 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1407B89DC (EtwpCoverageSamplerUnloadImage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall EtwpCovSampAcquireSamplerRundown(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&stru_1403A1CE0) )
  {
    *a1 = qword_1403A1CD8;
    return 0LL;
  }
  else
  {
    KeLeaveCriticalRegion();
    return 3221225865LL;
  }
}
