/*
 * XREFs of PsStartSiloMonitor @ 0x1405CB6A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PspGetServerSiloStatePointer @ 0x14023898C (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x1405CB848 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x1406E31DC (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  void *i; // rcx
  void *NextSilo; // rax
  char v6; // bp
  int v7; // r14d
  void *j; // rcx
  void *v9; // rax
  void *v10; // rsi
  __int64 *v11; // rax
  __int64 HostSilo; // rbp
  void *v14; // r8
  int v15; // ebp
  void *k; // rcx
  void *v17; // rax
  void *v18; // rsi
  __int64 v19; // rax
  $5BC46E0569261879018906DEC3127961 v20; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v14 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
        {
          v2 = -1073741637;
          goto LABEL_13;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_8;
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v20);
      HostSilo = PsGetHostSilo();
      v2 = PspInvokeCreateCallback(HostSilo, a1);
      if ( v2 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(HostSilo, a1);
      KiUnstackDetachProcess(&v20, 0LL);
      if ( v2 >= 0 )
      {
LABEL_8:
        v6 = 0;
        v7 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v20);
        for ( j = 0LL; ; j = v10 )
        {
          v9 = PspGetNextSilo(j, 1);
          v10 = v9;
          if ( !v9 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v9) - 1) <= 2 )
          {
            ++v7;
            if ( (int)PspInvokeCreateCallback(v10, a1) < 0 )
              v6 = 1;
          }
        }
        KiUnstackDetachProcess(&v20, 0LL);
        if ( v6 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v15 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v20);
            for ( k = 0LL; ; k = v18 )
            {
              v17 = PspGetNextSilo(k, 1);
              v18 = v17;
              if ( !v17 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v17) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v18, a1);
                ++v15;
              }
            }
            if ( v7 != v15 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v19 = PsGetHostSilo();
              PspInvokeCreateCallback(v19, a1);
            }
            KiUnstackDetachProcess(&v20, 0LL);
          }
          v2 = -1073741248;
        }
        else
        {
          v11 = (__int64 *)qword_140348E88;
          if ( *(__int64 **)qword_140348E88 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v11;
          *v11 = a1;
          qword_140348E88 = a1;
        }
      }
    }
  }
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
