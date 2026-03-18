/*
 * XREFs of ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00F8734
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017DC90 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C01AA35C (DxgkCreateBundleObjectInternal.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C01BD5B0 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C01E47B8 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C01E5118 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C01E6E70 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMGRTABLE::GetEntryType(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 16) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v5 + 24) = 217LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(_DWORD *)(*(_QWORD *)a1 + 16 * v3 + 8) & 0x1F;
}
