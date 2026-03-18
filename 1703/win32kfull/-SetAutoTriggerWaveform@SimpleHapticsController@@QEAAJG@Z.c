/*
 * XREFs of ?SetAutoTriggerWaveform@SimpleHapticsController@@QEAAJG@Z @ 0x1C0223984
 * Callers:
 *     ?SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0220B64 (-SetHapticsMode@InteractiveControlDevice@@QEAAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C022345C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 */

__int64 __fastcall SimpleHapticsController::SetAutoTriggerWaveform(PHIDP_PREPARSED_DATA *this, unsigned __int16 a2)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  int v5; // r9d
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  UCHAR *v8; // rdi
  int v9; // r9d
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  int v12; // r9d
  LPCGUID v13; // r9
  LPCGUID v14; // r8
  int v15; // r9d
  LPCGUID v16; // r9
  LPCGUID v17; // r8
  int v18; // r9d
  LPCGUID v19; // r9
  LPCGUID v20; // r8
  LPCGUID v21; // r8
  LPCGUID v22; // r9
  int Caps; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v26; // [rsp+48h] [rbp-B8h] BYREF
  USHORT ValueCapsLength[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *p_Caps; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]

  v26 = a2;
  Caps = 0;
  memset(&Capabilities, 0, sizeof(Capabilities));
  ValueCapsLength[0] = 1;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::SetAutoTriggerWaveform entry");
    v33 = 2LL;
    p_Caps = (int *)&v26;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECC30, v3, v4, 4u, &pData);
  }
  Caps = HidP_GetCaps(this[2], &Capabilities);
  v5 = Caps;
  if ( Caps >= 0 )
  {
    v8 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL);
    if ( v8 )
    {
      Caps = HidP_GetSpecificValueCaps(HidP_Feature, 0xEu, 0, 0x20u, &ValueCaps, ValueCapsLength, this[2]);
      v9 = Caps;
      if ( Caps >= 0 )
      {
        *v8 = ValueCaps.ReportID;
        Caps = SimpleHapticsController::SendDeviceIOControl(
                 (SimpleHapticsController *)this,
                 0xB0192u,
                 0LL,
                 0,
                 v8,
                 Capabilities.FeatureReportByteLength,
                 0LL);
        v12 = Caps;
        if ( Caps >= 0 )
        {
          Caps = HidP_SetUsageValue(
                   HidP_Feature,
                   0xEu,
                   ValueCaps.LinkCollection,
                   0x20u,
                   v26,
                   this[2],
                   (PCHAR)v8,
                   Capabilities.FeatureReportByteLength);
          v15 = Caps;
          if ( Caps >= 0 )
          {
            Caps = SimpleHapticsController::SendDeviceIOControl(
                     (SimpleHapticsController *)this,
                     0xB0191u,
                     v8,
                     Capabilities.FeatureReportByteLength,
                     0LL,
                     0,
                     0LL);
            v18 = Caps;
            if ( Caps < 0 )
            {
              if ( (unsigned int)dword_1C0324150 > 2 )
              {
                TlgCreateSz(&pDesc, "Function failed.");
                v25 = (int)v19;
                p_Caps = &v25;
                v33 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v20, v19, 4u, &pData);
                v18 = Caps;
              }
              DbgPrintEx(
                0x4Du,
                0,
                "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
                "SimpleHapticsController::SetAutoTriggerWaveform",
                "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
                345,
                v18,
                "Function failed.");
            }
          }
          else
          {
            if ( (unsigned int)dword_1C0324150 > 2 )
            {
              TlgCreateSz(&pDesc, "Function failed.");
              v25 = (int)v16;
              p_Caps = &v25;
              v33 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v17, v16, 4u, &pData);
              v15 = Caps;
            }
            DbgPrintEx(
              0x4Du,
              0,
              "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
              "SimpleHapticsController::SetAutoTriggerWaveform",
              "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
              336,
              v15,
              "Function failed.");
          }
        }
        else
        {
          if ( (unsigned int)dword_1C0324150 > 2 )
          {
            TlgCreateSz(&pDesc, "Function failed.");
            v25 = (int)v13;
            p_Caps = &v25;
            v33 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v14, v13, 4u, &pData);
            v12 = Caps;
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::SetAutoTriggerWaveform",
            "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            326,
            v12,
            "Function failed.");
        }
      }
      else
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          v25 = (int)v10;
          p_Caps = &v25;
          v33 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v11, v10, 4u, &pData);
          v9 = Caps;
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::SetAutoTriggerWaveform",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          316,
          v9,
          "Function failed.");
      }
      Win32FreePool(v8);
    }
    else
    {
      Caps = -1073741670;
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0324150 > 2 )
    {
      TlgCreateSz(&pDesc, "Function failed.");
      v25 = (int)v6;
      p_Caps = &v25;
      v33 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v7, v6, 4u, &pData);
      v5 = Caps;
    }
    DbgPrintEx(
      0x4Du,
      0,
      "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
      "SimpleHapticsController::SetAutoTriggerWaveform",
      "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
      302,
      v5,
      "Function failed.");
  }
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::SetAutoTriggerWaveform exit");
    v33 = 4LL;
    p_Caps = &Caps;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECBC1, v21, v22, 4u, &pData);
  }
  return (unsigned int)Caps;
}
