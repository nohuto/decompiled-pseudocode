/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C01948A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0ppq @ 0x1C0032B64 (McTemplateK0ppq.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C01931F8 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  char v4; // si
  int v5; // r13d
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  __int64 v9; // rbp
  int v10; // r12d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v17; // rax
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v18; // rcx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // [rsp+28h] [rbp-30h]

  v3 = (__int64 *)*((_QWORD *)a1 + 9);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v9 = *v3;
  v10 = *((_DWORD *)v3 + 3);
  if ( !*((_QWORD *)a1 + 7) )
  {
    v11 = *((_QWORD *)a1 + 5);
    if ( v11 )
      *((_QWORD *)a1 + 7) = *(_QWORD *)(v11 + 192);
  }
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  v12 = *((_DWORD *)v3 + 3);
  v13 = 0x400000LL;
  if ( v12 != 1 )
  {
    if ( v12 )
    {
      if ( *((_DWORD *)a1 + 20) < 0x18u )
      {
        v14 = WdLogNewEntry5_WdError(0x400000LL);
        v15 = *((unsigned int *)a1 + 20);
        *(_QWORD *)(v14 + 32) = 196LL;
        goto LABEL_7;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0ppq(
          0x400000LL,
          &EventVmBusProcessPacketHostToVmWorkerBegin,
          a3,
          *((_QWORD *)a1 + 4),
          *v3,
          *((_DWORD *)v3 + 4));
      v6 = *((_DWORD *)v3 + 4);
      if ( v6 > 1 )
      {
        v22 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v22 + 24) = *((int *)v3 + 4);
        *(_QWORD *)(v22 + 32) = 206LL;
        WdLogEvent5_WdError(v22);
        goto LABEL_37;
      }
      v16 = *((int *)v3 + 4);
      v17 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)&DXG_GUEST_VIRTUALGPU_VMBUS::VmBusCommandTableHostToVm;
    }
    else
    {
      if ( *((_DWORD *)a1 + 20) < 0x18u )
      {
        v14 = WdLogNewEntry5_WdError(0x400000LL);
        v15 = *((unsigned int *)a1 + 20);
        *(_QWORD *)(v14 + 32) = 176LL;
        goto LABEL_7;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0ppq(
          0x400000LL,
          &EventVmBusProcessPacketWorkerBegin,
          a3,
          *((_QWORD *)a1 + 4),
          *v3,
          *((_DWORD *)v3 + 4));
      v7 = *((_DWORD *)v3 + 4);
      if ( v7 > 0x2F )
      {
        v14 = WdLogNewEntry5_WdError(v13);
        v15 = *((int *)v3 + 4);
        *(_QWORD *)(v14 + 32) = 186LL;
        goto LABEL_7;
      }
      v16 = *((int *)v3 + 4);
      v17 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost;
    }
LABEL_30:
    v18 = &v17[2 * v16];
    if ( *((_DWORD *)a1 + 20) < *((_DWORD *)v18 + 3) )
    {
      v14 = WdLogNewEntry5_WdError(v18);
      v15 = *((unsigned int *)a1 + 20);
      *(_QWORD *)(v14 + 32) = 213LL;
      goto LABEL_7;
    }
    if ( *((_BYTE *)v18 + 8) )
      v19 = VmBusExecuteCommandInProcessContext(a1, *(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *))v18);
    else
      v19 = (*(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *))v18)(a1);
    v4 = v19;
LABEL_37:
    if ( v4 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( *((_DWORD *)a1 + 20) >= 0x18u )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0ppq(
        0x400000LL,
        &EventVmBusProcessPacketGlobalWorkerBegin,
        a3,
        *((_QWORD *)a1 + 4),
        *v3,
        *((_DWORD *)v3 + 4));
    v5 = *((_DWORD *)v3 + 4);
    if ( (unsigned int)(v5 - 48) > 9 )
    {
      v14 = WdLogNewEntry5_WdError(v13);
      v15 = *((int *)v3 + 4);
      *(_QWORD *)(v14 + 32) = 165LL;
      goto LABEL_7;
    }
    v16 = v5 - 48;
    v17 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost;
    goto LABEL_30;
  }
  v14 = WdLogNewEntry5_WdError(0x400000LL);
  v15 = *((unsigned int *)a1 + 20);
  *(_QWORD *)(v14 + 32) = 155LL;
LABEL_7:
  *(_QWORD *)(v14 + 24) = v15;
  WdLogEvent5_WdError(v14);
LABEL_38:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), 0LL, 0);
LABEL_39:
  if ( bTracingEnabled )
  {
    if ( v10 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v24) = v5;
        v23 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
LABEL_48:
        McTemplateK0ppq(v20, v23, v21, *((_QWORD *)a1 + 4), v9, v24);
      }
    }
    else if ( v10 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v24) = v6;
        v23 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        goto LABEL_48;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      LODWORD(v24) = v7;
      v23 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
      goto LABEL_48;
    }
  }
  ExFreePoolWithTag(a1, 0x4B677844u);
}
