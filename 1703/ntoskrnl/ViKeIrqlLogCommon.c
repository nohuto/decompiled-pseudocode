/*
 * XREFs of ViKeIrqlLogCommon @ 0x140778434
 * Callers:
 *     VerifierKeReleaseQueuedSpinLock @ 0x140770A50 (VerifierKeReleaseQueuedSpinLock.c)
 *     VerifierKeLowerIrql @ 0x140777340 (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLockCommon @ 0x1407774EC (VerifierKeReleaseInStackQueuedSpinLockCommon.c)
 *     VerifierKeReleaseSpinLock @ 0x140777870 (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1407779D0 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140778000 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407785D0 (ViKeRaiseIrqlSanityChecks.c)
 *     VerifierExReleaseFastMutex @ 0x14077FD10 (VerifierExReleaseFastMutex.c)
 *     ViExAcquireFastMutexCommon @ 0x140780168 (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1407802B8 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
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
