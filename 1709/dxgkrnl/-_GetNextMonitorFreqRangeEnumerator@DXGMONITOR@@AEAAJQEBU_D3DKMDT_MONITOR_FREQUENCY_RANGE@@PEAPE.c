/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C0202A74
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C01FF290 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  DXGMONITOR *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  DXGMONITOR **v8; // rbx
  DXGMONITOR *v9; // rax
  __int64 v10; // rdx
  DXGMONITOR *v11; // rax
  DXGMONITOR *v12; // rax
  _OWORD *v13; // rdi
  char *v14; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v15; // rcx
  __int64 v16; // rax
  __int64 result; // rax
  __int128 v18; // xmm0
  DXGMONITOR ***v19; // rdx
  DXGMONITOR ***v20; // rax
  __int64 v21; // rax

  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (DXGMONITOR **)((char *)v5 + 264);
  if ( !a2 )
    goto LABEL_27;
  v9 = *v8;
  if ( *v8 == (DXGMONITOR *)v8 )
    goto LABEL_27;
  this = (DXGMONITOR *)&a2[1];
  while ( v9 != this )
  {
    if ( v8 == (DXGMONITOR **)v9 )
      goto LABEL_27;
    v9 = *(DXGMONITOR **)v9;
  }
  v10 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  this = (DXGMONITOR *)((char *)v5 + 248);
  if ( !v10 || (v11 = *(DXGMONITOR **)this, *(DXGMONITOR **)this == this) )
  {
LABEL_27:
    v21 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = v5;
    WdLogEvent5_WdError(v21);
    return 3223192368LL;
  }
  else
  {
    while ( v11 != (DXGMONITOR *)(v10 + 48) )
    {
      if ( this == v11 )
        goto LABEL_27;
      v11 = *(DXGMONITOR **)v11;
    }
    v12 = *(DXGMONITOR **)(v10 + 48);
    if ( v12 == this )
      goto LABEL_26;
    v13 = (_OWORD *)((char *)v12 - 48);
    if ( !v12 )
      v13 = 0LL;
    if ( !v13 )
    {
LABEL_26:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, v10) + 24) = v5;
      return 1075708748LL;
    }
    else
    {
      v14 = (char *)operator new(0x48uLL, 0x4D677844u, PagedPool);
      v15 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v14;
      if ( v14 )
      {
        *(_OWORD *)v14 = *v13;
        *((_OWORD *)v14 + 1) = v13[1];
        v18 = v13[2];
        *((_QWORD *)v14 + 8) = v13;
        *((_OWORD *)v14 + 2) = v18;
        v19 = (DXGMONITOR ***)*((_QWORD *)v5 + 34);
        v20 = (DXGMONITOR ***)(v14 + 48);
        if ( *v19 != v8 )
          __fastfail(3u);
        *v20 = v8;
        v20[1] = (DXGMONITOR **)v19;
        *v19 = (DXGMONITOR **)v20;
        *((_QWORD *)v5 + 34) = v20;
        result = 0LL;
        *a3 = v15;
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(0LL);
        WdLogEvent5_WdError(v16);
        return 3221225495LL;
      }
    }
  }
  return result;
}
