/*
 * XREFs of ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4
 * Callers:
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000B680 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0098B40 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z @ 0x1C00E78D4 (-ReleaseVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAEPEAVDXGDEVICE@@I@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0102280 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C016B4B8 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 *     ?SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C01730FC (-SetQueuedPresentLimit@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C017E0B0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetGammaRamp @ 0x1C018BE70 (DxgkSetGammaRamp.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z @ 0x1C01B7DCC (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHI@Z.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01BAA50 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01BB110 (DxgkPresentMultiPlaneOverlay2.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C01BB650 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwner(DXGADAPTER **this, const struct DXGDEVICE *a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool result; // al
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 4858LL;
    WdLogEvent5_WdAssertion(v11);
  }
  result = ((unsigned int)v4 < *((_DWORD *)this + 20)
         || (v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9),
             *(_QWORD *)(v12 + 24) = 4859LL,
             WdLogEvent5_WdAssertion(v12),
             (unsigned int)v4 < *((_DWORD *)this + 20)))
        && a2 == *((const struct DXGDEVICE **)this[14] + 401 * v4 + 86);
  return result;
}
