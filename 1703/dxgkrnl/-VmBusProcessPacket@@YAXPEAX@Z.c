/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C002E4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuDebugPrint@@YAXPEBDZZ @ 0x1C002B108 (-VgpuDebugPrint@@YAXPEBDZZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C002D418 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     Template_ppq @ 0x1C0041FF0 (Template_ppq.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DXG_VMBUS_COMMAND_TABLE near **v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx

  v4 = *((_QWORD *)a1 + 9);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_ppq(
      (_DWORD)a1,
      (unsigned int)&EventVmBusProcessPacketWorkerBegin,
      a3,
      *((_QWORD *)a1 + 4),
      *(_QWORD *)v4,
      *(_DWORD *)(v4 + 8));
  v5 = 0;
  if ( !*((_QWORD *)a1 + 7) )
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( v6 )
      *((_QWORD *)a1 + 7) = *(_QWORD *)(v6 + 88);
  }
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  VgpuDebugPrint("VmBusProcessPacket %p %p \n", *((const void **)a1 + 8), KeGetCurrentThread());
  if ( *((_DWORD *)a1 + 20) >= 0x10u )
  {
    VgpuDebugPrint(
      "VmBusProcessPacketCommand:  %p %p %d\n",
      *((const void **)a1 + 8),
      KeGetCurrentThread(),
      *(_DWORD *)(v4 + 8));
    if ( *(_DWORD *)(v4 + 8) > 0x3Au )
    {
      VgpuDebugPrint("VmBusProcessPacket - Invalid Packet size\n");
      v19 = WdLogNewEntry5_WdError(v22, v21);
      v20 = *(int *)(v4 + 8);
    }
    else
    {
      v11 = &g_VmBusCommandTable + 2 * *(int *)(v4 + 8);
      if ( v11 )
      {
        if ( *((_DWORD *)a1 + 20) < *((_DWORD *)v11 + 3) )
        {
          VgpuDebugPrint("VmBusProcessPacket - Invalid Packet size\n");
          v9 = WdLogNewEntry5_WdError(v13, v12);
          v10 = *((unsigned int *)a1 + 20);
          *(_QWORD *)(v9 + 32) = 7048LL;
          goto LABEL_8;
        }
        if ( *((_BYTE *)v11 + 8) )
          v14 = VmBusExecuteCommandInProcessContext(a1, (__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *))*v11);
        else
          v14 = ((__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *))*v11)(a1);
        v5 = v14;
LABEL_20:
        if ( v5 )
          goto LABEL_22;
        goto LABEL_21;
      }
      VgpuDebugPrint("VmBusProcessPacket - Invalid Packet size\n");
      v19 = WdLogNewEntry5_WdError(v18, v17);
      v20 = *(int *)(v4 + 8);
      *(_QWORD *)(v19 + 32) = 7063LL;
    }
    *(_QWORD *)(v19 + 24) = v20;
    WdLogEvent5_WdError(v19);
    goto LABEL_20;
  }
  VgpuDebugPrint("VmBusProcessPacket - Invalid Packet size %p\n", KeGetCurrentThread());
  v9 = WdLogNewEntry5_WdError(v8, v7);
  v10 = *((unsigned int *)a1 + 20);
  *(_QWORD *)(v9 + 32) = 7035LL;
LABEL_8:
  *(_QWORD *)(v9 + 24) = v10;
  WdLogEvent5_WdError(v9);
LABEL_21:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), 0LL, 0);
LABEL_22:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    Template_ppq(
      v15,
      (unsigned int)&EventVmBusProcessPacketWorkerEnd,
      v16,
      *((_QWORD *)a1 + 4),
      *(_QWORD *)v4,
      *(_DWORD *)(v4 + 8));
  ExFreePoolWithTag(a1, 0x4B677844u);
}
