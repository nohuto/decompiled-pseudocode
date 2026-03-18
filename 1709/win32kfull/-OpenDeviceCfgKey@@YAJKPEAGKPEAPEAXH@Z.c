/*
 * XREFs of ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C004F328
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C004EE50 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C004F2C0 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C004F8A0 (-GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z.c)
 *     _GetPrecisionTouchPadThresholds @ 0x1C01182D0 (_GetPrecisionTouchPadThresholds.c)
 *     UpdatePTPConfigFromRegistry @ 0x1C0118360 (UpdatePTPConfigFromRegistry.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C011F930 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0125090 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F2D60 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F2FB0 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F3118 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     WritePTPSettingValues @ 0x1C01F34A0 (WritePTPSettingValues.c)
 *     WritePointerDeviceSettings @ 0x1C01F3548 (WritePointerDeviceSettings.c)
 * Callees:
 *     RtlUnicodeStringCatString @ 0x1C004F65C (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1C004F784 (RtlUnicodeStringCopy.c)
 *     ?OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z @ 0x1C0122530 (-OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDeviceCfgKey(unsigned int a1, unsigned __int16 *a2, ACCESS_MASK a3, void **a4, int a5)
{
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Disposition; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING KeyPath; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  char v17; // [rsp+A0h] [rbp-60h] BYREF

  KeyHandle = 0LL;
  if ( a1 > 0x15E )
    return 2147483653LL;
  v9 = RtlFormatCurrentUserKeyPath(&KeyPath);
  if ( v9 >= 0 )
  {
    *(_DWORD *)&DestinationString.Length = 45875200;
    DestinationString.Buffer = (PWSTR)&v17;
    v9 = RtlUnicodeStringCopy(&DestinationString, &KeyPath);
    if ( v9 >= 0 )
    {
      v9 = RtlUnicodeStringCatString(&DestinationString, a2);
      if ( v9 >= 0 )
      {
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        if ( a5 )
        {
          v10 = ZwCreateKey(&KeyHandle, a3, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        else if ( a1 == 122
               && RtlCompareMemory(L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", a2, 0x7AuLL) == 122 )
        {
          v10 = OpenUserProfileKeyForPTP(a3, &KeyHandle);
        }
        else
        {
          v10 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
        }
        v9 = v10;
      }
    }
    RtlFreeUnicodeString(&KeyPath);
    if ( v9 >= 0 )
      *a4 = KeyHandle;
  }
  return (unsigned int)v9;
}
