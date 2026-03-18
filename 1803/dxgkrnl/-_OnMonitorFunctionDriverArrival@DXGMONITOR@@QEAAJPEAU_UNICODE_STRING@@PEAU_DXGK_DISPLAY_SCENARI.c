/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C022BD10 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01A88F4 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     DxgkNotifyMonitorChange @ 0x1C01D1204 (DxgkNotifyMonitorChange.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0232F34 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0233194 (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C023357C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02337FC (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0233B30 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C0233E38 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0233ED4 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0235898 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02359A0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x1C0235A50 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C0237E70 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z @ 0x1C023851C (-_UpdateLinkInfo@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  unsigned __int16 v13; // ax
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // r14d
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // esi
  __int64 v27; // rax
  int UsageOverridesFromPnpRegistry; // eax
  int v29; // eax
  bool v30; // zf
  struct _DEVICE_OBJECT *v31; // rcx
  struct _DEVICE_OBJECT *v32; // rcx
  int v33; // eax
  char v34; // cl
  unsigned int v35; // eax
  _DWORD *v36; // rax
  _DWORD *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  struct _DEVICE_OBJECT *v41; // rcx
  char *v42; // rcx
  int v43; // [rsp+20h] [rbp-20h]
  unsigned int v44; // [rsp+80h] [rbp+40h] BYREF
  int v45; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp+58h] BYREF

  v7 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !*((_DWORD *)this + 33) )
  {
    if ( (int)DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this) >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf((PDEVICE_OBJECT *)this);
  }
  v12 = (void *)*((_QWORD *)this + 14);
  if ( v12 )
  {
    operator delete[](v12);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_WORD *)this + 52) = 0;
  v13 = SourceString->Length + 2;
  *((_WORD *)this + 53) = v13;
  v14 = operator new[](v13, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 14) = v14;
  if ( !v14 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    WdLogEvent5_WdError(v16);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 104), SourceString);
  DXGMONITOR::_RegisterPnPTargetDeviceNotification(this);
  v18 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v44);
  v19 = v18 + 0x80000000;
  if ( (int)v19 < 0 || v18 == -1073741772 )
  {
    if ( (v20 = v44, v21 = (unsigned int *)((char *)this + 576), v18 == -1073741772) && *v21 || v18 >= 0 && *v21 != v44 )
    {
      *v21 = v44;
      DXGMONITOR::_SaveScaleFactorToMonitorStore((UNICODE_STRING *)this, v20);
      MONITOR_MGR::_IssueMonitorEvent(
        *((struct _FAST_MUTEX **)this + 4),
        *((_DWORD *)this + 11),
        9,
        *v21,
        *((_DWORD *)this + 108),
        (__int64)a3);
    }
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v19) + 1697) )
    goto LABEL_56;
  if ( *((_DWORD *)this + 145) )
    goto LABEL_35;
  v45 = 0;
  LOBYTE(v44) = 1;
  if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(this, (enum _DXGK_DISPLAY_USAGE *)&v44) < 0 )
  {
    UsageOverridesFromPnpRegistry = DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
                                      this,
                                      (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v45);
    v26 = v45;
    v18 = UsageOverridesFromPnpRegistry;
  }
  else
  {
    v26 = (unsigned __int8)(v44 - 2) <= 1u;
    if ( v26 != *((_DWORD *)this + 145) )
    {
      LOBYTE(v25) = v44 - 2;
      v27 = WdLogNewEntry5_WdAssertion(v25);
      WdLogEvent5_WdAssertion(v27);
    }
  }
  if ( v18 < 0 || v26 == *((_DWORD *)this + 145) )
    goto LABEL_56;
  *((_DWORD *)this + 145) = v26;
  DXGMONITOR::_SaveUsageOverridesToMonitorStore((UNICODE_STRING *)this, v26);
  v29 = *((_DWORD *)this + 145);
  v30 = v29 == 0;
  if ( v29 )
  {
    DXGMONITOR::_DestroyTtmDevice((char **)this);
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((_DWORD *)this + 11),
      10,
      2LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    v30 = *((_DWORD *)this + 145) == 0;
  }
  result = DXGMONITOR::_UpdateLinkInfo(this, !v30);
  if ( (int)result < 0 )
  {
LABEL_56:
    if ( !*((_DWORD *)this + 145) )
      DXGMONITOR::_CreateTtmDevice(this, v22, v23, v24);
LABEL_35:
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
      8395569LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00564B0,
      0,
      v43);
    v31 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 9);
    v45 = 0;
    if ( (int)DxgkCallDriverIoControl(v31, 0x2324CBu, 0LL, 0, &v45, 4u, 1u, 0LL) >= 0 )
    {
      v32 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 9);
      v44 = 0;
      v33 = DxgkCallDriverIoControl(v32, 0x23243Bu, 0LL, 0, &v44, 4u, 1u, 0LL);
      v34 = v44;
      if ( v33 < 0 )
        v35 = *((_DWORD *)this + 248) & 0xFFFFFFE7;
      else
        v35 = (*((_DWORD *)this + 248) & 0xFFFFFFF7 | (8 * (v44 & 1))) ^ ((*((_BYTE *)this + 992) & 0xF7 | (unsigned __int8)(8 * (v44 & 1))) ^ (unsigned __int8)(8 * v44)) & 0x10;
      *((_DWORD *)this + 248) = v35;
      if ( v45 == 1 )
      {
        v41 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 9);
        *((_DWORD *)this + 248) = v35 & 0xFFFFFFF8 | 1;
        if ( (int)DxgkCallDriverIoControl(v41, 0x230494u, 0LL, 0, (char *)this + 680, 0x65u, 0, &v46) >= 0 )
        {
          *((_DWORD *)this + 196) = v46;
LABEL_53:
          DxgkNotifyMonitorChange(v38);
          return 0LL;
        }
        v42 = (char *)this + 680;
LABEL_52:
        memset(v42, 0, 0x13CuLL);
        goto LABEL_53;
      }
      if ( v45 == 3 )
      {
        *((_DWORD *)this + 248) = v34 & 4 | v35 & 0xFFFFFFFA | 2;
        v36 = operator new[](0xCCuLL, 0x4D677844u, PagedPool);
        v37 = v36;
        if ( v36 )
        {
          if ( (int)DxgkCallDriverIoControl(*((PDEVICE_OBJECT *)this + 9), 0x23243Fu, 0LL, 0, v36, 0xCCu, 1u, 0LL) >= 0 )
          {
            *((_DWORD *)this + 245) = *v37;
            *((_DWORD *)this + 246) = v37[1];
            *((_DWORD *)this + 247) = v37[2];
            if ( v37[1] )
            {
              do
              {
                v39 = v7++;
                v40 = 3 * v39;
                *((_DWORD *)this + v40 + 197) = v37[3 * v39 + 3];
                *((_DWORD *)this + v40 + 198) = v37[v40 + 4];
                *((_DWORD *)this + v40 + 199) = v37[3 * v39 + 5];
              }
              while ( v7 < v37[1] );
            }
          }
          else
          {
            memset((char *)this + 680, 0, 0x13CuLL);
          }
          operator delete(v37);
          goto LABEL_53;
        }
      }
    }
    v42 = (char *)this + 680;
    goto LABEL_52;
  }
  return result;
}
