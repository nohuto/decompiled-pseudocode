/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C023A4B0
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C022FF90 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3,
        __int64 a4)
{
  DXGMONITOR *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  DXGMONITOR **v9; // rbx
  DXGMONITOR *v10; // rax
  __int64 v11; // rdx
  DXGMONITOR *v12; // rax
  DXGMONITOR *v13; // r8
  DXGMONITOR *v14; // rax
  _OWORD *v15; // rdi
  char *v16; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  __int128 v20; // xmm0
  DXGMONITOR ***v21; // rdx
  DXGMONITOR ***v22; // rax
  __int64 v23; // rax

  v6 = this;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (DXGMONITOR **)((char *)v6 + 280);
  if ( !a2 )
    goto LABEL_27;
  v10 = *v9;
  if ( *v9 == (DXGMONITOR *)v9 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v10 != this )
  {
    if ( v9 == (DXGMONITOR **)v10 )
      goto LABEL_27;
    v10 = *(DXGMONITOR **)v10;
  }
  v11 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  this = (DXGMONITOR *)((char *)v6 + 264);
  if ( !v11 || (v12 = *(DXGMONITOR **)this, *(DXGMONITOR **)this == this) )
  {
LABEL_27:
    v23 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v6;
    WdLogEvent5_WdError(v23);
    return 3223192368LL;
  }
  else
  {
    v13 = (DXGMONITOR *)(v11 + 48);
    while ( v12 != v13 )
    {
      if ( this == v12 )
        goto LABEL_27;
      v12 = *(DXGMONITOR **)v12;
    }
    v14 = *(DXGMONITOR **)(v11 + 48);
    if ( v14 == this )
      goto LABEL_26;
    v15 = (_OWORD *)((char *)v14 - 48);
    if ( !v14 )
      v15 = 0LL;
    if ( !v15 )
    {
LABEL_26:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, v11, v13, a4) + 24) = v6;
      return 1075708748LL;
    }
    else
    {
      v16 = (char *)operator new[](0x48uLL, 0x4D677844u, PagedPool);
      v17 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v16;
      if ( v16 )
      {
        *(_OWORD *)v16 = *v15;
        *((_OWORD *)v16 + 1) = v15[1];
        v20 = v15[2];
        *((_QWORD *)v16 + 8) = v15;
        *((_OWORD *)v16 + 2) = v20;
        v21 = (DXGMONITOR ***)*((_QWORD *)v6 + 36);
        v22 = (DXGMONITOR ***)(v16 + 48);
        if ( *v21 != v9 )
          __fastfail(3u);
        *v22 = v9;
        v22[1] = (DXGMONITOR **)v21;
        *v21 = (DXGMONITOR **)v22;
        *((_QWORD *)v6 + 36) = v22;
        result = 0LL;
        *a3 = v17;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(0LL);
        WdLogEvent5_WdError(v18);
        return 3221225495LL;
      }
    }
  }
  return result;
}
