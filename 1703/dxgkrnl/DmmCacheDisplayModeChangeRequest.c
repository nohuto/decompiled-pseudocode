/*
 * XREFs of DmmCacheDisplayModeChangeRequest @ 0x1C00A5A38
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DmmCacheInvalidDisplayModeChangeRequest @ 0x1C01D49FC (DmmCacheInvalidDisplayModeChangeRequest.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C000AB08 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 */

__int64 __fastcall DmmCacheDisplayModeChangeRequest(DXGADAPTER *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 CurrentProcess; // rax
  __int128 *ProcessImageFileName; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = a2;
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v20 + 24) = 0LL;
LABEL_9:
    WdLogEvent5_WdError(v20);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v21);
  }
  v12 = *((_QWORD *)a1 + 285);
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_9;
  }
  v13 = *(_QWORD *)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, *(_QWORD *)(v12 + 88), v10, v11);
    CurrentProcess = PsGetCurrentProcess();
    ProcessImageFileName = (__int128 *)PsGetProcessImageFileName(CurrentProcess);
    VIDPN_MGR::CacheDisplayModeChangeRequest(
      v13,
      v6,
      a3,
      2,
      a5,
      3,
      *(_DWORD *)(*((_QWORD *)a1 + 285) + 240LL),
      ProcessImageFileName);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v23 + 40), v16, v17, v18);
    return 0LL;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3223192373LL;
  }
}
