/*
 * XREFs of ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C0211DD4
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x1C0211EE8 (-DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0044230 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 */

__int64 __fastcall DmmCacheDisplayModeChangeRequest(DXGADAPTER *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcess; // rax
  __int128 *ProcessImageFileName; // rax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v8);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_QWORD *)a1 + 307);
  if ( !v12 )
  {
    v8 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v8 + 24) = a1;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, *(_QWORD *)(v12 + 88));
    CurrentProcess = PsGetCurrentProcess(v16, v15);
    ProcessImageFileName = (__int128 *)PsGetProcessImageFileName(CurrentProcess);
    VIDPN_MGR::CacheDisplayModeChangeRequest(
      v13,
      a2,
      a3,
      2,
      a5,
      3,
      *(_DWORD *)(*((_QWORD *)a1 + 307) + 240LL),
      ProcessImageFileName);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
    return 0LL;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3223192373LL;
  }
}
