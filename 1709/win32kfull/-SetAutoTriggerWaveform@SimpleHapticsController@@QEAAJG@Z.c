/*
 * XREFs of ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0224E54
 * Callers:
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0222038 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0224924 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  NTSTATUS Caps; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  const GUID *v8; // r8
  const GUID *v9; // r9
  GUID *v10; // rdi
  NTSTATUS SpecificValueCaps; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rdx
  const GUID *v15; // r8
  int v16; // eax
  const GUID *v17; // r8
  const GUID *v18; // r9
  NTSTATUS v19; // eax
  const GUID *v20; // r8
  const GUID *v21; // r9
  int v22; // eax
  const GUID *v23; // r9
  unsigned int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v27; // [rsp+48h] [rbp-B8h] BYREF
  USHORT ValueCapsLength[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  const char *v32; // [rsp+110h] [rbp+10h]
  __int64 v33; // [rsp+118h] [rbp+18h]
  unsigned int *v34; // [rsp+120h] [rbp+20h]
  __int64 v35; // [rsp+128h] [rbp+28h]

  v27 = a2;
  v25 = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_1C0320150 > 4 )
  {
    v33 = 54LL;
    v32 = "SimpleHapticsController::SetAutoTriggerWaveform entry";
    v34 = (unsigned int *)&v27;
    v35 = 2LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E9859, v3, v4, 4u, &pData);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v25 = Caps;
  if ( Caps >= 0 )
  {
    v10 = (GUID *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL);
    if ( v10 )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
      v25 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
      {
        LOBYTE(v10->Data1) = ValueCaps.ReportID;
        v16 = SimpleHapticsController::SendDeviceIOControl(
                (SimpleHapticsController *)this,
                0xB0192u,
                0LL,
                0LL,
                v10,
                Capabilities.FeatureReportByteLength,
                0LL);
        v25 = v16;
        if ( v16 >= 0 )
        {
          v19 = HidP_SetUsageValue(
                  HidP_Feature,
                  0xEu,
                  ValueCaps.LinkCollection,
                  0x20u,
                  v27,
                  this[2],
                  (PCHAR)v10,
                  Capabilities.FeatureReportByteLength);
          v25 = v19;
          if ( v19 >= 0 )
          {
            v22 = SimpleHapticsController::SendDeviceIOControl(
                    (SimpleHapticsController *)this,
                    0xB0191u,
                    v10,
                    (const GUID *)Capabilities.FeatureReportByteLength,
                    0LL,
                    0,
                    0LL);
            v25 = v22;
            if ( v22 < 0 )
            {
              if ( (unsigned int)dword_1C0320150 > 2 )
              {
                v26 = v22;
                v34 = (unsigned int *)&v26;
                v32 = "Function failed.";
                v33 = 17LL;
                v35 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v15, v23, 4u, &pData);
                v22 = v25;
              }
              DbgPrintEx(
                0x4Du,
                0,
                "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
                "SimpleHapticsController::SetAutoTriggerWaveform",
                "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
                345,
                v22,
                "Function failed.");
            }
          }
          else
          {
            if ( (unsigned int)dword_1C0320150 > 2 )
            {
              v26 = v19;
              v34 = (unsigned int *)&v26;
              v32 = "Function failed.";
              v33 = 17LL;
              v35 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v20, v21, 4u, &pData);
              v19 = v25;
            }
            DbgPrintEx(
              0x4Du,
              0,
              "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
              "SimpleHapticsController::SetAutoTriggerWaveform",
              "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
              336,
              v19,
              "Function failed.");
          }
        }
        else
        {
          if ( (unsigned int)dword_1C0320150 > 2 )
          {
            v26 = v16;
            v34 = (unsigned int *)&v26;
            v32 = "Function failed.";
            v33 = 17LL;
            v35 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v17, v18, 4u, &pData);
            v16 = v25;
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::SetAutoTriggerWaveform",
            "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            326,
            v16,
            "Function failed.");
        }
      }
      else
      {
        if ( (unsigned int)dword_1C0320150 > 2 )
        {
          v26 = SpecificValueCaps;
          v34 = (unsigned int *)&v26;
          v32 = "Function failed.";
          v33 = 17LL;
          v35 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v12, v13, 4u, &pData);
          SpecificValueCaps = v25;
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::SetAutoTriggerWaveform",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          316,
          SpecificValueCaps,
          "Function failed.");
      }
      Win32FreePool(v10, v14, v15);
    }
    else
    {
      v25 = -1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0320150 > 2 )
    {
      v26 = Caps;
      v34 = (unsigned int *)&v26;
      v32 = "Function failed.";
      v33 = 17LL;
      v35 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v6, v7, 4u, &pData);
      Caps = v25;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SetAutoTriggerWaveform",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      302,
      Caps,
      "Function failed.");
  }
  if ( (unsigned int)dword_1C0320150 > 4 )
  {
    v33 = 53LL;
    v32 = "SimpleHapticsController::SetAutoTriggerWaveform exit";
    v34 = &v25;
    v35 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E9891, v8, v9, 4u, &pData);
  }
  return v25;
}
