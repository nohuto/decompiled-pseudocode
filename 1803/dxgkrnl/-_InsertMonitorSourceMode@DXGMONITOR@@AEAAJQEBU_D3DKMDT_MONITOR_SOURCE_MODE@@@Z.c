/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C023A7D4
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0230690 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00070F8 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        char ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  DXGMONITOR *v11; // rsi
  DXGMONITOR *v12; // rcx
  char *v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  char **v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int128 v19; // xmm1
  char *v20; // rax
  char **v21; // rcx
  __int64 v22; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo((unsigned __int64)&a2->VideoSignalInfo);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = v7;
    WdLogEvent5_WdError(v8);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdError(v9);
    return 3223192330LL;
  }
  v11 = (DXGMONITOR *)(this + 27);
  v12 = (DXGMONITOR *)this[27];
  if ( v12 == (DXGMONITOR *)(this + 27) )
    goto LABEL_16;
  v13 = (char *)v12 - 96;
  if ( !v12 )
    v13 = 0LL;
  if ( !v13 )
  {
LABEL_16:
    v14 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    v16 = (char **)v14;
    if ( !v14 )
    {
      v17 = WdLogNewEntry5_WdError(v15);
      WdLogEvent5_WdError(v17);
      return 3221225495LL;
    }
    *(_OWORD *)v14 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v14 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v14 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v14 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v14 + 4) = *(_OWORD *)&a2->ColorBasis;
    v19 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v14 + 28) = 6;
    *((_OWORD *)v14 + 5) = v19;
    *((_DWORD *)v14 + 21) = 5;
    v20 = v14 + 96;
    ++*((_DWORD *)this + 52);
    v21 = this[28];
    if ( *v21 != (char *)v11 )
      __fastfail(3u);
    *(_QWORD *)v20 = v11;
    *((_QWORD *)v20 + 1) = v21;
    *v21 = v20;
    this[28] = (char **)v20;
    if ( *((_DWORD *)v16 + 22) == 1 )
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v21);
      *(_QWORD *)(v22 + 24) = v16;
      WdLogEvent5_WdDmmEvent(v22);
      this[29] = v16;
    }
    return 0LL;
  }
  while ( a2->Id != *(_DWORD *)v13 )
  {
    v12 = (DXGMONITOR *)*((_QWORD *)v13 + 12);
    if ( v12 != v11 )
    {
      v13 = (char *)v12 - 96;
      if ( !v12 )
        v13 = 0LL;
      if ( v13 )
        continue;
    }
    goto LABEL_16;
  }
  v18 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v18 + 24) = a2;
  *(_QWORD *)(v18 + 32) = a2->Id;
  WdLogEvent5_WdError(v18);
  return 3223192340LL;
}
