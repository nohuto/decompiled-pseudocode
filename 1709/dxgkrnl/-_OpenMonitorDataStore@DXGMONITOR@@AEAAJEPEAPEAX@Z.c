/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C010AFF0
 * Callers:
 *     ?_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0109DF4 (-_ReadWCGEnforcedFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0109E4C (-_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0109EA8 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C0109F00 (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C010A11C (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C010A3A4 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AF9C (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C02006A0 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z @ 0x1C0200744 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z.c)
 *     ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0200820 (-_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02008BC (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0200958 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C02009FC (-_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C0200A9C (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010D250 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C020020C (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(UNICODE_STRING *this, char a2, void **a3)
{
  unsigned __int16 Length; // ax
  wchar_t *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)&this[26].Length != 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  Length = this[31].Length;
  if ( Length )
  {
    Destination.Length = 0;
    Destination.MaximumLength = Length + 170;
    v7 = (wchar_t *)operator new((unsigned __int16)(Length + 170), 0x4D677844u, PagedPool);
    Destination.Buffer = v7;
    if ( v7 )
    {
      memset(v7, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, this + 31);
      v9 = a2 != 0 ? 0xFFF2FFDA : 0;
      v12 = DxgkOpenRegistrySubkey(a3, v9 + 983103, 0LL, &Destination);
      if ( v12 == -1073741772
        && (a2 || (v12 = DxgkCreateRegistrySubkey(a3, v9 + 983103, 0LL, &Destination), v12 == -1073741772)) )
      {
        v13 = WdLogNewEntry5_WdTrace(v11, v10);
        *(_QWORD *)(v13 + 24) = this;
        *(_QWORD *)(v13 + 32) = -1073741772LL;
      }
      else if ( v12 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v18 + 32) = v12;
        *(_QWORD *)(v18 + 24) = this;
        WdLogEvent5_WdError(v18);
      }
      if ( Destination.Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      return (unsigned int)v12;
    }
    else
    {
      v17 = WdLogNewEntry5_WdLowResource(v8);
      *(_QWORD *)(v17 + 24) = this;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v16 + 24) = this;
    *(_QWORD *)(v16 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v16);
    return 3221225659LL;
  }
}
