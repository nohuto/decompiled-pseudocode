/*
 * XREFs of PfpParametersPropagate @ 0x1406F493C
 * Callers:
 *     PfpParametersWatcher @ 0x1406F4A60 (PfpParametersWatcher.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 *     PfTCleanup @ 0x1406F3D88 (PfTCleanup.c)
 *     PfTStart @ 0x1406F3FC8 (PfTStart.c)
 *     PfpRpShutdown @ 0x1406F4308 (PfpRpShutdown.c)
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
  if ( (dword_140387888 & 1) != 0 )
    v3 = a1[20] != dword_140387A9C;
  if ( (dword_140387888 & 2) != 0 && a1[19] != dword_140387AA4 )
    v3 |= 2u;
  if ( (dword_140387888 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, v4);
    PfTInitialize((__int64)&PfTGlobals, v5, 1);
    PfTStart((__int64)&PfTGlobals, v6, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_14038D3D0 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_14038D3C0, 0LL);
      dword_14038D3D0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_14038D338);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
