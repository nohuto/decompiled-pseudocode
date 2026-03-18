/*
 * XREFs of ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017B3F4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017DC90 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017EDF0 (-VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186AE0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C01BC530 (-CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C01BC598 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 *     ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C01BC7D8 (-DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BCED4 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_GDXGSHAREDVMOBJECT@@AEAAPEAXI@Z @ 0x1C002D524 (--_GDXGSHAREDVMOBJECT@@AEAAPEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F9F84 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

__int64 __fastcall DXGSHAREDVMOBJECT::ReleaseReference(int *P)
{
  __int64 v2; // rax
  unsigned __int32 v3; // edi
  int v4; // eax
  __int64 v5; // rax
  PERESOURCE *Global; // rax

  if ( P[6] <= 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(P);
    *(_QWORD *)(v2 + 24) = 8873LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v3 = _InterlockedDecrement(P + 6);
  if ( !v3 )
  {
    v4 = *P;
    if ( *P == 4 )
    {
      *((_QWORD *)P + 1) = 0LL;
    }
    else
    {
      if ( v4 == 8 || v4 == 11 )
      {
        Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)P);
        DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)P + 1), 0);
        *((_QWORD *)P + 1) = 0LL;
        goto LABEL_12;
      }
      if ( v4 != 16 )
      {
        v5 = WdLogNewEntry5_WdError(P);
        *(_QWORD *)(v5 + 24) = *P;
        WdLogEvent5_WdError(v5);
LABEL_12:
        DXGSHAREDVMOBJECT::`scalar deleting destructor'(P);
        return v3;
      }
    }
    ObCloseHandle(*((HANDLE *)P + 2), 0);
    *((_QWORD *)P + 2) = 0LL;
    goto LABEL_12;
  }
  return v3;
}
