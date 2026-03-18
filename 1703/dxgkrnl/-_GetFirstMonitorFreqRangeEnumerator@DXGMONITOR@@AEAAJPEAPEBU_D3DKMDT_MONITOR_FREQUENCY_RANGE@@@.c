/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01E7FA8
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01E4560 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  DXGMONITOR *v9; // rcx
  _OWORD *v10; // rbx
  __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v14; // rcx
  __int64 v15; // rax
  char *v16; // rdi
  __int128 v17; // xmm0
  char **v18; // rdx
  char *v19; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)this + 50) )
  {
    v7 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdDmmEvent(v7);
    return 1075708747LL;
  }
  v9 = (DXGMONITOR *)*((_QWORD *)this + 26);
  if ( v9 == (DXGMONITOR *)((char *)this + 208) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (_OWORD *)((char *)v9 - 48);
    if ( !v9 )
      v10 = 0LL;
    if ( v10 )
      goto LABEL_11;
  }
  v11 = WdLogNewEntry5_WdAssertion(v9, a2, a3, a4);
  WdLogEvent5_WdAssertion(v11);
LABEL_11:
  v12 = (char *)operator new(0x48uLL, 0x4D677844u, PagedPool);
  v14 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v12;
  if ( v12 )
  {
    v16 = (char *)this + 224;
    *(_OWORD *)v12 = *v10;
    *((_OWORD *)v12 + 1) = v10[1];
    v17 = v10[2];
    *((_QWORD *)v12 + 8) = v10;
    *((_OWORD *)v12 + 2) = v17;
    v18 = (char **)*((_QWORD *)v16 + 1);
    v19 = v12 + 48;
    if ( *v18 != v16 )
      __fastfail(3u);
    *(_QWORD *)v19 = v16;
    *((_QWORD *)v19 + 1) = v18;
    *v18 = v19;
    *((_QWORD *)v16 + 1) = v19;
    result = 0LL;
    *a2 = v14;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(0LL, v13);
    WdLogEvent5_WdError(v15);
    return 3221225495LL;
  }
  return result;
}
