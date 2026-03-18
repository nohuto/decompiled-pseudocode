/*
 * XREFs of ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330
 * Callers:
 *     ?VmBusFlushAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D590 (-VmBusFlushAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D6F0 (-VmBusFlushDevice@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z @ 0x1C008B980 (-MarkDeviceAsError@DXGDEVICE@@QEAAXW4_VIDSCH_ERROR_CODE@@@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C00C0148 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00C755C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8DFC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00DB900 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z @ 0x1C011D764 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@I@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01722B0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkWaitForIdle @ 0x1C018C7E0 (DxgkWaitForIdle.c)
 *     ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1C01A1CEC (-FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01B880C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendFlushDevice@DXGDEVICE@@QEAAJW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0030334 (-VmBusSendFlushDevice@DXGDEVICE@@QEAAJW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

void __fastcall DXGDEVICE::FlushScheduler(_QWORD *a1, int a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  __int64 v18; // rax
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1[2] + 16LL) + 186LL) )
  {
    v4 = a1 + 26;
    v19[0] = 0LL;
    v19[1] = 0LL;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(a1 + 26));
    v9 = a2 - 1;
    if ( v9 )
    {
      v14 = v9 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 != 1 )
              {
                v18 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
                *(_QWORD *)(v18 + 24) = 5359LL;
                goto LABEL_19;
              }
              LODWORD(v19[0]) = 5;
            }
            else
            {
              LODWORD(v19[0]) = 3;
            }
          }
          else
          {
            LODWORD(v19[0]) = 11;
          }
        }
        else
        {
          LODWORD(v19[0]) = 7;
        }
      }
      else
      {
        LODWORD(v19[0]) = 6;
      }
    }
    else
    {
      LODWORD(v19[0]) = 1;
    }
    if ( (*(int (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(a1[2] + 408LL) + 8LL) + 136LL))(a1[75], v19) >= 0 )
    {
LABEL_5:
      v4[1] = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
      return;
    }
    v18 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v18 + 24) = 5364LL;
LABEL_19:
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_5;
  }
  DXGDEVICE::VmBusSendFlushDevice((__int64)a1, a2);
}
