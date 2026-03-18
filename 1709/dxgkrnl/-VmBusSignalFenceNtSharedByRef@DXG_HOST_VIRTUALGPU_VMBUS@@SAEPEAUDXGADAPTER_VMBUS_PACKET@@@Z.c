/*
 * XREFs of ?VmBusSignalFenceNtSharedByRef@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199D40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1C00AF600 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSignalFenceNtSharedByRef(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r14
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int **v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 7);
  v3 = *((_QWORD *)a1 + 9);
  v12 = 0;
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
    v8 = *(unsigned int ***)(v6 + 16LL * (unsigned int)v5);
  }
  else
  {
    v8 = 0LL;
  }
  ExReleasePushLockSharedEx(v1 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    v12 = DxgkSignalSynchronizationObjectFromGpuByReference(*v8, *(_QWORD *)(v3 + 32), *(_DWORD *)(v3 + 28));
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v3 + 24);
    WdLogEvent5_WdError(v10);
    v12 = -1073741811;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v12, 4u);
  return 1;
}
