/*
 * XREFs of ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960
 * Callers:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAA@PEAPEAVDXGSYNCOBJECT@@IE@Z @ 0x1C0001450 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1-AcquireSyncObjectMutex@@YAXPEAV1@@Z$1-Rele.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003B58 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0004A9C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z @ 0x1C003A69C (-ReadDiagnostics@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAEPEAI@Z.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003A710 (-WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C008A0B0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C009AFE8 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C009B128 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C00C1C98 (-RemoveAllocationFromList@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C00DC860 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E68B0 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     DmmGetNextVideoPresentTarget @ 0x1C00E9720 (DmmGetNextVideoPresentTarget.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E9A70 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00F7330 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00F7D14 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00FA670 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I@Z @ 0x1C00FF054 (-Initialize@DXGDEVICESYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@U_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@I.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00FF4D8 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     DxgkAcquireHandleDataCB @ 0x1C00FF810 (DxgkAcquireHandleDataCB.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C011B880 (-QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C0121EC0 (-SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 *     ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016C6F0 (-AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 *     ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C016FC6C (-AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0170654 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C017317C (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0173FB4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0174384 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z @ 0x1C0195BE4 (-NotifySharedPowerGraphicsRemoving@DXGGLOBAL@@QEAAXQEAX@Z.c)
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@Z@Z @ 0x1C0196520 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@Z@Z.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0196734 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C0196D24 (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0197270 (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 *     DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C0197604 (DxgkNotifySharedPowerGraphicsPowerTransition.c)
 *     DxgkCacheHybridQueryValue @ 0x1C01A2480 (DxgkCacheHybridQueryValue.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C01A2640 (DxgkGetCachedHybridQueryValue.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01A5554 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z @ 0x1C01A5718 (-CreatePeriodicFrameNotification@DXGSYNCOBJECT@@QEAAJPEAVDXGADAPTER@@_KI@Z.c)
 *     ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C01A5A18 (-DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 */

void __fastcall DXGFASTMUTEX::Acquire(DXGFASTMUTEX *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax

  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)this + 1) == KeGetCurrentThread() )
  {
    if ( *((int *)this + 6) <= 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
      *(_QWORD *)(v10 + 24) = 351LL;
      WdLogEvent5_WdAssertion(v10);
    }
    ++*((_DWORD *)this + 6);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 16, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v11 = *((unsigned int *)this + 7);
        if ( (_DWORD)v11 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v7, &EventBlockThread, v8, v11);
      }
      _InterlockedIncrement64((volatile signed __int64 *)this);
      ExAcquirePushLockExclusiveEx((char *)this + 16, 0LL);
    }
    if ( *((_QWORD *)this + 1) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      *(_QWORD *)(v12 + 24) = 375LL;
      WdLogEvent5_WdAssertion(v12);
    }
    if ( *((_DWORD *)this + 6) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      *(_QWORD *)(v13 + 24) = 376LL;
      WdLogEvent5_WdAssertion(v13);
    }
    *((_QWORD *)this + 1) = KeGetCurrentThread();
    *((_DWORD *)this + 6) = 1;
  }
}
