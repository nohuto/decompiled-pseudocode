/*
 * XREFs of ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1C00F8BC8
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x1C01EB6C0 (-DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0006B90 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmCacheDisplayModeChangeRequest(DXGADAPTER *a1, unsigned int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 0LL;
LABEL_9:
    WdLogEvent5_WdError(v16);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v17);
  }
  v9 = *((_QWORD *)a1 + 288);
  if ( !v9 )
  {
    v16 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v16 + 24) = a1;
    goto LABEL_9;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, *(_QWORD *)(v9 + 88));
    CurrentProcess = PsGetCurrentProcess(v12, v11);
    ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
    VIDPN_MGR::CacheDisplayModeChangeRequest(
      v10,
      a2,
      a3,
      2u,
      a5,
      3,
      *(_DWORD *)(*((_QWORD *)a1 + 288) + 240LL),
      ProcessImageFileName);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
    return 0LL;
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    return 3223192373LL;
  }
}
