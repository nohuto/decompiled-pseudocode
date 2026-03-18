/*
 * XREFs of IopUnloadDriver @ 0x1405CC050
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x1405CBF9C (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x140691AAC (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x14081F7BC (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140032020 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140033544 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     IopCleanupNotifications @ 0x140164310 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x1401643B0 (IopCheckUnloadDriver.c)
 *     ZwUnloadDriver @ 0x140181640 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x14044DB84 (IopOpenRegistryKey.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     PnpIsLegacyDriver @ 0x1405ADAC0 (PnpIsLegacyDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
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
  PVOID PoolWithQuota_0; // rdi
  unsigned int v15; // ebx
  void *v16; // rcx
  ULONG Object; // [rsp+20h] [rbp-108h]
  UNICODE_STRING DriverServiceName; // [rsp+40h] [rbp-E8h] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-D8h] BYREF
  PVOID v20; // [rsp+60h] [rbp-C8h]
  HANDLE Handle; // [rsp+68h] [rbp-C0h] BYREF
  HANDLE v22; // [rsp+70h] [rbp-B8h] BYREF
  int v23; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+80h] [rbp-A8h]
  UNICODE_STRING *p_Destination; // [rsp+88h] [rbp-A0h]
  int v26; // [rsp+90h] [rbp-98h]
  __int128 v27; // [rsp+98h] [rbp-90h]
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+B0h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+D0h] [rbp-58h] BYREF
  PVOID v30; // [rsp+E8h] [rbp-40h]
  char v31; // [rsp+140h] [rbp+18h] BYREF
  PVOID v32; // [rsp+148h] [rbp+20h] BYREF

  v20 = 0LL;
  LOBYTE(MinorImageVersion) = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, &a1->Length);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    LOBYTE(Object) = 0;
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 0x20019u, Object);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        v23 = 48;
        v24 = 0LL;
        v26 = 576;
        p_Destination = &Destination;
        v27 = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName((int)&v23, (int)IoDriverObjectType, 0, 0, 1, 0LL, (__int64)&v22);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v22, 0, IoDriverObjectType, 0, &v32, 0LL);
          ObCloseHandle(v22, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v7 = v32;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)v32 + 3))->OptionalHeader.MinorImageVersion;
            if ( v7[13] && v7[5] )
            {
              if ( a2 || (unsigned int)PnpIsLegacyDriver((__int64)v7) )
              {
                DriverNameFromKeyNode = IopCheckUnloadDriver(v7, &v31);
                if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
                {
                  if ( v31 )
                  {
                    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                    {
                      v8 = (void (__fastcall *)(PVOID))v7[13];
                      v7 = v32;
                      v8(v32);
                    }
                    else
                    {
                      KeInitializeEvent(&Event, NotificationEvent, 0);
                      v7 = v32;
                      v30 = v32;
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
      &a1->Length,
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
  PoolWithQuota_0 = IopVerifierExAllocatePoolWithQuota_0(v12, DriverServiceName.Length);
  v20 = PoolWithQuota_0;
  memmove(PoolWithQuota_0, DriverServiceName.Buffer, DriverServiceName.Length);
  DriverServiceName.Buffer = (wchar_t *)PoolWithQuota_0;
  v15 = ZwUnloadDriver(&DriverServiceName);
  ExFreePoolWithTag(PoolWithQuota_0, 0);
  return v15;
}
