/*
 * XREFs of IopUnloadDriver @ 0x1405F5EC0
 * Callers:
 *     NtUnloadDriver @ 0x1405F4164 (NtUnloadDriver.c)
 *     PnpUnloadAttachedDriver @ 0x1405F5E0C (PnpUnloadAttachedDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x1408C8E68 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     PnpDiagnosticTraceObject @ 0x1400C8D00 (PnpDiagnosticTraceObject.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     IopCheckUnloadDriver @ 0x140160188 (IopCheckUnloadDriver.c)
 *     IopCleanupNotifications @ 0x140160260 (IopCleanupNotifications.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1401604F0 (IopVerifierExAllocatePoolWithQuota_2.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140160C9C (PnpDiagnosticTraceDriverFullInfo.c)
 *     ZwUnloadDriver @ 0x1401AAC80 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObMakeTemporaryObject @ 0x14053ECF0 (ObMakeTemporaryObject.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopOpenRegistryKey @ 0x1405F6BA8 (IopOpenRegistryKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     PnpIsLegacyDriver @ 0x1405F7C8C (PnpIsLegacyDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopUnloadDriver(unsigned __int16 *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  KPROCESSOR_MODE PreviousMode; // dl
  int DriverNameFromKeyNode; // edi
  _QWORD *v7; // rbx
  void *v8; // rcx
  void (__fastcall *v9)(PVOID); // rax
  __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  PVOID PoolWithQuota_2; // rdi
  unsigned int v16; // ebx
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
                                  (__int64)&v22,
                                  (__int64)IoDriverObjectType,
                                  0,
                                  0LL,
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
                      v9 = (void (__fastcall *)(PVOID))v7[13];
                      v7 = Object;
                      v9(Object);
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
                goto LABEL_18;
              }
            }
            else
            {
              v8 = v7;
            }
            ObfDereferenceObject(v8);
            DriverNameFromKeyNode = -1073741808;
          }
        }
      }
    }
LABEL_18:
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
  v11 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v11 = (__int64)a1;
  v12 = *(_DWORD *)v11;
  *(_DWORD *)&DriverServiceName.Length = v12;
  v13 = *(_QWORD *)(v11 + 8);
  DriverServiceName.Buffer = (wchar_t *)v13;
  if ( !(_WORD)v12 )
    return 3221225485LL;
  if ( (v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = v13 + (unsigned __int16)v12;
  if ( v14 > 0x7FFFFFFF0000LL || v14 < v13 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota_2 = IopVerifierExAllocatePoolWithQuota_2(v13, DriverServiceName.Length);
  v19 = PoolWithQuota_2;
  memmove(PoolWithQuota_2, DriverServiceName.Buffer, DriverServiceName.Length);
  DriverServiceName.Buffer = (wchar_t *)PoolWithQuota_2;
  v16 = ZwUnloadDriver(&DriverServiceName);
  ExFreePoolWithTag(PoolWithQuota_2, 0);
  return v16;
}
