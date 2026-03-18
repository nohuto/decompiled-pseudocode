/*
 * XREFs of AddRemovePointerDevicePresence @ 0x1C00D6EB4
 * Callers:
 *     InitializePointerDevicesPresenceState @ 0x1C00D6B00 (InitializePointerDevicesPresenceState.c)
 *     ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00D6BBC (ForceUpdatePointerDeviceSystemMetricKeys.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C00D6C00 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     <none>
 */

int __fastcall AddRemovePointerDevicePresence(int a1)
{
  int result; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  int Data; // [rsp+A0h] [rbp+67h] BYREF
  void *KeyHandle; // [rsp+A8h] [rbp+6Fh] BYREF

  Data = a1;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"DeviceKind");
    if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u) >= 0 )
      *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = Data;
    return ZwClose(KeyHandle);
  }
  return result;
}
