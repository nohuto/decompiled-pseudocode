/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0232408
 * Callers:
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0232ABC (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0232E24 (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0233078 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0233360 (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C023346C (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0233610 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0233CF8 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0233D9C (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C0233E38 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0233ED4 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0233FD0 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C0234074 (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0234114 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C0231CFC (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C0231DA4 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(UNICODE_STRING *this, char a2, void **a3)
{
  __int64 v6; // rax
  unsigned __int16 Length; // ax
  __int64 v8; // rax
  wchar_t *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  NTSTATUS v16; // edi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)&this[27].Length != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  Length = this[32].Length;
  if ( Length )
  {
    Destination.Length = 0;
    Destination.MaximumLength = Length + 170;
    v10 = (wchar_t *)operator new[]((unsigned __int16)(Length + 170), 0x4D677844u, PagedPool);
    Destination.Buffer = v10;
    if ( v10 )
    {
      memset(v10, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, this + 32);
      v13 = a2 != 0 ? 0xFFF2FFDA : 0;
      v16 = DxgkOpenRegistrySubkey(a3, v13 + 983103, 0LL, &Destination);
      if ( v16 == -1073741772
        && (a2 || (v16 = DxgkCreateRegistrySubkey(a3, v13 + 983103, 0LL, &Destination), v16 == -1073741772)) )
      {
        v19 = WdLogNewEntry5_WdTrace(v15, v14, v17, v18);
        *(_QWORD *)(v19 + 24) = this;
        *(_QWORD *)(v19 + 32) = -1073741772LL;
      }
      else if ( v16 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v20 + 32) = v16;
        *(_QWORD *)(v20 + 24) = this;
        WdLogEvent5_WdError(v20);
      }
      operator delete[](Destination.Buffer);
      return (unsigned int)v16;
    }
    else
    {
      v12 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v8 + 24) = this;
    *(_QWORD *)(v8 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v8);
    return 3221225659LL;
  }
}
