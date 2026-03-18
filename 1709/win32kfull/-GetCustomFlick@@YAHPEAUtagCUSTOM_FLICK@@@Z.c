/*
 * XREFs of ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F2D60
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C004EE50 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C004F328 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C004FACC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C011BD08 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C01F2E7C (-GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 */

_BOOL8 __fastcall GetCustomFlick(struct tagCUSTOM_FLICK *a1)
{
  int PointerDeviceCfgStringSetting; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  HANDLE v5; // rcx
  HANDLE v6; // rcx
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  PCWSTR v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h]
  PCWSTR v11; // [rsp+50h] [rbp-10h] BYREF
  __int64 v12; // [rsp+58h] [rbp-8h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Handle = 0LL;
  PointerDeviceCfgStringSetting = -1073741595;
  if ( (unsigned int)GetCustomFlickPath((GUID *)a1, &Destination) )
  {
    Destination.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
    PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                      Destination.MaximumLength,
                                      Destination.Buffer,
                                      0x20019u,
                                      &Handle,
                                      0);
    if ( PointerDeviceCfgStringSetting >= 0 )
    {
      v9 = L"ModifierKeys";
      v10 = 0LL;
      v11 = L"KeyCode";
      v12 = 0LL;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(Handle, &v9);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        v5 = Handle;
        *((_DWORD *)a1 + 4) = HIDWORD(v10);
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(v5, &v11);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v6 = Handle;
          *((_DWORD *)a1 + 5) = HIDWORD(v12);
          PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(
                                            v6,
                                            L"FriendlyName",
                                            (NTSTRSAFE_PWSTR)a1 + 14,
                                            0x104uLL);
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    Win32FreePool(Destination.Buffer, v3, v4);
  }
  return PointerDeviceCfgStringSetting >= 0;
}
