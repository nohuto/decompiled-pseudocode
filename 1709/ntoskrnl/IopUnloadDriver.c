/*
 * XREFs of IopUnloadDriver @ 0x14046EF24
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x14055DBD0 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x1406BD7F4 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140856CD0 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1400159C4 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopCleanupNotifications @ 0x1400159F4 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x140015A98 (IopCheckUnloadDriver.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     PnpDiagnosticTraceObject @ 0x1400FBA44 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400FE678 (PnpDiagnosticTraceDriverFullInfo.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     ZwUnloadDriver @ 0x140181040 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObMakeTemporaryObject @ 0x14046F200 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x14046F3C4 (IopOpenRegistryKey.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PnpIsLegacyDriver @ 0x140517478 (PnpIsLegacyDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopUnloadDriver(unsigned __int16 *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  int DriverNameFromKeyNode; // edi
  _QWORD *v7; // rbx
  void (__fastcall *v8)(PVOID); // rax
  __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithQuota; // rdi
  unsigned int v15; // ebx
  void *v16; // rcx
  UNICODE_STRING DriverServiceName; // [rsp+40h] [rbp-E8h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v19; // [rsp+60h] [rbp-C8h]
  HANDLE Handle; // [rsp+68h] [rbp-C0h] BYREF
  HANDLE v21; // [rsp+70h] [rbp-B8h] BYREF
  int v22; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v25; // [rsp+90h] [rbp-98h]
  __int128 v26; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+B0h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+D0h] [rbp-58h] BYREF
  PVOID v29; // [rsp+E8h] [rbp-40h]
  char v30; // [rsp+140h] [rbp+18h] BYREF
  PVOID Object; // [rsp+148h] [rbp+20h] BYREF

  v19 = 0LL;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, a1);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 131097LL, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v22 = 48;
        v23 = 0LL;
        v25 = 576;
        p_Destination = &Destination;
        v26 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName(
                                  (unsigned int)&v22,
                                  (_DWORD)IoDriverObjectType,
                                  0,
                                  0,
                                  1,
                                  0LL,
                                  (__int64)&v21);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v21, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v21, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v7 = Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( v7[13] && v7[5] )
            {
              if ( a2 || (unsigned int)PnpIsLegacyDriver(v7) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v7, &v30);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v30 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      v8 = (void (__fastcall *)(PVOID))v7[13];
                      v7 = Object;
                      v8(Object);
                    }
                    else
                    {
                      KeInitializeEvent(&Event, NotificationEvent, 0);
                      v7 = Object;
                      v29 = Object;
                      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                      WorkItem.Parameter = &WorkItem;
                      WorkItem.List.Flink = 0LL;
                      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
                      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                    }
                    IopCleanupNotifications(v7, v7);
                    ObMakeTemporaryObject(v7);
                    ObfDereferenceObject(v7);
                  }
                  ObfDereferenceObject(v7);
                  DriverNameFromKeyNode = 0;
                }
                goto LABEL_17;
              }
            }
            else
            {
              v16 = v7;
            }
            ObfDereferenceObject(v16);
            DriverNameFromKeyNode = -1073741808;
          }
        }
      }
    }
LABEL_17:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      a1,
      DriverNameFromKeyNode,
      (__int64)&Destination,
      MinorImageVersion);
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)DriverNameFromKeyNode;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  v10 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v10 = (__int64)a1;
  v11 = *(_DWORD *)v10;
  *(_DWORD *)&DriverServiceName.Length = v11;
  v12 = *(_QWORD *)(v10 + 8);
  DriverServiceName.Buffer = (wchar_t *)v12;
  if ( !(_WORD)v11 )
    return 3221225485LL;
  if ( (v12 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = v12 + (unsigned __int16)v11;
  if ( v13 > 0x7FFFFFFF0000LL || v13 < v12 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota = IopVerifierExAllocatePoolWithQuota(v12, DriverServiceName.Length);
  v19 = PoolWithQuota;
  memmove(PoolWithQuota, DriverServiceName.Buffer, DriverServiceName.Length);
  DriverServiceName.Buffer = (wchar_t *)PoolWithQuota;
  v15 = ZwUnloadDriver(&DriverServiceName);
  ExFreePoolWithTag(PoolWithQuota, 0);
  return v15;
}
