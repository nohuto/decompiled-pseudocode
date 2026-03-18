/*
 * XREFs of ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C010B298
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0108180 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B1A8 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v6; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v7; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v8; // rdx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v9; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v15; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v13);
  }
  v6 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 28);
  if ( !a2 )
    goto LABEL_23;
  v7 = *v6;
  if ( *v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v6 )
    goto LABEL_23;
  while ( v7 != &a2[1] )
  {
    if ( v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v7 )
      goto LABEL_23;
    v7 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v7->Id;
  }
  v8 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE ***)&a2[1].VideoSignalInfo.TotalSize.cy;
  v6 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 25);
  if ( !v8
    || (v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v6, *v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v6) )
  {
LABEL_23:
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = this;
    WdLogEvent5_WdError(v14);
    return 3223192368LL;
  }
  else
  {
    while ( v9 != v8 + 12 )
    {
      if ( v6 == v9 )
        goto LABEL_23;
      v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v9;
    }
    v10 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v8[12];
    if ( v10 == v6 )
      goto LABEL_20;
    v8 = v10 - 12;
    if ( !v10 )
      v8 = 0LL;
    if ( !v8 )
    {
LABEL_20:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v8) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      result = DXGMONITOR::_CreateMonitorModeEnumerator(
                 this,
                 (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)v8,
                 &v15);
      if ( (int)result >= 0 )
        *a3 = v15;
    }
  }
  return result;
}
