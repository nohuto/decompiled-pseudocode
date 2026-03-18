/*
 * XREFs of PsUnregisterSiloMonitor @ 0x14077D330
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
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PspGetHostSiloStorage @ 0x140283E3C (PspGetHostSiloStorage.c)
 *     PspGetServerSiloStatePointer @ 0x140283E4C (PspGetServerSiloStatePointer.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspGetNextSilo @ 0x140535274 (PspGetNextSilo.c)
 *     PspStorageFreeSlot @ 0x1407808EC (PspStorageFreeSlot.c)
 *     PspStorageRemoveObject @ 0x14078098C (PspStorageRemoveObject.c)
 */

void __fastcall PsUnregisterSiloMonitor(void (__fastcall **P)(_QWORD))
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  void (__fastcall *v6)(_QWORD); // rax
  void *i; // rcx
  void *NextSilo; // rax
  void *v9; // rsi
  __int64 HostSilo; // rax
  PVOID *v11; // rcx
  __int64 HostSiloStorage; // rax
  __int64 v13; // r8
  int v14; // ebx
  _BYTE v15[48]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspSiloMonitorLock, 0LL);
  v6 = *P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( P[4] )
    {
      KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v15);
      for ( i = 0LL; ; i = v9 )
      {
        NextSilo = PspGetNextSilo(i, 1);
        v9 = NextSilo;
        if ( !NextSilo )
          break;
        if ( (unsigned int)(*(_DWORD *)PspGetServerSiloStatePointer((__int64)NextSilo) - 1) <= 2 )
          ((void (__fastcall **)(void *))P)[4](v9);
      }
      if ( *((_BYTE *)P + 16) )
      {
        HostSilo = PsGetHostSilo();
        P[4](HostSilo);
      }
      KiUnstackDetachProcess((__int64)v15, 0LL);
      v6 = *P;
    }
    if ( *((void (__fastcall ***)(_QWORD))v6 + 1) != P || (v11 = (PVOID *)P[1], *v11 != P) )
      __fastfail(3u);
    *v11 = v6;
    *((_QWORD *)v6 + 1) = v11;
    *P = 0LL;
    P[1] = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock, v3, v4, v5);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( *((_BYTE *)P + 16) )
  {
    KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v15);
    HostSiloStorage = PspGetHostSiloStorage();
    LOBYTE(v13) = 1;
    v14 = PspStorageRemoveObject(HostSiloStorage, *((unsigned int *)P + 5), v13, 0LL);
    KiUnstackDetachProcess((__int64)v15, 0LL);
    if ( v14 )
    {
      if ( v14 != -1073741275 )
        NT_ASSERT("Status == ((NTSTATUS)0x00000000L) || Status == ((NTSTATUS)0xC0000225L)");
    }
  }
  PspStorageFreeSlot(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
