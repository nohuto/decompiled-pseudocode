/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x1405A444C
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404CBB30 (CmpQueryHiveRedirectionFileList.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 *     CmpSendBootDeviceUsageNotification @ 0x14066A940 (CmpSendBootDeviceUsageNotification.c)
 */

NTSTATUS CmpInitializeSystemHivesLoad()
{
  _QWORD *v0; // rbx
  unsigned int i; // edi
  __int64 v2; // rbp
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi
  UNICODE_STRING *v5; // rbp
  _DWORD *v6; // rdi
  unsigned int j; // ebx
  bool v8; // cl
  int SystemThread; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v12; // rcx
  __int64 v13; // rdx
  UNICODE_STRING Destination; // [rsp+50h] [rbp-D8h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-C8h] BYREF
  char v16; // [rsp+70h] [rbp-B8h] BYREF

  CmpNoWrite = 0;
  if ( (MEMORY[0xFFFFF780000002D0] & 0x10000) != 0 && CmpSystemCacheBackedHivesDesired )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      if ( (int)CmpSendBootDeviceUsageNotification(0LL) >= 0 )
      {
        CmpBootDeviceUsageNotificationSent = 1;
        CmpSystemCacheBackedHivesAllowed = 1;
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  v0 = &unk_14033BD20;
  for ( i = 0; i < 6; ++i )
  {
    v2 = 19LL * i;
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 14], NotificationEvent, 0);
    *(_DWORD *)&Destination.Length = 0x800000;
    Destination.Buffer = (wchar_t *)&v16;
    RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\");
    RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v0 - 17));
    if ( (*((_DWORD *)v0 - 27) & 1) == 0 )
      RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v0 - 18));
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x32364D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, i, 0LL);
    *v0 = PoolWithTag;
    *((_DWORD *)v0 - 2) = 0x800000;
    v5 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17];
    if ( !CmpQueryHiveRedirectionFileList(&Destination, v5) || *((_WORD *)v0 - 4) == 2 )
    {
      *((_DWORD *)v0 - 2) = 0x800000;
      *v0 = v4;
      RtlAppendUnicodeToString(v5, L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString(v5, (PCWSTR)*(v0 - 18));
    }
    v0 += 19;
  }
  if ( CmpShareSystemHives )
  {
    v12 = (unsigned int *)&unk_14033BCB0;
    v13 = 6LL;
    do
    {
      if ( *((_QWORD *)v12 - 4) )
        *v12 = *v12 & 0xFFFD7FFE | 0x8001;
      v12 += 38;
      --v13;
    }
    while ( v13 );
  }
  CmpSpecialBootCondition = 1;
  v6 = &unk_14033BCA0;
  for ( j = 0; j < 6; ++j )
  {
    v8 = (v6[4] & 1) != 0 || CmpInitRmLogOnLoad || ((j - 2) & 0xFFFFFFFA) == 0;
    if ( !*(_QWORD *)v6 )
      *(_QWORD *)v6 = *((_QWORD *)v6 - 2);
    if ( v8 )
      KeSetEvent((struct _KEVENT *)((char *)&stru_14033BCD0 + 152 * j), 0, 0);
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)CmpLoadHiveThread,
                     j,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, j, SystemThread);
    result = ZwClose(Handle[0]);
    v6 += 38;
  }
  return result;
}
