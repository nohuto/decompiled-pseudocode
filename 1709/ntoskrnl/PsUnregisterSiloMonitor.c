/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1407195D0
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
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x14024DA5C (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x14024DA6C (PspGetServerSiloStatePointer.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x140510998 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x14071D0C4 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14071D15C (PspStorageRemoveObject.c)
 */

void __fastcall PsUnregisterSiloMonitor(unsigned int *P)
{
  struct _KTHREAD *CurrentThread; // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rsi
  __int64 HostSilo; // rax
  void (__fastcall *v7)(_QWORD); // rax
  PVOID *v8; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v10; // r8
  int v11; // ebx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v12; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  if ( *(_OWORD *)P != 0LL )
  {
    if ( *((_QWORD *)P + 4) )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v12);
      for ( i = 0LL; ; i = v5 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v5 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          (*((void (__fastcall **)(void *))P + 4))(v5);
      }
      if ( *((_BYTE *)P + 16) )
      {
        HostSilo = PsGetHostSilo();
        (*((void (__fastcall **)(__int64))P + 4))(HostSilo);
      }
      KiUnstackDetachProcess(&v12, 0LL);
    }
    v7 = *(void (__fastcall **)(_QWORD))P;
    if ( *(unsigned int **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v12);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v10) = 1;
    v11 = PspStorageRemoveObject(HostSiloStorage, P[5], v10, 0LL);
    KiUnstackDetachProcess(&v12, 0LL);
    if ( v11 != -1073741275 )
    {
      if ( v11 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(P[5]);
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
