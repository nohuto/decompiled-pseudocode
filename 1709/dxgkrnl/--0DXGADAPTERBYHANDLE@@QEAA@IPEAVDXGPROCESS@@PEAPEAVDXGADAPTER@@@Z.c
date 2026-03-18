/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C007CCE0 (DxgkQueryVideoMemoryInfo.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00A2270 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00B5930 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00B6A20 (DxgkGetDisplayModeList.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00B7D40 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkFlushHeapTransitions @ 0x1C00B7E60 (DxgkFlushHeapTransitions.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C00B9050 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00B9400 (DxgkGetPostCompositionCaps.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00BC110 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkGetPresentHistory @ 0x1C00EB0A0 (DxgkGetPresentHistory.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00ED3A0 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C00ED650 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00F6EE0 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkFlushPresentHistory @ 0x1C00F8EC0 (DxgkFlushPresentHistory.c)
 *     DxgkGetScanLine @ 0x1C00FDDF0 (DxgkGetScanLine.c)
 *     DxgkGetPresentStats @ 0x1C00FF010 (DxgkGetPresentStats.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017E3A0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017EDA8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C017F700 (DxgkAdjustFullscreenGamma.c)
 *     DxgkQueryClockCalibration @ 0x1C0180C70 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C0181710 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C0181B20 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C01839B0 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193390 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkGetMultisampleMethodList @ 0x1C01A3C30 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C01A4110 (DxgkInvalidateActiveVidPn.c)
 *     DxgkSetStablePowerState @ 0x1C01BB230 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01C8FD8 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C01C9200 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4)
{
  DXGPUSHLOCK *v8; // rbx
  bool v9; // zf
  __int64 v10; // rax
  struct _KTHREAD *v11; // rdx
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v15; // rax
  struct _KTHREAD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  _BYTE v20[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v21; // [rsp+28h] [rbp-20h]
  int v22; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  if ( a4 )
  {
    v8 = (DXGPUSHLOCK *)(a3 + 25);
    v21 = (char *)(a3 + 25);
    if ( a3 != (struct _KTHREAD **)-200LL && a3[26] == KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v15 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGPUSHLOCK::AcquireShared(v8);
    v9 = (*((_BYTE *)a3 + 307) & 8) == 0;
    v22 = 1;
    if ( v9 )
    {
      v10 = (a2 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v10 < *((_DWORD *)a3 + 60)
        && (v11 = a3[28],
            v12 = *((_DWORD *)v11 + 4 * v10 + 2),
            ((a2 >> 25) & 0x60) == (*((_BYTE *)v11 + 16 * v10 + 8) & 0x60))
        && (v12 & 0x2000) == 0
        && (v12 & 0x1F) != 0
        && (*((_BYTE *)v11 + 16 * (unsigned int)v10 + 8) & 0x1F) == 1 )
      {
        v13 = *((_QWORD *)v11 + 2 * (unsigned int)v10);
      }
      else
      {
        v13 = 0LL;
      }
    }
    else
    {
      DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)a3[55] + 200));
      v16 = a3[55];
      v17 = (a2 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 < *((_DWORD *)v16 + 60)
        && (v18 = *((_QWORD *)v16 + 28),
            v19 = *(_DWORD *)(v18 + 16 * v17 + 8),
            ((a2 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60))
        && (v19 & 0x2000) == 0
        && (v19 & 0x1F) != 0
        && (*(_BYTE *)(v18 + 16LL * (unsigned int)v17 + 8) & 0x1F) == 1 )
      {
        v13 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
      }
      else
      {
        v13 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)v16 + 200, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)this = v13;
    if ( v13 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v13 + 24));
      *((_QWORD *)this + 1) = -1LL;
    }
    *a4 = *(struct DXGADAPTER **)this;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  }
  return this;
}
