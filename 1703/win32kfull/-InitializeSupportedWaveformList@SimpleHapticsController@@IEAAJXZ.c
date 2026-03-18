/*
 * XREFs of ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C0222B5C
 * Callers:
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0222720 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C022345C (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C0223FF8 (-UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z.c)
 */

__int64 __fastcall SimpleHapticsController::InitializeSupportedWaveformList(PHIDP_PREPARSED_DATA *this)
{
  unsigned int v2; // r13d
  CHAR *v3; // r12
  unsigned int v4; // esi
  int v5; // r15d
  NTSTATUS Caps; // ebx
  struct _HIDP_VALUE_CAPS *ValueCaps; // rdi
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  USAGE *p_LinkUsagePage; // rcx
  USAGE *p_LinkUsage; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  UCHAR *v16; // rax
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  USHORT v19; // cx
  unsigned int i; // r15d
  USAGE UsageMin; // r9
  USHORT LinkCollection; // r8
  struct _HIDP_PREPARSED_DATA *v23; // rax
  __int64 v24; // rdx
  unsigned int j; // esi
  LPCGUID v26; // r8
  LPCGUID v27; // r9
  USHORT ValueCapsLength[2]; // [rsp+48h] [rbp-79h] BYREF
  ULONG UsageValue[3]; // [rsp+4Ch] [rbp-75h] BYREF
  struct _HIDP_CAPS Capabilities; // [rsp+58h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B8h] [rbp-9h] BYREF
  ULONG *v34; // [rsp+C8h] [rbp+7h]
  __int64 v35; // [rsp+D0h] [rbp+Fh]

  memset(&Capabilities, 0, sizeof(Capabilities));
  v2 = 0;
  v3 = 0LL;
  v4 = 0;
  v5 = 0;
  Caps = HidP_GetCaps(this[2], &Capabilities);
  ValueCapsLength[0] = Capabilities.NumberFeatureValueCaps;
  if ( Caps >= 0 && Capabilities.NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * Capabilities.NumberFeatureValueCaps, 1667787091LL);
    if ( !ValueCaps )
      return (unsigned int)-1073741670;
    Caps = HidP_GetSpecificValueCaps(HidP_Feature, 0xAu, 0, 0, ValueCaps, ValueCapsLength, this[2]);
    if ( Caps < 0 )
    {
      if ( (unsigned int)dword_1C0324150 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        UsageValue[0] = Caps;
        v34 = UsageValue;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v8, v9, 4u, &pData);
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
    v10 = ValueCapsLength[0];
    v11 = 0LL;
    if ( !ValueCapsLength[0] )
      goto LABEL_46;
    p_LinkUsagePage = &ValueCaps->LinkUsagePage;
    while ( *p_LinkUsagePage != 14 )
    {
      v11 = (unsigned int)(v11 + 1);
      p_LinkUsagePage += 36;
      if ( (unsigned int)v11 >= ValueCapsLength[0] )
        goto LABEL_15;
    }
    *((_BYTE *)this + 92) = ValueCaps[v11].ReportID;
LABEL_15:
    if ( !(_DWORD)v10 )
      goto LABEL_46;
    p_LinkUsage = &ValueCaps->LinkUsage;
    v14 = v10;
    do
    {
      if ( p_LinkUsage[1] == 14 && *((_BYTE *)p_LinkUsage - 6) == *((_BYTE *)this + 92) )
      {
        if ( *p_LinkUsage == 16 )
        {
          ++v4;
        }
        else if ( *p_LinkUsage == 17 )
        {
          ++v5;
        }
      }
      p_LinkUsage += 36;
      --v14;
    }
    while ( v14 );
    if ( v4 && v4 == v5 )
    {
      *((_DWORD *)this + 22) = v4;
      v15 = Win32AllocPool(8LL * v4, 1667787091LL);
      this[10] = (PHIDP_PREPARSED_DATA)v15;
      if ( !v15
        || (v16 = (UCHAR *)Win32AllocPool(Capabilities.FeatureReportByteLength, 1667787091LL), (v3 = (CHAR *)v16) == 0LL) )
      {
        Caps = -1073741670;
LABEL_51:
        Win32FreePool(ValueCaps);
        return (unsigned int)Caps;
      }
      *v16 = ValueCaps->ReportID;
      Caps = SimpleHapticsController::SendDeviceIOControl(
               (SimpleHapticsController *)this,
               0xB0192u,
               0LL,
               0,
               v16,
               Capabilities.FeatureReportByteLength,
               0LL);
      if ( Caps >= 0 )
      {
        v19 = ValueCapsLength[0];
        for ( i = 0; i < v19; ++i )
        {
          if ( ValueCaps[i].LinkUsagePage == 14 && ValueCaps[i].LinkUsage == 17 )
          {
            UsageMin = ValueCaps[i].Range.UsageMin;
            LinkCollection = ValueCaps[i].LinkCollection;
            v23 = this[2];
            UsageValue[0] = 0;
            Caps = HidP_GetUsageValue(
                     HidP_Feature,
                     0xAu,
                     LinkCollection,
                     UsageMin,
                     UsageValue,
                     v23,
                     v3,
                     Capabilities.FeatureReportByteLength);
            if ( Caps >= 0 )
            {
              v24 = v2++;
              *((_WORD *)this[10] + 4 * v24) = ValueCaps[i].Range.UsageMin;
              *((_DWORD *)this[10] + 2 * v24 + 1) = UsageValue[0];
            }
            v19 = ValueCapsLength[0];
          }
        }
        for ( j = 0; j < v19; ++j )
        {
          if ( ValueCaps[j].LinkUsagePage == 14 && ValueCaps[j].LinkUsage == 16 )
          {
            SimpleHapticsController::UpdateWaveformInfoList(
              (SimpleHapticsController *)this,
              ValueCaps[j].Range.UsageMin,
              ValueCaps[j].PhysicalMin);
            v19 = ValueCapsLength[0];
          }
        }
      }
      else
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          UsageValue[0] = Caps;
          v34 = UsageValue;
          v35 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v17, v18, 4u, &pData);
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
      if ( (unsigned int)dword_1C0324150 > 2 )
      {
        TlgCreateSz(&pDesc, "Either there is no waveform or waveform list is not equal to duration list.");
        UsageValue[0] = -1073741216;
        v34 = UsageValue;
        v35 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v26, v27, 4u, &pData);
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
    if ( v3 )
      Win32FreePool(v3);
    goto LABEL_51;
  }
  return (unsigned int)Caps;
}
