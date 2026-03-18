/*
 * XREFs of ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C023982C
 * Callers:
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C022FA10 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 *     ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0230310 (-AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 *     ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C02304C0 (-AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSO.c)
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0230800 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C023A648 (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CreateMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct DXGMONITOR::_DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  __int64 v6; // rax
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  DXGMONITOR **v11; // r8
  DXGMONITOR *v12; // rax

  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
  v8 = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *((_OWORD *)v7 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)a2 + 3);
      *((_OWORD *)v7 + 4) = *((_OWORD *)a2 + 4);
      *((_OWORD *)v7 + 5) = *((_OWORD *)a2 + 5);
    }
    else
    {
      *(_DWORD *)v7 = (*((_DWORD *)this + 53))++;
      *((_DWORD *)v7 + 22) = 0;
      *((_DWORD *)v7 + 2) = 0;
      *(_QWORD *)(v7 + 12) = -1LL;
      *(_QWORD *)(v7 + 20) = -1LL;
      *(_QWORD *)(v7 + 28) = -1LL;
      *((_QWORD *)v7 + 6) = 0xFFFFFFFFLL;
      *((_DWORD *)v7 + 14) = 8;
    }
    *((_QWORD *)v7 + 14) = a2;
    v11 = this[31];
    v12 = (DXGMONITOR *)(v7 + 96);
    if ( *v11 != (DXGMONITOR *)(this + 30) )
      __fastfail(3u);
    *(_QWORD *)v12 = this + 30;
    *((_QWORD *)v8 + 13) = v11;
    *v11 = v12;
    this[31] = (DXGMONITOR **)v12;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v8;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v9);
    return 3221225495LL;
  }
  return result;
}
