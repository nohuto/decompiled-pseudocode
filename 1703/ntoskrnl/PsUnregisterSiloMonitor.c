/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1406E3000
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
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x14023897C (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x14023898C (PspGetServerSiloStatePointer.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x14054B0C4 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x1406E4CD4 (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x1406E4D6C (PspStorageRemoveObject.c)
 */

void __fastcall PsUnregisterSiloMonitor(unsigned int *P)
{
  struct _KTHREAD *CurrentThread; // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v5; // rsi
  __int64 HostSilo; // rax
  void (__fastcall *v7)(_QWORD); // rcx
  PVOID *v8; // rax
  __int64 HostSiloStorage; // rax
  __int64 v10; // r8
  int v11; // ebx
  $5BC46E0569261879018906DEC3127961 v12; // [rsp+20h] [rbp-48h] BYREF

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
    v8 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(unsigned int **)(*(_QWORD *)P + 8LL) != P || *v8 != P )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
