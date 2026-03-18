/*
 * XREFs of DxgkNotifyDisplayChange @ 0x1C01B1564
 * Callers:
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00A68C0 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkNotifyDisplayChange(__int64 a1)
{
  char v1; // bl
  struct DXGPROCESS *Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  void (__fastcall *v5)(__int64); // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v1 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
    Current = (struct DXGPROCESS *)*((_QWORD *)Current + 9);
  if ( Current && (v5 = (void (__fastcall *)(__int64))*((_QWORD *)Current + 48)) != 0LL )
  {
    LOBYTE(v4) = v1;
    v5(v4);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v7 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v9, v8, v10, v11);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
