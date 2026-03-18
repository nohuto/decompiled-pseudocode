/*
 * XREFs of ?VmBusSignalFence@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033000
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z @ 0x1C008B578 (-AdapterObjectSignalFence@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@_KI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C016CC10 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAPEAVDXGADAPTERSYNCOBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

unsigned __int8 __fastcall VmBusSignalFence(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbp
  struct DXGPROCESS *Current; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  DXGSYNCOBJECT *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  DXGADAPTERSYNCOBJECT *DxgAdapterSyncObject; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _BYTE v19[56]; // [rsp+20h] [rbp-38h] BYREF
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  v20 = 0;
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, Current, v4, v5);
  v6 = *(_DWORD *)(v1 + 16);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v7 = (v6 >> 6) & 0xFFFFFF;
  if ( v7 < *((_DWORD *)Current + 52)
    && (v8 = *((_QWORD *)Current + 24),
        v9 = *(_DWORD *)(v8 + 16LL * v7 + 8),
        ((v6 >> 26) & 0x30) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x30))
    && (v9 & 0x1000) == 0
    && (v9 & 0xF) != 0
    && (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0xF) == 8 )
  {
    v10 = *(DXGSYNCOBJECT **)(v8 + 16LL * v7);
  }
  else
  {
    v10 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v13 + 24) = *(unsigned int *)(v1 + 16);
    WdLogEvent5_WdError(v13);
    v20 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  if ( v20 >= 0 )
  {
    DxgAdapterSyncObject = DXGSYNCOBJECT::GetDxgAdapterSyncObject(
                             v10,
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL) + 2288LL));
    v20 = DXGADAPTERSYNCOBJECT::AdapterObjectSignalFence(DxgAdapterSyncObject, v10, *(_QWORD *)(v1 + 24), 0);
    if ( v20 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v17 + 24) = v20;
      WdLogEvent5_WdError(v17);
    }
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v20, 4u);
  return 1;
}
