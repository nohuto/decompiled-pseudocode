/*
 * XREFs of PsStartSiloMonitor @ 0x140647BE0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PspGetServerSiloStatePointer @ 0x140283E4C (PspGetServerSiloStatePointer.c)
 *     PspGetNextSilo @ 0x140535274 (PspGetNextSilo.c)
 *     PspInvokeCreateCallback @ 0x140647D84 (PspInvokeCreateCallback.c)
 *     PspInvokeTerminateCallback @ 0x14077D50C (PspInvokeTerminateCallback.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *i; // rcx
  void *NextSilo; // rax
  char v9; // bp
  int v10; // r14d
  void *j; // rcx
  void *v12; // rax
  void *v13; // rdi
  __int64 *v14; // rax
  char v15; // si
  __int64 HostSilo; // rbp
  int v18; // ebp
  void *k; // rcx
  void *v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  _BYTE v23[48]; // [rsp+20h] [rbp-58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = (void *)v5 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v5 = (__int64)NextSilo;
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
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v23);
      HostSilo = PsGetHostSilo();
      v2 = PspInvokeCreateCallback(HostSilo, a1);
      if ( v2 < 0 && *(_QWORD *)(a1 + 32) )
        PspInvokeTerminateCallback(HostSilo, a1);
      KiUnstackDetachProcess((__int64)v23, 0LL);
      if ( v2 >= 0 )
      {
LABEL_8:
        v9 = 0;
        v10 = 0;
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v23);
        for ( j = 0LL; ; j = v13 )
        {
          v12 = PspGetNextSilo(j, 1);
          v13 = v12;
          if ( !v12 )
            break;
          if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v12) - 1) <= 2 )
          {
            ++v10;
            if ( (int)PspInvokeCreateCallback(v13, a1) < 0 )
              v9 = 1;
          }
        }
        KiUnstackDetachProcess((__int64)v23, 0LL);
        if ( v9 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v18 = 0;
            KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v23);
            for ( k = 0LL; ; k = v21 )
            {
              v20 = PspGetNextSilo(k, 1);
              v21 = v20;
              if ( !v20 )
                break;
              if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)v20) - 1) <= 2 )
              {
                PspInvokeTerminateCallback(v21, a1);
                ++v18;
              }
            }
            if ( v10 != v18 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v22 = PsGetHostSilo();
              PspInvokeCreateCallback(v22, a1);
            }
            KiUnstackDetachProcess((__int64)v23, 0LL);
          }
          v2 = -1073741248;
        }
        else
        {
          v14 = (__int64 *)qword_1403A6148;
          if ( *(__int64 **)qword_1403A6148 != &PspSiloMonitorList )
            __fastfail(3u);
          *(_QWORD *)a1 = &PspSiloMonitorList;
          v2 = 0;
          *(_QWORD *)(a1 + 8) = v14;
          *v14 = a1;
          qword_1403A6148 = a1;
        }
      }
    }
  }
LABEL_13:
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock, v4, v5, v6);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}
