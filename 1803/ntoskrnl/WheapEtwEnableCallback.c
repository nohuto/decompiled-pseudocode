/*
 * XREFs of WheapEtwEnableCallback @ 0x140653460
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     WheapFreeErrorRecord @ 0x1402BECDC (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1402BF7B8 (WheapGenerateETWEvents.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1407CC4F0 (WheapSqmWaitWorkerRoutine.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _DEVICE_OBJECT *DeviceExtension; // rbx
  __int64 v5; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-40h] BYREF

  LODWORD(WheapDispatchPtr.NextDevice) = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDispatchPtr.CurrentIrp, Executive, 0, 0, 0LL);
      DeviceExtension = (struct _DEVICE_OBJECT *)WheapDispatchPtr.DeviceExtension;
      if ( *((struct _DEVICE_OBJECT **)WheapDispatchPtr.DeviceExtension + 1) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceExtension
        || (v5 = *(_QWORD *)WheapDispatchPtr.DeviceExtension,
            *(PVOID *)(*(_QWORD *)WheapDispatchPtr.DeviceExtension + 8LL) != WheapDispatchPtr.DeviceExtension) )
      {
        __fastfail(3u);
      }
      WheapDispatchPtr.DeviceExtension = *(PVOID *)WheapDispatchPtr.DeviceExtension;
      *(_QWORD *)(v5 + 8) = &WheapDispatchPtr.DeviceExtension;
      KeSetEvent((PRKEVENT)&WheapDispatchPtr.CurrentIrp, 0, 0);
      if ( DeviceExtension == (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceExtension )
        break;
      WheapGenerateETWEvents((__int64)&DeviceExtension->Timer);
      WheapFreeErrorRecord((__int64)DeviceExtension);
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
