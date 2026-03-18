/*
 * XREFs of WriteTiltCalibrationData @ 0x1C01A31D0
 * Callers:
 *     _SetCalibrationData @ 0x1C01B3D04 (_SetCalibrationData.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C00C0D7C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C00C0EA4 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A2078 (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 */

_BOOL8 __fastcall WriteTiltCalibrationData(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        ULONG a4,
        PVOID Data)
{
  __int64 v6; // rdi
  int TiltKeyName; // ebx
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  char v15; // [rsp+B0h] [rbp-50h] BYREF

  v10 = *a2;
  SourceString = 0LL;
  v6 = a3;
  TiltKeyName = GetTiltKeyName(&v10, (unsigned __int16 **)&SourceString);
  if ( TiltKeyName >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_DWORD *)&v10.Length = 91750400;
    v10.Buffer = (PWSTR)&v15;
    TiltKeyName = RtlUnicodeStringCopy(&v10, (PCUNICODE_STRING)(grpWinStaList + 168LL));
    if ( TiltKeyName >= 0 )
    {
      TiltKeyName = RtlUnicodeStringCatString(&v10, off_1C02DF880[v6]);
      if ( TiltKeyName >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v10;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        TiltKeyName = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( TiltKeyName >= 0 )
        {
          TiltKeyName = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, a4);
          ZwClose(KeyHandle);
        }
      }
    }
    Win32FreePool(SourceString);
  }
  return TiltKeyName >= 0;
}
