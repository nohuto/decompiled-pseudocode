/*
 * XREFs of ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000D69C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     DxgkGetPathsModality @ 0x1C00DF950 (DxgkGetPathsModality.c)
 * Callees:
 *     DxgkStatusChangeNotify @ 0x1C00E85B0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = *a1;
  v5 = a2;
  result = DxgkStatusChangeNotify(&v5);
  if ( (int)result < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v4 + 24) = 1343LL;
    return WdLogEvent5_WdAssertion(v4);
  }
  return result;
}
