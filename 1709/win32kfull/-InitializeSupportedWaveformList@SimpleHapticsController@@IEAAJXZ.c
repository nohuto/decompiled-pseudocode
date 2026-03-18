/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C022400C
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0223BF8 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0224924 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C02254B0 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  CHAR *v2; // r13
  unsigned int v3; // esi
  int v4; // r14d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rdi
  NTSTATUS SpecificValueCaps; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rdx
  const GUID *v11; // r8
  const GUID *v12; // rdx
  __int64 v13; // rax
  USAGE *p_LinkUsagePage; // rcx
  UCHAR *p_ReportID; // rcx
  __int16 v16; // ax
  __int64 v17; // rax
  UCHAR *v18; // rax
  int v19; // eax
  const GUID *v20; // r9
  USHORT v21; // cx
  unsigned int v22; // r14d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  __int64 v25; // r8
  unsigned int j; // esi
  USHORT ValueCapsLength[2]; // [rsp+48h] [rbp-69h] BYREF
  unsigned int i; // [rsp+4Ch] [rbp-65h] BYREF
  ULONG UsageValue; // [rsp+50h] [rbp-61h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-19h] BYREF
  const char *v33; // [rsp+B8h] [rbp+7h]
  __int64 v34; // [rsp+C0h] [rbp+Fh]
  unsigned int *p_i; // [rsp+C8h] [rbp+17h]
  __int64 v36; // [rsp+D0h] [rbp+1Fh]

  memset(&Capabilities, 0, sizeof(Capabilities));
  v2 = 0LL;
  v3 = 0;
  v4 = 0;
  Caps = HidP_GetCaps(this[2], &Capabilities);
  ValueCapsLength[0] = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * Capabilities.NumberFeatureValueCaps, 1667787091LL);
    if ( !ValueCaps )
      return (unsigned int)-1073741670;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0xAu, 0, 0, ValueCaps, ValueCapsLength, this[2]);
    Caps = SpecificValueCaps;
    if ( SpecificValueCaps < 0 )
    {
      if ( (unsigned int)dword_1C0320150 > 2 )
      {
        i = SpecificValueCaps;
        p_i = &i;
        v36 = 4LL;
        v33 = "Function failed.";
        v34 = 17LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v8, v9, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        538,
        Caps,
        "Function failed.");
      goto LABEL_51;
    }
    v12 = (const GUID *)ValueCapsLength[0];
    v13 = 0LL;
    if ( !ValueCapsLength[0] )
      goto LABEL_46;
    p_LinkUsagePage = &ValueCaps->LinkUsagePage;
    while ( *p_LinkUsagePage != 14 )
    {
      v13 = (unsigned int)(v13 + 1);
      p_LinkUsagePage += 36;
      if ( (unsigned int)v13 >= ValueCapsLength[0] )
        goto LABEL_15;
    }
    *((_BYTE *)this + 92) = ValueCaps[v13].ReportID;
LABEL_15:
    if ( !(_DWORD)v12 )
      goto LABEL_46;
    v8 = v12;
    p_ReportID = &ValueCaps->ReportID;
    do
    {
      if ( *((_WORD *)p_ReportID + 4) == 14 && *p_ReportID == *((_BYTE *)this + 92) )
      {
        v16 = *((_WORD *)p_ReportID + 3);
        if ( v16 == 16 )
        {
          ++v3;
        }
        else if ( v16 == 17 )
        {
          ++v4;
        }
      }
      p_ReportID += 72;
      v8 = (const GUID *)((char *)v8 - 1);
    }
    while ( v8 );
    if ( v3 && v3 == v4 )
    {
      *((_DWORD *)this + 22) = v3;
      v17 = Win32AllocPool(8LL * v3, 1667787091LL);
      this[10] = (PHIDP_PREPARSED_DATA)v17;
      if ( !v17
        || (v18 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL), (v2 = (CHAR *)v18) == 0LL) )
      {
        Caps = -1073741670;
LABEL_51:
        Win32FreePool(ValueCaps, v10, v11);
        return (unsigned int)Caps;
      }
      *v18 = ValueCaps->ReportID;
      v19 = SimpleHapticsController::SendDeviceIOControl(
              (SimpleHapticsController *)this,
              0xB0192u,
              0LL,
              0,
              v18,
              Capabilities.FeatureReportByteLength,
              0LL);
      Caps = v19;
      if ( v19 >= 0 )
      {
        v21 = ValueCapsLength[0];
        v22 = 0;
        for ( i = 0; v22 < v21; ++v22 )
        {
          if ( ValueCaps[v22].LinkUsagePage == 14 && ValueCaps[v22].LinkUsage == 17 )
          {
            UsageMin = ValueCaps[v22].Range.UsageMin;
            LinkCollection = ValueCaps[v22].LinkCollection;
            UsageValue = 0;
            Caps = HidP_GetUsageValue(
                     HidP_Feature,
                     0xAu,
                     LinkCollection,
                     UsageMin,
                     &UsageValue,
                     this[2],
                     v2,
                     Capabilities.FeatureReportByteLength);
            if ( Caps >= 0 )
            {
              v25 = i;
              *((_WORD *)this[10] + 4 * i) = ValueCaps[v22].Range.UsageMin;
              *((_DWORD *)this[10] + 2 * v25 + 1) = UsageValue;
              v11 = (const GUID *)(unsigned int)(v25 + 1);
              i = (unsigned int)v11;
            }
            v21 = ValueCapsLength[0];
          }
        }
        for ( j = 0; j < v21; ++j )
        {
          v10 = 9LL * j;
          if ( ValueCaps[j].LinkUsagePage == 14 && ValueCaps[j].LinkUsage == 16 )
          {
            SimpleHapticsController::UpdateWaveformInfoList(
              (SimpleHapticsController *)this,
              ValueCaps[j].Range.UsageMin,
              ValueCaps[j].PhysicalMin);
            v21 = ValueCapsLength[0];
          }
        }
      }
      else
      {
        if ( (unsigned int)dword_1C0320150 > 2 )
        {
          i = v19;
          p_i = &i;
          v36 = 4LL;
          v33 = "Function failed.";
          v34 = 17LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v11, v20, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::InitializeSupportedWaveformList",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          599,
          Caps,
          "Function failed.");
      }
    }
    else
    {
LABEL_46:
      if ( (unsigned int)dword_1C0320150 > 2 )
      {
        v33 = "Either there is no waveform or waveform list is not equal to duration list.";
        p_i = &i;
        v36 = 4LL;
        v34 = 76LL;
        i = -1073741216;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v8, v9, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::InitializeSupportedWaveformList",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        575,
        -1073741216,
        "Either there is no waveform or waveform list is not equal to duration list.");
    }
    if ( v2 )
      Win32FreePool(v2, v10, v11);
    goto LABEL_51;
  }
  return (unsigned int)Caps;
}
