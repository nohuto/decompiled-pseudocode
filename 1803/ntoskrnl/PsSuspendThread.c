/*
 * XREFs of PsSuspendThread @ 0x1405792D0
 * Callers:
 *     NtSuspendThread @ 0x140579210 (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x14070EB0C (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x14071043C (DbgkQueueUserExceptionReport.c)
 *     PsSuspendProcess @ 0x14077E540 (PsSuspendProcess.c)
 * Callees:
 *     KeSuspendThread @ 0x14004584C (KeSuspendThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PsSuspendThread(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _EX_RUNDOWN_REF *v5; // r14
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-28h]

  v8 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (struct _EX_RUNDOWN_REF *)(a1 + 1720);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 1720)) )
  {
    if ( (*(_DWORD *)(a1 + 1744) & 1) != 0 )
    {
      v6 = -1073741749;
    }
    else
    {
      v8 = KeSuspendThread(a1);
      v6 = 0;
    }
    ExReleaseRundownProtection(v5);
  }
  else
  {
    v6 = -1073741749;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    *a2 = v8;
  return v6;
}
