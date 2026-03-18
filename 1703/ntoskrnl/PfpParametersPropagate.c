/*
 * XREFs of PfpParametersPropagate @ 0x1406C4E1C
 * Callers:
 *     PfpParametersWatcher @ 0x1406C4F40 (PfpParametersWatcher.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x1405C8078 (PfTInitialize.c)
 *     PfTStart @ 0x1405D83BC (PfTStart.c)
 *     PfTCleanup @ 0x1406C46A8 (PfTCleanup.c)
 *     PfpRpShutdown @ 0x1406C4984 (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rdx
  void *v6; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  if ( (dword_14036D908 & 1) != 0 )
    v3 = a1[20] != dword_14036DB1C;
  if ( (dword_14036D908 & 2) != 0 && a1[19] != dword_14036DB24 )
    v3 |= 2u;
  if ( (dword_14036D908 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize((__int64)&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_14036DF70 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_14036DF60, 0LL);
      dword_14036DF70 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_14036DED8);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
