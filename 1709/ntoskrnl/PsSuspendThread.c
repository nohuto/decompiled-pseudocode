/*
 * XREFs of PsSuspendThread @ 0x1405829A0
 * Callers:
 *     PsSuspendProcess @ 0x140582840 (PsSuspendProcess.c)
 *     NtSuspendThread @ 0x1405828E4 (NtSuspendThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x1406AA3AC (DbgkpPostFakeThreadMessages.c)
 *     DbgkQueueUserExceptionReport @ 0x1406ABCD4 (DbgkQueueUserExceptionReport.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeSuspendThread @ 0x1400AC2F8 (KeSuspendThread.c)
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
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1720)) )
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
    ExReleaseRundownProtection_0(v5);
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
