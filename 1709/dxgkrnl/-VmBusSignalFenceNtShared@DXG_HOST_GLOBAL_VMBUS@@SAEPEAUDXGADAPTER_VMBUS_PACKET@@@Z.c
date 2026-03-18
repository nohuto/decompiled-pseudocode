/*
 * XREFs of ?VmBusSignalFenceNtShared@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199C10
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z @ 0x1C008AB0C (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSignalFenceNtShared(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r14
  __int64 v3; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  _DWORD **v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 7);
  v3 = *((_QWORD *)a1 + 9);
  v14 = 0;
  v4 = *(_DWORD *)(v3 + 24);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v1 + 200));
  v5 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v5 < *(_DWORD *)(v1 + 240)
    && (v6 = *(_QWORD *)(v1 + 224),
        v7 = *(_DWORD *)(v6 + 16 * v5 + 8),
        ((v4 >> 25) & 0x60) == (*(_BYTE *)(v6 + 16 * v5 + 8) & 0x60))
    && (v7 & 0x2000) == 0
    && (v7 & 0x1F) != 0
    && (*(_BYTE *)(v6 + 16LL * (unsigned int)v5 + 8) & 0x1F) == 0xD )
  {
    v8 = *(_DWORD ***)(v6 + 16LL * (unsigned int)v5);
  }
  else
  {
    v8 = 0LL;
  }
  ExReleasePushLockSharedEx(v1 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v14 = DXGSYNCOBJECT::SignalFence(*v8, *(_QWORD *)(v3 + 32), 0);
    if ( v14 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = v14;
      WdLogEvent5_WdError(v12);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v3 + 24);
    WdLogEvent5_WdError(v10);
    v14 = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v14, 4u);
  return 1;
}
