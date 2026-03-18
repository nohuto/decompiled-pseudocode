/*
 * XREFs of ?UMPDAllowPrinterSurfaceInDisplayDC@@YAHXZ @ 0x1C00A08C4
 * Callers:
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

_BOOL8 UMPDAllowPrinterSurfaceInDisplayDC(void)
{
  BOOL v0; // ebx
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+9Ch] [rbp+43h]

  v0 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Policies");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&ValueName, L"{63E468AF-2AD5-4340-96D4-C3D681B54153}");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      v0 = v8 == 1;
    ZwClose(KeyHandle);
  }
  return v0;
}
