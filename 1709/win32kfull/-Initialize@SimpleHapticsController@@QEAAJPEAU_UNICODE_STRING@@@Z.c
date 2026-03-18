/*
 * XREFs of ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0223BF8
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220FFC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     AllocateUnicodeString @ 0x1C0111828 (AllocateUnicodeString.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C022400C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C022449C (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C0224668 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::Initialize(SimpleHapticsController *this, struct _UNICODE_STRING *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  int v9; // eax
  const GUID *v10; // r8
  const GUID *v11; // r9
  NTSTATUS Caps; // eax
  const GUID *v13; // r8
  const GUID *v14; // r9
  __int64 OutputReportByteLength; // rcx
  __int64 v16; // rax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDataa; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatab; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatac; // [rsp+30h] [rbp-D0h]
  NTSTATUS SpecificValueCaps; // [rsp+40h] [rbp-C0h] BYREF
  USHORT ValueCapsLength[2]; // [rsp+44h] [rbp-BCh] BYREF
  NTSTATUS v24; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  const char *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  NTSTATUS *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  NTSTATUS *p_SpecificValueCaps; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+E0h] [rbp-20h] BYREF

  SpecificValueCaps = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  if ( (unsigned int)dword_1C0320150 > 4 )
  {
    v28 = 42LL;
    v27 = "SimpleHapticsController::Initialize entry";
    TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E977A, v4, v5, 3u, &pData);
  }
  if ( !a2 )
  {
    SpecificValueCaps = -1073741811;
    goto LABEL_30;
  }
  if ( !(unsigned int)AllocateUnicodeString((struct _UNICODE_STRING *)this, &a2->Length) )
    goto LABEL_6;
  v6 = SimpleHapticsController::OpenHapticsDevice(this);
  SpecificValueCaps = v6;
  if ( v6 >= 0 )
  {
    v9 = SimpleHapticsController::IntializePreparssedData(this);
    SpecificValueCaps = v9;
    if ( v9 >= 0 )
    {
      Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 2), &Capabilities);
      SpecificValueCaps = Caps;
      if ( Caps >= 0 )
      {
        OutputReportByteLength = Capabilities.OutputReportByteLength;
        *((_WORD *)this + 36) = Capabilities.OutputReportByteLength;
        v16 = Win32AllocPoolZInit(OutputReportByteLength, 1667787091LL);
        *((_QWORD *)this + 8) = v16;
        if ( !v16 )
        {
LABEL_6:
          SpecificValueCaps = -1073741670;
          goto LABEL_30;
        }
        memset(&ValueCaps, 0, sizeof(ValueCaps));
        PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
        ValueCapsLength[0] = 1;
        SpecificValueCaps = HidP_GetSpecificValueCaps(
                              HidP_Output,
                              0xEu,
                              0,
                              0x21u,
                              &ValueCaps,
                              ValueCapsLength,
                              PreparsedData);
        if ( SpecificValueCaps >= 0 )
        {
          PreparsedDataa = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          SpecificValueCaps = HidP_GetSpecificValueCaps(
                                HidP_Output,
                                0xEu,
                                0,
                                0x24u,
                                &ValueCaps,
                                ValueCapsLength,
                                PreparsedDataa);
          if ( SpecificValueCaps >= 0 )
            *((_DWORD *)this + 19) |= 4u;
          PreparsedDatab = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          SpecificValueCaps = HidP_GetSpecificValueCaps(
                                HidP_Output,
                                0xEu,
                                0,
                                0x25u,
                                &ValueCaps,
                                ValueCapsLength,
                                PreparsedDatab);
          if ( SpecificValueCaps >= 0 )
            *((_DWORD *)this + 19) |= 8u;
          PreparsedDatac = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          SpecificValueCaps = HidP_GetSpecificValueCaps(
                                HidP_Output,
                                0xEu,
                                0,
                                0x23u,
                                &ValueCaps,
                                ValueCapsLength,
                                PreparsedDatac);
          if ( SpecificValueCaps >= 0 )
            *((_DWORD *)this + 19) |= 2u;
          SimpleHapticsController::InitializeSupportedWaveformList(this);
        }
        SpecificValueCaps = 0;
      }
      else
      {
        if ( (unsigned int)dword_1C0320150 > 2 )
        {
          v24 = Caps;
          v29 = &v24;
          v27 = "Function failed.";
          v28 = 17LL;
          v30 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v13, v14, 4u, &pData);
          Caps = SpecificValueCaps;
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::Initialize",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          62,
          Caps,
          "Function failed.");
      }
    }
    else
    {
      if ( (unsigned int)dword_1C0320150 > 2 )
      {
        v24 = v9;
        v29 = &v24;
        v27 = "Function failed.";
        v28 = 17LL;
        v30 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v10, v11, 4u, &pData);
        v9 = SpecificValueCaps;
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::Initialize",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        60,
        v9,
        "Function failed.");
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0320150 > 2 )
    {
      v24 = v6;
      v29 = &v24;
      v27 = "Function failed.";
      v28 = 17LL;
      v30 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v7, v8, 4u, &pData);
      v6 = SpecificValueCaps;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::Initialize",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      58,
      v6,
      "Function failed.");
  }
LABEL_30:
  if ( (unsigned int)dword_1C0320150 > 4 )
  {
    v28 = 41LL;
    v27 = "SimpleHapticsController::Initialize exit";
    v24 = *((_DWORD *)this + 22);
    v29 = &v24;
    p_SpecificValueCaps = &SpecificValueCaps;
    v30 = 4LL;
    v32 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E992C, v4, v5, 5u, &pData);
  }
  return (unsigned int)SpecificValueCaps;
}
