/*
 * XREFs of ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C004C9E8
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C004EE50 (ReadPointerDeviceSettings.c)
 * Callees:
 *     RtlUnicodeStringCopyString @ 0x1C004F59C (RtlUnicodeStringCopyString.c)
 *     RtlUnicodeStringCatString @ 0x1C004F65C (RtlUnicodeStringCatString.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C004FACC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GetPredictionSettings(struct tagDEVICECONFIG_SETTING *a1, const wchar_t *a2, unsigned __int16 *a3)
{
  NTSTATUS PointerDeviceCfgDWORDSetting; // ebx
  _DWORD *v5; // rdi
  __int64 v6; // r14
  void *KeyHandle; // [rsp+28h] [rbp-E0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  char v11; // [rsp+78h] [rbp-90h] BYREF

  *(_DWORD *)&DestinationString.Length = 45875200;
  KeyHandle = 0LL;
  DestinationString.Buffer = (PWSTR)&v11;
  PointerDeviceCfgDWORDSetting = RtlUnicodeStringCopyString(&DestinationString, a2);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    PointerDeviceCfgDWORDSetting = RtlUnicodeStringCatString(
                                     &DestinationString,
                                     L"\\Software\\Microsoft\\TouchPrediction");
    if ( PointerDeviceCfgDWORDSetting >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PointerDeviceCfgDWORDSetting = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PointerDeviceCfgDWORDSetting >= 0 )
      {
        v5 = (_DWORD *)((char *)a1 + 12);
        v6 = 3LL;
        do
        {
          PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(KeyHandle, a1);
          if ( PointerDeviceCfgDWORDSetting < 0 )
            *v5 = -1;
          a1 = (struct tagDEVICECONFIG_SETTING *)((char *)a1 + 16);
          v5 += 4;
          --v6;
        }
        while ( v6 );
        ZwClose(KeyHandle);
      }
    }
  }
  return (unsigned int)PointerDeviceCfgDWORDSetting;
}
