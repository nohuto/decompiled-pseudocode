/*
 * XREFs of WheapEtwEnableCallback @ 0x1405D4020
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     WheapFreeErrorRecord @ 0x14025FBFC (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x140260518 (WheapGenerateETWEvents.c)
 *     WheapSqmWaitWorkerRoutine @ 0x140724D40 (WheapSqmWaitWorkerRoutine.c)
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
      v5 = *(_QWORD *)WheapDispatchPtr.DeviceExtension;
      if ( *((struct _DEVICE_OBJECT **)WheapDispatchPtr.DeviceExtension + 1) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.DeviceExtension
        || *(PVOID *)(v5 + 8) != WheapDispatchPtr.DeviceExtension )
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
        qword_1403424B8 = 0LL;
        WheapSqmWaitWorkQueueItem = 0LL;
        qword_1403424B0 = (__int64)WheapSqmWaitWorkerRoutine;
        WheapSqmWaitWorkerRoutine(0LL);
      }
    }
  }
}
