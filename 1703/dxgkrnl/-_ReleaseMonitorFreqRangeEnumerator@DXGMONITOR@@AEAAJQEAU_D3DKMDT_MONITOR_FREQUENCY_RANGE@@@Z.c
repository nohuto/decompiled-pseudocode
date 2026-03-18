/*
 * XREFs of ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01E837C
 * Callers:
 *     ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01E5820 (-ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        __int64 a3,
        __int64 a4)
{
  DXGMONITOR *v5; // rdi
  __int64 v6; // rax
  DXGMONITOR **v7; // rdx
  DXGMONITOR *v8; // rax
  __int64 v9; // r8
  DXGMONITOR **v10; // rax
  DXGMONITOR **v11; // r8
  DXGMONITOR *v12; // rdx
  DXGMONITOR **v13; // rax
  __int64 v15; // rax

  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (DXGMONITOR **)((char *)v5 + 224);
  if ( !a2 )
    goto LABEL_19;
  v8 = *v7;
  if ( *v7 == (DXGMONITOR *)v7 )
    goto LABEL_19;
  this = (DXGMONITOR *)&a2[1];
  while ( v8 != this )
  {
    if ( v7 == (DXGMONITOR **)v8 )
      goto LABEL_19;
    v8 = *(DXGMONITOR **)v8;
  }
  v9 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v7 = (DXGMONITOR **)((char *)v5 + 208);
  if ( !v9 || (v10 = (DXGMONITOR **)*v7, *v7 == (DXGMONITOR *)v7) )
  {
LABEL_19:
    v15 = WdLogNewEntry5_WdError(this, v7);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = v5;
    WdLogEvent5_WdError(v15);
    return 3223192368LL;
  }
  else
  {
    v11 = (DXGMONITOR **)(v9 + 48);
    while ( v10 != v11 )
    {
      if ( v7 == v10 )
        goto LABEL_19;
      v10 = (DXGMONITOR **)*v10;
    }
    v12 = *(DXGMONITOR **)this;
    v13 = *(DXGMONITOR ***)&a2[1].RangeLimits.MinVSyncFreq.Denominator;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this || *v13 != this )
      __fastfail(3u);
    *v13 = v12;
    *((_QWORD *)v12 + 1) = v13;
    ExFreePoolWithTag(a2, 0);
    return 0LL;
  }
}
