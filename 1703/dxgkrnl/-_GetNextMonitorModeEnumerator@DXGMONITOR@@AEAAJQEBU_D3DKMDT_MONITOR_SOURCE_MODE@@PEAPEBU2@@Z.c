/*
 * XREFs of ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01E825C
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C01E4C10 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0108448 (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorModeEnumerator(
        DXGMONITOR ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        struct _D3DKMDT_MONITOR_SOURCE_MODE **a3,
        __int64 a4)
{
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v9; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v10; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v11; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v12; // r8
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v13; // rax
  __int64 result; // rax
  __int64 v15; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v16; // [rsp+30h] [rbp+8h] BYREF

  v5 = a2;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 23);
  if ( !v5 )
    goto LABEL_24;
  v10 = *v9;
  if ( *v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v9 )
    goto LABEL_24;
  a2 = v5 + 1;
  while ( v10 != a2 )
  {
    if ( v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v10 )
      goto LABEL_24;
    v10 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v10->Id;
  }
  a2 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE *const *)&v5[1].VideoSignalInfo.TotalSize.cy;
  v9 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)(this + 20);
  if ( !a2
    || (v11 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v9, *v9 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v9) )
  {
LABEL_24:
    v15 = WdLogNewEntry5_WdError(v9, a2);
    *(_QWORD *)(v15 + 24) = v5;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
    return 3223192368LL;
  }
  else
  {
    v12 = a2 + 1;
    while ( v11 != (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v12 )
    {
      if ( v9 == v11 )
        goto LABEL_24;
      v11 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v11;
    }
    v13 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE ***)&a2[1].Id;
    if ( v13 == v9 )
      goto LABEL_23;
    a2 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE *const)(v13 - 12);
    if ( !v13 )
      a2 = 0LL;
    if ( !a2 )
    {
LABEL_23:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, a2, v12, a4) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      result = DXGMONITOR::_CreateMonitorModeEnumerator(
                 this,
                 (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)a2,
                 &v16,
                 a4);
      if ( (int)result >= 0 )
        *a3 = v16;
    }
  }
  return result;
}
