/*
 * XREFs of ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8
 * Callers:
 *     ?VmBusFlushAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D590 (-VmBusFlushAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkQueryVideoMemoryInfo @ 0x1C008AD40 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkGetPresentHistory @ 0x1C0092280 (DxgkGetPresentHistory.c)
 *     DxgkCheckMonitorPowerState @ 0x1C0093320 (DxgkCheckMonitorPowerState.c)
 *     DxgkCheckVidPnExclusiveOwnership @ 0x1C00935D0 (DxgkCheckVidPnExclusiveOwnership.c)
 *     DxgkGetDisplayModeList @ 0x1C00993A0 (DxgkGetDisplayModeList.c)
 *     DxgkGetMultiPlaneOverlayCaps @ 0x1C009FB60 (DxgkGetMultiPlaneOverlayCaps.c)
 *     DxgkGetPostCompositionCaps @ 0x1C00A00F0 (DxgkGetPostCompositionCaps.c)
 *     DxgkFlushHeapTransitions @ 0x1C00A06E0 (DxgkFlushHeapTransitions.c)
 *     DxgkGetPresentHistoryReadyEvent @ 0x1C00A0820 (DxgkGetPresentHistoryReadyEvent.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1C00A36F0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1C00A48A0 (DxgkFreeGpuVirtualAddress.c)
 *     DxgkFlushPresentHistory @ 0x1C00A5E80 (DxgkFlushPresentHistory.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00F6E18 (-DxgkCreateDeviceInternal@@YAJPEAU_D3DKMT_CREATEDEVICE@@PEAUDXGK_VIRTUAL_GPU@@@Z.c)
 *     ?DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00FC810 (-DxgkCreateSynchronizationObjectInternal@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@H@Z.c)
 *     ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017A9C0 (-DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AFF8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C017B820 (DxgkAdjustFullscreenGamma.c)
 *     DxgkGetScanLine @ 0x1C017BCF0 (DxgkGetScanLine.c)
 *     DxgkQueryClockCalibration @ 0x1C017D2A0 (DxgkQueryClockCalibration.c)
 *     DxgkSetDodIndirectSwapchain @ 0x1C017E0B0 (DxgkSetDodIndirectSwapchain.c)
 *     DxgkSetVidPnSourceHwProtection @ 0x1C017E4C0 (DxgkSetVidPnSourceHwProtection.c)
 *     DxgkChangeVideoMemoryReservation @ 0x1C017F8F0 (DxgkChangeVideoMemoryReservation.c)
 *     DxgkGetMultisampleMethodList @ 0x1C018F3F0 (DxgkGetMultisampleMethodList.c)
 *     DxgkInvalidateActiveVidPn @ 0x1C018F8F0 (DxgkInvalidateActiveVidPn.c)
 *     DxgkGetPresentStats @ 0x1C01A1060 (DxgkGetPresentStats.c)
 *     DxgkSetStablePowerState @ 0x1C01A32E0 (DxgkSetStablePowerState.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01AF22C (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 *     DxgkCreateOutputDupl @ 0x1C01AF450 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

DXGADAPTERBYHANDLE *__fastcall DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
        DXGADAPTERBYHANDLE *this,
        __int64 a2,
        struct _KTHREAD **a3,
        struct DXGADAPTER **a4)
{
  unsigned int v6; // edi
  DXGPUSHLOCK *v8; // rbx
  bool v9; // zf
  unsigned int v10; // ecx
  struct _KTHREAD *v11; // r8
  int v12; // edx
  __int64 v13; // rbx
  __int64 v15; // rax
  struct _KTHREAD *v16; // r9
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // edx
  _BYTE v20[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v21; // [rsp+28h] [rbp-20h]
  int v22; // [rsp+30h] [rbp-18h]

  *(_QWORD *)this = 0LL;
  v6 = a2;
  if ( a4 )
  {
    v8 = (DXGPUSHLOCK *)(a3 + 21);
    v21 = (char *)(a3 + 21);
    if ( a3 != (struct _KTHREAD **)-168LL && a3[22] == KeGetCurrentThread() )
    {
      v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      *(_QWORD *)(v15 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGPUSHLOCK::AcquireShared(v8);
    v9 = (*((_BYTE *)a3 + 275) & 4) == 0;
    v22 = 1;
    if ( v9 )
    {
      v10 = (v6 >> 6) & 0xFFFFFF;
      if ( v10 < *((_DWORD *)a3 + 52)
        && (v11 = a3[24],
            v12 = *((_DWORD *)v11 + 4 * v10 + 2),
            ((v6 >> 26) & 0x30) == (*((_BYTE *)v11 + 16 * v10 + 8) & 0x30))
        && (v12 & 0x1000) == 0
        && (v12 & 0xF) != 0
        && (*((_BYTE *)v11 + 16 * v10 + 8) & 0xF) == 1 )
      {
        v13 = *((_QWORD *)v11 + 2 * v10);
      }
      else
      {
        v13 = 0LL;
      }
    }
    else
    {
      DXGPUSHLOCK::AcquireShared((struct _KTHREAD *)((char *)a3[50] + 168));
      v16 = a3[50];
      v17 = (v6 >> 6) & 0xFFFFFF;
      if ( v17 < *((_DWORD *)v16 + 52)
        && (v18 = *((_QWORD *)v16 + 24),
            v19 = *(_DWORD *)(v18 + 16LL * v17 + 8),
            ((v6 >> 26) & 0x30) == (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x30))
        && (v19 & 0x1000) == 0
        && (v19 & 0xF) != 0
        && (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0xF) == 1 )
      {
        v13 = *(_QWORD *)(v18 + 16LL * v17);
      }
      else
      {
        v13 = 0LL;
      }
      ExReleasePushLockSharedEx((char *)v16 + 168, 0LL);
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
