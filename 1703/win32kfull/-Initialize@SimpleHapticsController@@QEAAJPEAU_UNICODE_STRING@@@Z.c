/*
 * XREFs of ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0222720
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     AllocateUnicodeString @ 0x1C0106BB8 (AllocateUnicodeString.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C0222B5C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 *     ?IntializePreparssedData@SimpleHapticsController@@IEAAJXZ @ 0x1C0222FE0 (-IntializePreparssedData@SimpleHapticsController@@IEAAJXZ.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C02231A4 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::Initialize(SimpleHapticsController *this, struct _UNICODE_STRING *a2)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  NTSTATUS v6; // r9d
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  NTSTATUS v9; // r9d
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  NTSTATUS v12; // r9d
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  __int64 OutputReportByteLength; // rcx
  __int64 v16; // rax
  int v17; // edx
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  struct _HIDP_PREPARSED_DATA *PreparsedData; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDataa; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatab; // [rsp+30h] [rbp-D0h]
  struct _HIDP_PREPARSED_DATA *PreparsedDatac; // [rsp+30h] [rbp-D0h]
  NTSTATUS Caps; // [rsp+40h] [rbp-C0h] BYREF
  USHORT ValueCapsLength[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  NTSTATUS *p_Caps; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+F0h] [rbp-10h] BYREF

  Caps = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::Initialize entry");
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECB50, v4, v5, 3u, &pData);
  }
  if ( !a2 )
  {
    Caps = -1073741811;
    goto LABEL_30;
  }
  if ( !(unsigned int)AllocateUnicodeString((struct _UNICODE_STRING *)this, &a2->Length) )
    goto LABEL_6;
  Caps = SimpleHapticsController::OpenHapticsDevice(this);
  v6 = Caps;
  if ( Caps >= 0 )
  {
    Caps = SimpleHapticsController::IntializePreparssedData(this);
    v9 = Caps;
    if ( Caps >= 0 )
    {
      Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 2), &Capabilities);
      v12 = Caps;
      if ( Caps >= 0 )
      {
        OutputReportByteLength = Capabilities.OutputReportByteLength;
        *((_WORD *)this + 36) = Capabilities.OutputReportByteLength;
        v16 = Win32AllocPoolZInit(OutputReportByteLength, 1667787091LL);
        *((_QWORD *)this + 8) = v16;
        if ( !v16 )
        {
LABEL_6:
          Caps = -1073741670;
          goto LABEL_30;
        }
        memset(&ValueCaps, 0, sizeof(ValueCaps));
        PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
        ValueCapsLength[0] = 1;
        Caps = HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x21u, &ValueCaps, ValueCapsLength, PreparsedData);
        if ( Caps >= 0 )
        {
          PreparsedDataa = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          Caps = HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x24u, &ValueCaps, ValueCapsLength, PreparsedDataa);
          if ( Caps >= 0 )
            *((_DWORD *)this + 19) |= 4u;
          PreparsedDatab = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          Caps = HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x25u, &ValueCaps, ValueCapsLength, PreparsedDatab);
          if ( Caps >= 0 )
            *((_DWORD *)this + 19) |= 8u;
          PreparsedDatac = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 2);
          ValueCapsLength[0] = 1;
          Caps = HidP_GetSpecificValueCaps(HidP_Output, 0xEu, 0, 0x23u, &ValueCaps, ValueCapsLength, PreparsedDatac);
          if ( Caps >= 0 )
            *((_DWORD *)this + 19) |= 2u;
          SimpleHapticsController::InitializeSupportedWaveformList(this);
        }
        Caps = 0;
      }
      else
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          v33 = 0;
          v31 = &v27;
          v27 = (int)v13;
          v32 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v14, v13, 4u, &pData);
          v12 = Caps;
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::Initialize",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          62,
          v12,
          "Function failed.");
      }
    }
    else
    {
      if ( (unsigned int)dword_1C0324150 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v33 = 0;
        v31 = &v27;
        v27 = (int)v10;
        v32 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v11, v10, 4u, &pData);
        v9 = Caps;
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
    if ( (unsigned int)dword_1C0324150 > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v33 = 0;
      v31 = &v27;
      v27 = (int)v7;
      v32 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v8, v7, 4u, &pData);
      v6 = Caps;
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
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::Initialize exit");
    v33 = 0;
    v17 = *((_DWORD *)this + 22);
    v36 = 0;
    v31 = &v27;
    p_Caps = &Caps;
    v27 = v17;
    v32 = 4;
    v35 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECCCB, v18, v19, 5u, &pData);
  }
  return (unsigned int)Caps;
}
