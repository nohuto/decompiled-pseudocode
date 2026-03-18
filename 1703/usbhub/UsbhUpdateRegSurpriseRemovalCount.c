/*
 * XREFs of UsbhUpdateRegSurpriseRemovalCount @ 0x1C004C410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 */

NTSTATUS __fastcall UsbhUpdateRegSurpriseRemovalCount(__int64 a1, __int64 a2, _BYTE *a3)
{
  NTSTATUS result; // eax
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // r9
  void *v7; // rcx
  ULONG CreateOptions[2]; // [rsp+28h] [rbp-51h]
  int Data; // [rsp+40h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-31h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-29h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp+2Fh] BYREF
  int v16; // [rsp+ACh] [rbp+33h]
  int v17; // [rsp+B4h] [rbp+3Bh]

  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Usb\\Ceip");
  RtlInitUnicodeString(&ValueName, L"BootPathSurpriseRemovalCount");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v6 = 88;
    goto LABEL_11;
  }
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0
    && v16 == 4 )
  {
    Data = v17 + 1;
  }
  else
  {
    Data = 1;
  }
  result = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
  if ( result < 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 89;
LABEL_11:
      CreateOptions[0] = result;
      result = WPP_RECORDER_SF_d(
                 (__int64)v5->DeviceExtension,
                 0,
                 1u,
                 v6,
                 (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                 *(_QWORD *)CreateOptions);
    }
  }
LABEL_12:
  v7 = KeyHandle;
  *a3 = 0;
  if ( v7 )
    return ZwClose(v7);
  return result;
}
