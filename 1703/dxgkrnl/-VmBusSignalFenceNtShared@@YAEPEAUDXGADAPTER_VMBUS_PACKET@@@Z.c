/*
 * XREFs of ?VmBusSignalFenceNtShared@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0033160
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KI@Z @ 0x1C008B518 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KI@Z.c)
 */

unsigned __int8 __fastcall VmBusSignalFenceNtShared(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 7);
  v3 = *((_QWORD *)a1 + 9);
  v16 = 0;
  v4 = *(_DWORD *)(v3 + 16);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v1 + 168));
  v5 = (v4 >> 6) & 0xFFFFFF;
  if ( v5 < *(_DWORD *)(v1 + 208)
    && (v6 = *(_QWORD *)(v1 + 192),
        v7 = *(_DWORD *)(v6 + 16LL * v5 + 8),
        ((v4 >> 26) & 0x30) == (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x30))
    && (v7 & 0x1000) == 0
    && (v7 & 0xF) != 0
    && (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0xF) == 0xD )
  {
    v8 = *(_QWORD *)(v6 + 16LL * v5);
  }
  else
  {
    v8 = 0LL;
  }
  ExReleasePushLockSharedEx(v1 + 168, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v16 = DXGSYNCOBJECT::SignalFence(*(DXGSYNCOBJECT **)(v8 + 16), *(_QWORD *)(v3 + 24), 0);
    if ( v16 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v14 + 24) = v16;
      WdLogEvent5_WdError(v14);
    }
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v11 + 24) = *(unsigned int *)(v3 + 16);
    WdLogEvent5_WdError(v11);
    v16 = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v16, 4u);
  return 1;
}
