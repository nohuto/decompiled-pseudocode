/*
 * XREFs of ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0108310
 * Callers:
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01077C4 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z @ 0x1C010781C (-_ReadHMDPresenceFromMonitorStore@DXGMONITOR@@AEAAJPEAI0@Z.c)
 *     ?_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0107A38 (-_ReadScaleFactorFromMonitorStore@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0107CC0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01082BC (-_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C01E6064 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z @ 0x1C01E6108 (-_SaveHMDPresenceToMonitorStore@DXGMONITOR@@AEAAJII@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C01E61E4 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01E6280 (-_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C01E6324 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010A064 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C011CB50 (-DxgkCreateRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OpenMonitorDataStore(DXGMONITOR *this, __int64 a2, void **a3, __int64 a4)
{
  char v5; // si
  __int16 v7; // ax
  wchar_t *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // edi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  v5 = a2;
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *((_WORD *)this + 228);
  if ( v7 )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v7 + 170;
    v8 = (wchar_t *)operator new((unsigned __int16)(v7 + 170), 0x4D677844u, PagedPool);
    Destination.Buffer = v8;
    if ( v8 )
    {
      memset(v8, 0, Destination.MaximumLength);
      RtlAppendUnicodeToString(
        &Destination,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)((char *)this + 456));
      v10 = v5 != 0 ? 0xFFF2FFDA : 0;
      v13 = DxgkOpenRegistrySubkey(a3, v10 + 983103, 0LL, &Destination);
      if ( v13 == -1073741772
        && (v5 || (v13 = DxgkCreateRegistrySubkey(a3, v10 + 983103, 0LL, &Destination), v13 == -1073741772)) )
      {
        v16 = WdLogNewEntry5_WdTrace(v12, v11, v14, v15);
        *(_QWORD *)(v16 + 24) = this;
        *(_QWORD *)(v16 + 32) = -1073741772LL;
      }
      else if ( v13 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v21 + 32) = v13;
        *(_QWORD *)(v21 + 24) = this;
        WdLogEvent5_WdError(v21);
      }
      if ( Destination.Buffer )
        ExFreePoolWithTag(Destination.Buffer, 0);
      return (unsigned int)v13;
    }
    else
    {
      v20 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdLowResource(v20);
      return 3221225495LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v19 + 24) = this;
    *(_QWORD *)(v19 + 32) = -1073741637LL;
    WdLogEvent5_WdError(v19);
    return 3221225659LL;
  }
}
