/*
 * XREFs of EtwpCovSampCaptureContextStop @ 0x1402B4C98
 * Callers:
 *     EtwpCoverageSamplerStop @ 0x1407B8748 (EtwpCoverageSamplerStop.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     EtwpCovSampCaptureCancelApcs @ 0x1402B4A98 (EtwpCovSampCaptureCancelApcs.c)
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1402B4BB8 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1402B4E04 (EtwpCovSampCaptureFlushSampleBuffers.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1407B3C74 (EtwpCovSampCaptureFreeLookasides.c)
 */

_QWORD *__fastcall EtwpCovSampCaptureContextStop(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  KSPIN_LOCK *v3; // rbx
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 *i; // rdx
  LARGE_INTEGER v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (KSPIN_LOCK *)(a1 + 264);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 264));
  *(_DWORD *)(a1 + 912) = 0;
  v5 = v4;
  if ( *(_DWORD *)(a1 + 916) )
    *(_DWORD *)(a1 + 916) = 0;
  for ( i = *(__int64 **)(a1 + 576); i != (__int64 *)(a1 + 576); i = (__int64 *)*i )
  {
    *((_DWORD *)i + 6) = 0;
    *((_DWORD *)i + 7) = 0;
  }
  KeResetEvent((PRKEVENT)(a1 + 888));
  *(_DWORD *)(a1 + 920) = 0;
  KxReleaseSpinLock(v3);
  __writecr8(v5);
  EtwpCovSampCaptureFlushSampleBuffers(a1);
  EtwpCovSampCaptureCleanupLookasides(a1);
  v7.QuadPart = -2500000LL;
LABEL_7:
  Timeout = v7;
  while ( KeWaitForSingleObject((PVOID)(a1 + 888), Executive, 0, 0, &Timeout) )
  {
    EtwpCovSampCaptureCancelApcs(a1);
    EtwpCovSampCaptureFlushSampleBuffers(a1);
    v7.QuadPart *= 2LL;
    Timeout = v7;
    if ( v7.QuadPart < -9600000000LL )
    {
      v7.QuadPart = -9600000000LL;
      goto LABEL_7;
    }
  }
  EtwpCovSampCaptureFreeLookasides(a1);
  v8 = *(void **)(a1 + 944);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x56777445u);
    *(_QWORD *)(a1 + 944) = 0LL;
  }
  v9 = *(void **)(a1 + 952);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x56777445u);
    *(_QWORD *)(a1 + 952) = 0LL;
  }
  *(_QWORD *)(a1 + 936) = 0LL;
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
