/*
 * XREFs of InitDwmInputProcessing @ 0x1C0009330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
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
    gbDITUseIocp = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v6 == 4 )
    {
      gbDITUseIocp = v7;
      if ( v7 )
        gbDITUseIocp = 1;
    }
    ZwClose(KeyHandle);
  }
  gpkeDITResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  gpkeDITTouchInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  ghDITEvent = (HANDLE)hCreateKernelEvent(1LL, 0LL);
  ghDITRITEvent = (HANDLE)hCreateKernelEvent(1LL, 0LL);
  gpkeDITMouseInjectionResponseEvent = (PRKEVENT)CreateKernelEvent(1LL, 0LL);
  gpkeDITCompositionInputSinkQueryResponseEvent = (PVOID)CreateKernelEvent(1LL, 0LL);
  gcDITMouseInjectionWaiters = 0;
  gpsemDITMouseInjectionWaiters = CreateKernelSemaphore(0LL, 0x7FFFFFFFLL);
  if ( gpkeDITResponseEvent
    && gpkeDITTouchInjectionResponseEvent
    && ghDITEvent
    && ghDITRITEvent
    && gpkeDITMouseInjectionResponseEvent
    && gpkeDITCompositionInputSinkQueryResponseEvent
    && gpsemDITMouseInjectionWaiters )
  {
    return CInputManager::CreateSessionGlobal();
  }
  else
  {
    return 3221225495LL;
  }
}
