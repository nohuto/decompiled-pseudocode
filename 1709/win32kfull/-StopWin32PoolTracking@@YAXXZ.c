/*
 * XREFs of ?StopWin32PoolTracking@@YAXXZ @ 0x1C0142DC4
 * Callers:
 *     InitializeWin32PoolTracking @ 0x1C0124470 (InitializeWin32PoolTracking.c)
 * Callees:
 *     <none>
 */

void StopWin32PoolTracking(void)
{
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v0; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+10h] BYREF

  v0 = WPP_MAIN_CB.DeviceQueue.1;
  if ( WPP_MAIN_CB.DeviceQueue.1 )
  {
    *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)&v0 + 40LL) = 0;
  }
  if ( gpxsGlobals )
  {
    if ( *((_DWORD *)gpxsGlobals + 8) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
        if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
          ZwFlushKey(KeyHandle);
        ZwClose(KeyHandle);
      }
    }
  }
}
