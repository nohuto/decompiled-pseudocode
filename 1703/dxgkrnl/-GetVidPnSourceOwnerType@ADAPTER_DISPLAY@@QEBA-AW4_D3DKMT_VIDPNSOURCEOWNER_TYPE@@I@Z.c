/*
 * XREFs of ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000B47C
 * Callers:
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C008ACA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00989F4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkIsVidPnSourceOwnerExclusive @ 0x1C00A6220 (DxgkIsVidPnSourceOwnerExclusive.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E2528 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAU_D3DKMT_VIDPN_SOURCE.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00E763C (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017B6D0 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C017B820 (DxgkAdjustFullscreenGamma.c)
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C01AD3A4 (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerType(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // rax

  v3 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = 4911LL;
    WdLogEvent5_WdAssertion(v9);
  }
  return *((unsigned int *)this[14] + 802 * v3 + 174);
}
