/*
 * XREFs of PsSuspendThread @ 0x1404C7C50
 * Callers:
 *     NtSuspendThread @ 0x1404C7B8C (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14067F234 (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x140680B08 (DbgkQueueUserExceptionReport.c)
 *     PsSuspendProcess @ 0x1406E4240 (PsSuspendProcess.c)
 * Callees:
 *     KeSuspendThread @ 0x140072F68 (KeSuspendThread.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]

  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1712)) )
  {
    if ( (*(_DWORD *)(a1 + 1736) & 1) != 0 )
    {
      v5 = -1073741749;
    }
    else
    {
      v7 = KeSuspendThread(a1);
      v5 = 0;
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1712));
  }
  else
  {
    v5 = -1073741749;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    *a2 = v7;
  return v5;
}
