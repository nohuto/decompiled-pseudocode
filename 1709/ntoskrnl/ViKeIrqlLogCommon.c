/*
 * XREFs of ViKeIrqlLogCommon @ 0x1407BA314
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x1407B27E0 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x1407B91C0 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1407B9370 (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x1407B9730 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1407B9E80 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1407B9EE0 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407BA4B0 (ViKeRaiseIrqlSanityChecks.c)
 *     VerifierExReleaseFastMutex @ 0x1407C1D00 (VerifierExReleaseFastMutex.c)
 *     ViExAcquireFastMutexCommon @ 0x1407C2168 (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1407C22B8 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 */

void __fastcall ViKeIrqlLogCommon(__int64 a1, ULONG a2)
{
  USHORT v3; // ax

  if ( a1 )
  {
    *(_QWORD *)a1 = KeGetCurrentThread();
    *(_DWORD *)(a1 + 12) = MEMORY[0xFFFFF78000000320];
    if ( (VfOptionFlags & 0x40) != 0 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    else
    {
      v3 = RtlCaptureStackBackTrace(a2, 5u, (PVOID *)(a1 + 16), 0LL);
      if ( v3 < 5u )
        *(_QWORD *)(a1 + 8LL * v3 + 16) = 0LL;
    }
  }
}
