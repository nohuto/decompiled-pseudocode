/*
 * XREFs of WriteTiltCalibrationData @ 0x1C01AA988
 * Callers:
 *     _SetCalibrationData @ 0x1C01B6C80 (_SetCalibrationData.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C004F65C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C004F784 (RtlUnicodeStringCopy.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01A9B7C (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  PCWSTR SourceString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Disposition; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  char v17; // [rsp+B0h] [rbp-50h] BYREF

  v12 = *a2;
  SourceString = 0LL;
  v6 = a3;
  TiltKeyName = GetTiltKeyName(&v12, (unsigned __int16 **)&SourceString);
  if ( TiltKeyName >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    *(_DWORD *)&v12.Length = 91750400;
    v12.Buffer = (PWSTR)&v17;
    TiltKeyName = RtlUnicodeStringCopy(&v12, (PCUNICODE_STRING)(grpWinStaList + 168LL));
    if ( TiltKeyName >= 0 )
    {
      TiltKeyName = RtlUnicodeStringCatString(&v12, off_1C02D9840[v6]);
      if ( TiltKeyName >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v12;
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
    Win32FreePool(SourceString, v8, v9);
  }
  return TiltKeyName >= 0;
}
