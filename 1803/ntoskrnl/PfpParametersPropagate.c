/*
 * XREFs of PfpParametersPropagate @ 0x14075CCAC
 * Callers:
 *     PfpParametersWatcher @ 0x14075CDD0 (PfpParametersWatcher.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     PfTStart @ 0x1406451D8 (PfTStart.c)
 *     PfTCleanup @ 0x14075C578 (PfTCleanup.c)
 *     PfpRpShutdown @ 0x14075C858 (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  void *v8; // rdx
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  if ( (dword_1403CD188 & 1) != 0 )
    v3 = a1[20] != dword_1403CD39C;
  if ( (dword_1403CD188 & 2) != 0 && a1[19] != dword_1403CD3A4 )
    v3 |= 2u;
  if ( (dword_1403CD188 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize((__int64)&PfTGlobals, v7, 1);
    PfTStart((__int64)&PfTGlobals, v8, v3);
  }
  v9 = a1[17] & 2;
  if ( ((a1[17] & 2) != 0) != (dword_1403CD7F0 & 1) )
  {
    if ( (_DWORD)v9 )
    {
      _InterlockedExchange64(&qword_1403CD7E0, 0LL);
      dword_1403CD7F0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_1403CD758);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals, v9, v5, v6);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
