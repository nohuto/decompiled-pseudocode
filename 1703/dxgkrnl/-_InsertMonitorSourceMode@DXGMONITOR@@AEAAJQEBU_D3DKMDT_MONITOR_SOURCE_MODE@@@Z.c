/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C010850C
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0105F70 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CE28 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        char ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  DXGMONITOR *v10; // rsi
  DXGMONITOR *v11; // rcx
  char *v12; // rax
  __int64 Id; // rdx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char **v19; // rdi
  __int128 v20; // xmm1
  char *v21; // rax
  char **v22; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v25);
  }
  v6 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo((unsigned __int64)&a2->VideoSignalInfo, (__int64)a2);
  v9 = v6;
  if ( v6 < 0 )
  {
    v26 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v26 + 24) = a2;
    *(_QWORD *)(v26 + 32) = v9;
    WdLogEvent5_WdError(v26);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v27 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v27 + 24) = a2;
    WdLogEvent5_WdError(v27);
    return 3223192330LL;
  }
  v10 = (DXGMONITOR *)(this + 20);
  v11 = (DXGMONITOR *)this[20];
  if ( v11 == (DXGMONITOR *)(this + 20) )
    goto LABEL_15;
  v12 = (char *)v11 - 96;
  if ( !v11 )
    v12 = 0LL;
  if ( !v12 )
  {
LABEL_15:
    v14 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
    v19 = (char **)v14;
    if ( !v14 )
    {
      v29 = WdLogNewEntry5_WdError(v16, v15);
      WdLogEvent5_WdError(v29);
      return 3221225495LL;
    }
    *(_OWORD *)v14 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v14 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v14 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v14 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v14 + 4) = *(_OWORD *)&a2->ColorBasis;
    v20 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v14 + 28) = 6;
    *((_OWORD *)v14 + 5) = v20;
    *((_DWORD *)v14 + 21) = 5;
    v21 = v14 + 96;
    ++*((_DWORD *)this + 38);
    v22 = this[21];
    if ( *v22 != (char *)v10 )
      __fastfail(3u);
    *(_QWORD *)v21 = v10;
    *((_QWORD *)v21 + 1) = v22;
    *v22 = v21;
    this[21] = (char **)v21;
    if ( *((_DWORD *)v19 + 22) == 1 )
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v22, v15, v17, v18);
      *(_QWORD *)(v24 + 24) = v19;
      WdLogEvent5_WdDmmEvent(v24);
      this[22] = v19;
    }
    return 0LL;
  }
  Id = a2->Id;
  while ( (_DWORD)Id != *(_DWORD *)v12 )
  {
    v11 = (DXGMONITOR *)*((_QWORD *)v12 + 12);
    if ( v11 != v10 )
    {
      v12 = (char *)v11 - 96;
      if ( !v11 )
        v12 = 0LL;
      if ( v12 )
        continue;
    }
    goto LABEL_15;
  }
  v28 = WdLogNewEntry5_WdError(v11, Id);
  *(_QWORD *)(v28 + 24) = a2;
  *(_QWORD *)(v28 + 32) = a2->Id;
  WdLogEvent5_WdError(v28);
  return 3223192340LL;
}
