/*
 * XREFs of ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0108448
 * Callers:
 *     ?CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0106030 (-CreateNewModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E46D0 (-AcquireFirstModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCE.c)
 *     ?AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E4DC0 (-AcquirePreferredModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITOR.c)
 *     ?AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E4F50 (-AcquirePreferredModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSO.c)
 *     ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01E825C (-_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CreateMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct DXGMONITOR::_DMMMONITORSOURCEMODE *a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rcx
  DXGMONITOR **v10; // r8
  DXGMONITOR *v11; // rax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v7 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
  v9 = v7;
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
      *(_DWORD *)v7 = (*((_DWORD *)this + 39))++;
      *((_DWORD *)v7 + 22) = 0;
      *((_DWORD *)v7 + 2) = 0;
      *(_QWORD *)(v7 + 12) = -1LL;
      *(_QWORD *)(v7 + 20) = -1LL;
      *(_QWORD *)(v7 + 28) = -1LL;
      *((_QWORD *)v7 + 6) = 0xFFFFFFFFLL;
      *((_DWORD *)v7 + 14) = 8;
    }
    *((_QWORD *)v7 + 14) = a2;
    v10 = this[24];
    v11 = (DXGMONITOR *)(v7 + 96);
    if ( *v10 != (DXGMONITOR *)(this + 23) )
      __fastfail(3u);
    *(_QWORD *)v11 = this + 23;
    *((_QWORD *)v9 + 13) = v10;
    *v10 = v11;
    this[24] = (DXGMONITOR **)v11;
    result = 0LL;
    *a3 = (struct _D3DKMDT_MONITOR_SOURCE_MODE *)v9;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(0LL, v8);
    WdLogEvent5_WdError(v14);
    return 3221225495LL;
  }
  return result;
}
