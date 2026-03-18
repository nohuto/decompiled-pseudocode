/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010B388
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0108330 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000B6A4 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        char ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  DXGMONITOR *v7; // rsi
  DXGMONITOR *v8; // rcx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  char **v12; // rdi
  __int128 v13; // xmm1
  char *v14; // rax
  char **v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v18);
  }
  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo((unsigned __int64)&a2->VideoSignalInfo);
  v6 = v4;
  if ( v4 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v19 + 24) = a2;
    *(_QWORD *)(v19 + 32) = v6;
    WdLogEvent5_WdError(v19);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v20 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v20 + 24) = a2;
    WdLogEvent5_WdError(v20);
    return 3223192330LL;
  }
  v7 = (DXGMONITOR *)(this + 25);
  v8 = (DXGMONITOR *)this[25];
  if ( v8 == (DXGMONITOR *)(this + 25) )
    goto LABEL_14;
  v9 = (char *)v8 - 96;
  if ( !v8 )
    v9 = 0LL;
  if ( !v9 )
  {
LABEL_14:
    v10 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
    v12 = (char **)v10;
    if ( !v10 )
    {
      v22 = WdLogNewEntry5_WdError(v11);
      WdLogEvent5_WdError(v22);
      return 3221225495LL;
    }
    *(_OWORD *)v10 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v10 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v10 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v10 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v10 + 4) = *(_OWORD *)&a2->ColorBasis;
    v13 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v10 + 28) = 6;
    *((_OWORD *)v10 + 5) = v13;
    *((_DWORD *)v10 + 21) = 5;
    v14 = v10 + 96;
    ++*((_DWORD *)this + 48);
    v15 = this[26];
    if ( *v15 != (char *)v7 )
      __fastfail(3u);
    *(_QWORD *)v14 = v7;
    *((_QWORD *)v14 + 1) = v15;
    *v15 = v14;
    this[26] = (char **)v14;
    if ( *((_DWORD *)v12 + 22) == 1 )
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v15);
      *(_QWORD *)(v17 + 24) = v12;
      WdLogEvent5_WdDmmEvent(v17);
      this[27] = v12;
    }
    return 0LL;
  }
  while ( a2->Id != *(_DWORD *)v9 )
  {
    v8 = (DXGMONITOR *)*((_QWORD *)v9 + 12);
    if ( v8 != v7 )
    {
      v9 = (char *)v8 - 96;
      if ( !v8 )
        v9 = 0LL;
      if ( v9 )
        continue;
    }
    goto LABEL_14;
  }
  v21 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v21 + 24) = a2;
  *(_QWORD *)(v21 + 32) = a2->Id;
  WdLogEvent5_WdError(v21);
  return 3223192340LL;
}
