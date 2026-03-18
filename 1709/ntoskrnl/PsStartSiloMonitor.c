/*
 * XREFs of PsStartSiloMonitor @ 0x1405DE8C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PspGetServerSiloStatePointer @ 0x14024DA6C (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140510998 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x1405DEA64 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x1407197AC (PspInvokeTerminateCallback.c)
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
  char v12; // bl
  __int64 HostSilo; // rbp
  void *v15; // r8
  int v16; // ebp
  void *k; // rcx
  void *v18; // rax
  void *v19; // rsi
  __int64 v20; // rax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v21; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v15 )
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
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v21);
      HostSilo = PsGetHostSilo();
      v2 = PspInvokeCreateCallback(HostSilo, a1);
      if ( v2 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(HostSilo, a1);
      KiUnstackDetachProcess(&v21, 0LL);
      if ( v2 >= 0 )
      {
LABEL_8:
        v6 = 0;
        v7 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v21);
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
        KiUnstackDetachProcess(&v21, 0LL);
        if ( v6 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v16 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v21);
            for ( k = 0LL; ; k = v19 )
            {
              v18 = PspGetNextSilo(k, 1);
              v19 = v18;
              if ( !v18 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v18) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v19, a1);
                ++v16;
              }
            }
            if ( v7 != v16 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v20 = PsGetHostSilo();
              PspInvokeCreateCallback(v20, a1);
            }
            KiUnstackDetachProcess(&v21, 0LL);
          }
          v2 = -1073741248;
        }
        else
        {
          v11 = (__int64 *)qword_140362998;
          if ( *(__int64 **)qword_140362998 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v11;
          *v11 = a1;
          qword_140362998 = a1;
        }
      }
    }
  }
LABEL_13:
  v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
