/*
 * XREFs of ?_ReleaseMonitorModeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E8450
 * Callers:
 *     ?ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E5970 (-ReleaseModeInfo@DXGDMM_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMOD.c)
 *     ?ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01E5AA0 (-ReleaseModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODES.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorModeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        __int64 a3,
        __int64 a4)
{
  DXGMONITOR *v5; // rdi
  __int64 v6; // rax
  DXGMONITOR **v7; // rdx
  DXGMONITOR *v8; // rax
  DXGMONITOR *v9; // rdx
  DXGMONITOR **v10; // rax
  __int64 v12; // rax

  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (DXGMONITOR **)((char *)v5 + 184);
  if ( !a2 || (v8 = *v7, *v7 == (DXGMONITOR *)v7) )
  {
LABEL_13:
    v12 = WdLogNewEntry5_WdError(this, v7);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = v5;
    WdLogEvent5_WdError(v12);
    return 3223192368LL;
  }
  else
  {
    this = (DXGMONITOR *)&a2[1];
    while ( v8 != this )
    {
      if ( v7 == (DXGMONITOR **)v8 )
        goto LABEL_13;
      v8 = *(DXGMONITOR **)v8;
    }
    v9 = *(DXGMONITOR **)this;
    v10 = *(DXGMONITOR ***)&a2[1].VideoSignalInfo.VideoStandard;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this || *v10 != this )
      __fastfail(3u);
    *v10 = v9;
    *((_QWORD *)v9 + 1) = v10;
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
}
