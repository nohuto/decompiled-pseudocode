/*
 * XREFs of WheapEtwEnableCallback @ 0x1405F0150
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     WheapFreeErrorRecord @ 0x1402897B0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x14028A0E8 (WheapGenerateETWEvents.c)
 *     WheapSqmWaitWorkerRoutine @ 0x140764810 (WheapSqmWaitWorkerRoutine.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _IRP *CurrentIrp; // rbx
  __int64 v5; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-40h] BYREF

  LODWORD(WheapDispatchPtr.NextDevice) = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDispatchPtr.DeviceExtension, Executive, 0, 0, 0LL);
      CurrentIrp = WheapDispatchPtr.CurrentIrp;
      if ( (struct _IRP **)WheapDispatchPtr.CurrentIrp->MdlAddress != &WheapDispatchPtr.CurrentIrp
        || (v5 = *(_QWORD *)WheapDispatchPtr.CurrentIrp,
            *(struct _IRP **)(*(_QWORD *)WheapDispatchPtr.CurrentIrp + 8LL) != WheapDispatchPtr.CurrentIrp) )
      {
        __fastfail(3u);
      }
      WheapDispatchPtr.CurrentIrp = *(struct _IRP **)WheapDispatchPtr.CurrentIrp;
      *(_QWORD *)(v5 + 8) = &WheapDispatchPtr.CurrentIrp;
      KeSetEvent((PRKEVENT)&WheapDispatchPtr.DeviceExtension, 0, 0);
      if ( CurrentIrp == (struct _IRP *)&WheapDispatchPtr.CurrentIrp )
        break;
      WheapGenerateETWEvents((__int64)&CurrentIrp->ThreadListEntry.Blink);
      WheapFreeErrorRecord((__int64)CurrentIrp);
    }
    if ( !_InterlockedCompareExchange(&WheapSqmWaitQueued, 1, 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\SQMClient\\Windows");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
      {
        ZwClose(KeyHandle);
        KeInitializeTimerEx(&WheapSqmWaitTimer, NotificationTimer);
        KeInitializeDpc(&WheapSqmWaitTimerDpc, (PKDEFERRED_ROUTINE)WheapSqmWaitDpcRoutine, 0LL);
        WheapSqmWaitWorkQueueItem.Parameter = 0LL;
        WheapSqmWaitWorkQueueItem.List.Flink = 0LL;
        WheapSqmWaitWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))WheapSqmWaitWorkerRoutine;
        WheapSqmWaitWorkerRoutine(0LL);
      }
    }
  }
}
