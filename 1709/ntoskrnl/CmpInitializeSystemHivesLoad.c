/*
 * XREFs of CmpInitializeSystemHivesLoad @ 0x1405E18B4
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x140596AD0 (CmpQueryHiveRedirectionFileList.c)
 *     CmpSendBootDeviceUsageNotification @ 0x140694FC4 (CmpSendBootDeviceUsageNotification.c)
 */

NTSTATUS CmpInitializeSystemHivesLoad()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  PVOID PoolWithTag; // rax
  PVOID v4; // rsi
  UNICODE_STRING *v5; // rbp
  _DWORD *v6; // rdi
  unsigned int i; // ebx
  bool v8; // cl
  int SystemThread; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v12; // rcx
  __int64 v13; // rdx
  UNICODE_STRING Destination; // [rsp+50h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-B8h] BYREF
  char v16; // [rsp+70h] [rbp-A8h] BYREF

  CmpNoWrite = 0;
  if ( (MEMORY[0xFFFFF780000002D0] & 0x10000) != 0 && CmpSystemCacheBackedHivesDesired )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
    {
      if ( (int)CmpSendBootDeviceUsageNotification(0LL) >= 0 )
      {
        CmpBootDeviceUsageNotificationSent = 1;
        CmpSystemCacheBackedHivesAllowed = 1;
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  KeInitializeEvent(&CmpLoadWorkerEvent, SynchronizationEvent, 0);
  KeInitializeEvent(&CmpLoadWorkerDebugEvent, SynchronizationEvent, 0);
  v0 = 0;
  v1 = &unk_140353D50;
  do
  {
    v2 = 19LL * v0;
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 8], NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 11], SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)&CmpMachineHiveList[v2 + 14], NotificationEvent, 0);
    *(_DWORD *)&Destination.Length = 0x800000;
    Destination.Buffer = (wchar_t *)&v16;
    RtlAppendUnicodeToString(&Destination, L"\\REGISTRY\\");
    RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v1 - 17));
    if ( (*((_DWORD *)v1 - 27) & 1) == 0 )
      RtlAppendUnicodeToString(&Destination, (PCWSTR)*(v1 - 18));
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x32364D43u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheckEx(0x74u, 2uLL, 5uLL, v0, 0LL);
    *v1 = PoolWithTag;
    *((_DWORD *)v1 - 2) = 0x800000;
    v5 = (UNICODE_STRING *)&CmpMachineHiveList[v2 + 17];
    if ( !CmpQueryHiveRedirectionFileList(&Destination, v5) || *((_WORD *)v1 - 4) == 2 )
    {
      *((_DWORD *)v1 - 2) = 0x800000;
      *v1 = v4;
      RtlAppendUnicodeToString(v5, L"\\SystemRoot\\System32\\Config\\");
      RtlAppendUnicodeToString(v5, (PCWSTR)*(v1 - 18));
    }
    v1 += 19;
    ++v0;
  }
  while ( v0 < 7 );
  if ( CmpShareSystemHives )
  {
    v12 = (unsigned int *)&unk_140353CE0;
    v13 = 7LL;
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
  v6 = &unk_140353CD0;
  for ( i = 0; i < 7; ++i )
  {
    v8 = (v6[4] & 1) != 0 || CmpInitRmLogOnLoad || ((i - 2) & 0xFFFFFFFA) == 0;
    if ( !*(_QWORD *)v6 )
      *(_QWORD *)v6 = *((_QWORD *)v6 - 2);
    if ( v8 )
      KeSetEvent((struct _KEVENT *)((char *)&stru_140353D00 + 152 * i), 0, 0);
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)CmpLoadHiveThread,
                     i,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      KeBugCheckEx(0x74u, 2uLL, 3uLL, i, SystemThread);
    result = ZwClose(Handle[0]);
    v6 += 38;
  }
  return result;
}
