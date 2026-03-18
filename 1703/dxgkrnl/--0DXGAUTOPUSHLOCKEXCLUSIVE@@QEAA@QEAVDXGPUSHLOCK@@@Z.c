/*
 * XREFs of ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C
 * Callers:
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0004EEC (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C0005078 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C0005134 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0005180 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C002587C (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@@Z @ 0x1C003BDB8 (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0098158 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z @ 0x1C00989F4 (-SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAXPEAVDXGDEVICE@@I@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C00BFC10 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C00BFCA0 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C00BFD10 (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00C06F0 (-IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00C07C0 (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C00C1C98 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6@Z @ 0x1C00C44B0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00C91A8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C00CA450 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     DxgkDestroyDevice @ 0x1C00FBB20 (DxgkDestroyDevice.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C0101280 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0104B14 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01812F0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01873E8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x1C0187440 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0187488 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0187C60 (-InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0187E6C (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C01888D0 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C0188A18 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0188ABC (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0188E3C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C0189578 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 *     DxgkWaitForIdle @ 0x1C018C7E0 (DxgkWaitForIdle.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

DXGAUTOPUSHLOCKEXCLUSIVE *__fastcall DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        DXGAUTOPUSHLOCKEXCLUSIVE *this,
        struct _KTHREAD **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGAUTOPUSHLOCKEXCLUSIVE *result; // rax
  __int64 v9; // rax
  __int64 v10; // r9

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = a2;
  if ( a2 && a2[1] == KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 1167LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v5 = *((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v5, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v10 = *(unsigned int *)(v5 + 16);
      if ( (_DWORD)v10 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v6, &EventBlockThread, v7, v10);
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
