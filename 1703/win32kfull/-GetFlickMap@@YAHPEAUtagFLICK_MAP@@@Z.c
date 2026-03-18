/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C00C0FC0
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00C0570 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C01123B4 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GetFlickMap(struct tagFLICK_MAP *a1)
{
  unsigned int v1; // r15d
  int PointerDeviceCfgStringSetting; // ebx
  __int128 *v5; // rsi
  GUID **v6; // r14
  const WCHAR *v7; // rdx
  HANDLE v8; // rcx
  GUID *v9; // r12
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int128 v12; // xmm0
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  GUID v15; // [rsp+50h] [rbp-B0h]
  _QWORD v16[15]; // [rsp+68h] [rbp-98h] BYREF
  WCHAR SourceString[128]; // [rsp+E0h] [rbp-20h] BYREF

  v1 = 0;
  if ( gFlickMapMonitor )
    goto LABEL_2;
  v16[0] = a1;
  v16[2] = (char *)a1 + 16;
  v16[4] = (char *)a1 + 32;
  v16[6] = (char *)a1 + 48;
  v16[8] = (char *)a1 + 64;
  v16[10] = (char *)a1 + 80;
  v16[12] = (char *)a1 + 96;
  v16[14] = (char *)a1 + 112;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() != dword_1C032402C )
  {
    v12 = xmmword_1C0324D18;
    xmmword_1C0324D18 = xmmword_1C0324CB8;
    dword_1C032402C = dword_1C032402C == 0;
    xmmword_1C0324CB8 = v12;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                    0x7Cu,
                                    L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                    0x20019u,
                                    &Handle,
                                    0);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v5 = &xmmword_1C0324CB8;
    v6 = (GUID **)v16;
    while ( PointerDeviceCfgStringSetting >= 0 )
    {
      v7 = (const WCHAR *)*((_QWORD *)v5 - 1);
      v8 = Handle;
      *(v6 - 1) = (GUID *)SourceString;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v8, v7, SourceString, 0x7DuLL);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v9 = *v6;
        PointerDeviceCfgStringSetting = RtlGUIDFromString(&DestinationString, *v6);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v10 = (__int128)*v9;
          v15 = *v9;
          v11 = -*(_QWORD *)&v15.Data1;
          if ( !*(_QWORD *)&v15.Data1 )
            v11 = -*(_QWORD *)v15.Data4;
          if ( v11 )
            *v5 = v10;
        }
      }
      ++v1;
      v6 += 2;
      v5 = (__int128 *)((char *)v5 + 24);
      if ( v1 >= 8 )
      {
        if ( PointerDeviceCfgStringSetting >= 0 )
          gFlickMapMonitor = 1;
        break;
      }
    }
    ZwClose(Handle);
  }
  if ( gFlickMapMonitor )
  {
LABEL_2:
    PointerDeviceCfgStringSetting = 0;
    *(_OWORD *)a1 = xmmword_1C0324CB8;
    *((_OWORD *)a1 + 1) = xmmword_1C0324CD0;
    *((_OWORD *)a1 + 2) = xmmword_1C0324CE8;
    *((_OWORD *)a1 + 3) = xmmword_1C0324D00;
    *((_OWORD *)a1 + 4) = xmmword_1C0324D18;
    *((_OWORD *)a1 + 5) = xmmword_1C0324D30;
    *((_OWORD *)a1 + 6) = xmmword_1C0324D48;
    *((_OWORD *)a1 + 7) = xmmword_1C0324D60;
  }
  return PointerDeviceCfgStringSetting >= 0;
}
