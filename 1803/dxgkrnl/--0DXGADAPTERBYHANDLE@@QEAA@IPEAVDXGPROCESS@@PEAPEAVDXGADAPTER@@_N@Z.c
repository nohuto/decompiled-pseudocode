/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C009AB00 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z @ 0x1C00A1870 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@HPEAX@Z.c)
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 *     ?DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C00A8B9C (-DxgkCreateDeviceImpl@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_G.c)
 *     DxgkGetDisplayModeList @ 0x1C00AD370 (DxgkGetDisplayModeList.c)
 *     DxgkFlushHeapTransitions @ 0x1C00ADFC0 (DxgkFlushHeapTransitions.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00CF230 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C00CF4F0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C00D73A0 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00D8A80 (DxgkGetPostCompositionCaps.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00D9750 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00DC300 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00DD2E0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkGetPresentHistory @ 0x1C00DF2D0 (DxgkGetPresentHistory.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkGetPresentStats @ 0x1C0108C30 (DxgkGetPresentStats.c)
 *     DxgkGetScanLine @ 0x1C010BDD0 (DxgkGetScanLine.c)
 *     ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0164E84 (-DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C0165270 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0166404 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C0166D70 (DxgkAdjustFullscreenGamma.c)
 *     DxgkFlushPresentHistory @ 0x1C01672D0 (DxgkFlushPresentHistory.c)
 *     DxgkQueryClockCalibration @ 0x1C0168630 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C01692E0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C0169730 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C016BBEC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F4F0 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C0194600 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C0194B00 (DxgkInvalidateActiveVidPn.c)
 *     DxgkSetStablePowerState @ 0x1C01B9C10 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01CC308 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C01CC530 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4)
{
  DXGPUSHLOCK *v8; // rbx
  __int64 v9; // rbx
  struct _KTHREAD *v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  volatile signed __int64 *v13; // rbx
  __int64 v15; // rax
  struct _KTHREAD *v16; // rsi
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rbx
  _BYTE v20[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+30h] [rbp-28h]

  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    v8 = (DXGPUSHLOCK *)(a3 + 26);
    v21 = (char *)(a3 + 26);
    if ( a3 != (struct _KTHREAD **)-208LL && a3[27] == KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v15 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGPUSHLOCK::AcquireShared(v8);
    v22 = 1;
    v9 = (a2 >> 6) & 0xFFFFFF;
    if ( (*((_BYTE *)a3 + 323) & 8) != 0 )
    {
      v16 = a3[57];
      DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)v16 + 208));
      if ( (unsigned int)v9 < *((_DWORD *)v16 + 62)
        && (v17 = *((_QWORD *)v16 + 29),
            v18 = *(_DWORD *)(v17 + 16 * v9 + 8),
            ((a2 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16 * v9 + 8) & 0x60))
        && (v18 & 0x2000) == 0
        && (v18 & 0x1F) != 0
        && (v19 = 2 * v9, (v18 & 0x1F) == 1) )
      {
        v13 = *(volatile signed __int64 **)(v17 + 8 * v19);
      }
      else
      {
        v13 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)v16 + 208, 0LL);
      KeLeaveCriticalRegion();
    }
    else if ( (unsigned int)v9 < *((_DWORD *)a3 + 62)
           && (v10 = a3[29],
               v11 = *((_DWORD *)v10 + 4 * (unsigned int)v9 + 2),
               ((a2 >> 25) & 0x60) == (*((_BYTE *)v10 + 16 * (unsigned int)v9 + 8) & 0x60))
           && (v11 & 0x2000) == 0
           && (v11 & 0x1F) != 0
           && (v12 = 2 * v9, (v11 & 0x1F) == 1) )
    {
      v13 = (volatile signed __int64 *)*((_QWORD *)v10 + v12);
    }
    else
    {
      v13 = 0LL;
    }
    *(_QWORD *)this = v13;
    if ( v13 )
    {
      _InterlockedIncrement64(v13 + 3);
      *((_QWORD *)this + 1) = -1LL;
      v13 = *(volatile signed __int64 **)this;
    }
    *a4 = (struct DXGADAPTER *)v13;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
  return this;
}
