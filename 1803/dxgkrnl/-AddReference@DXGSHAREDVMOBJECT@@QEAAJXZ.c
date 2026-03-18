/*
 * XREFs of ?AddReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C017A2FC
 * Callers:
 *     ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186AE0 (-VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C01BCED4 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGSHAREDVMOBJECT::AddReference(DXGSHAREDVMOBJECT *this)
{
  __int64 v2; // rax

  if ( *((int *)this + 6) < 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 8865LL;
    WdLogEvent5_WdAssertion(v2);
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
