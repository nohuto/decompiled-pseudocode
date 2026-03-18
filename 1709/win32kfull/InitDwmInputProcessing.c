/*
 * XREFs of InitDwmInputProcessing @ 0x1C00BF300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitDwmInputProcessing()
{
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+80h] [rbp-80h] BYREF
  int v6; // [rsp+84h] [rbp-7Ch]
  int v7; // [rsp+8Ch] [rbp-74h]

  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"EnableDwmInputProcessing");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v6 == 4 )
    {
      gbEnableDwmTouchProcessing = v7 & 1;
      gbEnableDwmMouseProcessing = ((unsigned __int8)v7 >> 1) & 1;
    }
    RtlInitUnicodeString(&DestinationString, L"DwmInputUsesIoCompletionPort");
    LODWORD(WPP_MAIN_CB.DeviceObjectExtension) = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v6 == 4 )
    {
      LODWORD(WPP_MAIN_CB.DeviceObjectExtension) = v7;
      if ( v7 )
        LODWORD(WPP_MAIN_CB.DeviceObjectExtension) = 1;
    }
    ZwClose(KeyHandle);
  }
  *(_QWORD *)&WPP_MAIN_CB.SectorSize = CreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)CreateKernelEvent(1LL, 0LL);
  *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = hCreateKernelEvent(1LL, 0LL);
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)hCreateKernelEvent(1LL, 0LL);
  gpkeDITMouseInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock = CreateKernelEvent(1LL, 0LL);
  gpkeComputeInputSinkInfo = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  gcDITMouseInjectionWaiters = 0;
  gpsemDITMouseInjectionWaiters = CreateKernelSemaphore(0LL, 0x7FFFFFFFLL);
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize
    && WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink
    && *((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
    && WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
    && gpkeDITMouseInjectionResponseEvent
    && *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock
    && gpkeComputeInputSinkInfo
    && gpsemDITMouseInjectionWaiters )
  {
    return CInputManager::CreateSessionGlobal();
  }
  else
  {
    return 3221225495LL;
  }
}
