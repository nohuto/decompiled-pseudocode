/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0239F34
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C022F880 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  DXGMONITOR *v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // rax
  char *v10; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v11; // rcx
  __int64 v12; // rax
  char *v13; // rdi
  __int128 v14; // xmm0
  char **v15; // rdx
  char *v16; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 64) )
  {
    v5 = WdLogNewEntry5_WdDmmEvent(this);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdDmmEvent(v5);
    return 1075708747LL;
  }
  v7 = (DXGMONITOR *)*((_QWORD *)this + 33);
  if ( v7 == (DXGMONITOR *)((char *)this + 264) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (_OWORD *)((char *)v7 - 48);
    if ( !v7 )
      v8 = 0LL;
    if ( v8 )
      goto LABEL_11;
  }
  v9 = WdLogNewEntry5_WdAssertion(v7);
  WdLogEvent5_WdAssertion(v9);
LABEL_11:
  v10 = (char *)operator new[](0x48uLL, 0x4D677844u, PagedPool);
  v11 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v10;
  if ( v10 )
  {
    v13 = (char *)this + 280;
    *(_OWORD *)v10 = *v8;
    *((_OWORD *)v10 + 1) = v8[1];
    v14 = v8[2];
    *((_QWORD *)v10 + 8) = v8;
    *((_OWORD *)v10 + 2) = v14;
    v15 = (char **)*((_QWORD *)v13 + 1);
    v16 = v10 + 48;
    if ( *v15 != v13 )
      __fastfail(3u);
    *(_QWORD *)v16 = v13;
    *((_QWORD *)v16 + 1) = v15;
    *v15 = v16;
    *((_QWORD *)v13 + 1) = v16;
    result = 0LL;
    *a2 = v11;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v12);
    return 3221225495LL;
  }
  return result;
}
