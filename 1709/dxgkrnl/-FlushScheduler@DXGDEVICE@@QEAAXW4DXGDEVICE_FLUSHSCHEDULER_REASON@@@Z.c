/*
 * XREFs of ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28
 * Callers:
 *     ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C007DF24 (-MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00894C0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C008CDD0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0092F9C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009AEB0 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009C68C (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011DBF4 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0175B20 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193390 (-VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01934F0 (-VmBusFlushDevice@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkWaitForIdle @ 0x1C01A0F50 (DxgkWaitForIdle.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C01B988C (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D07FC (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C01967E0 (-VmBusSendFlushDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGDEVICE@@W4DXGDEVICE_FLUSHSCHEDULER.c)
 */

void __fastcall DXGDEVICE::FlushScheduler(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(a1[2] + 16LL);
  if ( !*(_BYTE *)(v4 + 185) )
  {
    v13[0] = 0LL;
    v13[1] = 0LL;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 26));
    v6 = a2 - 1;
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              if ( v11 != 1 )
              {
                v12 = WdLogNewEntry5_WdAssertion(v5);
                *(_QWORD *)(v12 + 24) = 5345LL;
                goto LABEL_19;
              }
              LODWORD(v13[0]) = 5;
            }
            else
            {
              LODWORD(v13[0]) = 3;
            }
          }
          else
          {
            LODWORD(v13[0]) = 11;
          }
        }
        else
        {
          LODWORD(v13[0]) = 7;
        }
      }
      else
      {
        LODWORD(v13[0]) = 6;
      }
    }
    else
    {
      LODWORD(v13[0]) = 1;
    }
    if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1[2] + 504LL) + 8LL) + 136LL))(a1[75], v13) >= 0 )
    {
LABEL_5:
      a1[27] = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 26, 0LL);
      KeLeaveCriticalRegion();
      return;
    }
    v12 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v12 + 24) = 5350LL;
LABEL_19:
    WdLogEvent5_WdAssertion(v12);
    goto LABEL_5;
  }
  DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFlushDevice(v4 + 3888, a1, a2);
}
