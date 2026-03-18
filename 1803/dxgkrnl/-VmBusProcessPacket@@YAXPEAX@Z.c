/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0180D80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0ppq @ 0x1C0041428 (McTemplateK0ppq.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C017F324 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
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
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v18; // rax
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v19; // rcx
  __int64 (__fastcall *v20)(struct DXGADAPTER_VMBUS_PACKET *); // rax
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  const EVENT_DESCRIPTOR *v25; // rdx
  __int64 v26; // [rsp+28h] [rbp-30h]

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
      *((_QWORD *)a1 + 7) = *(_QWORD *)(v11 + 208);
  }
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  v12 = *((unsigned int *)v3 + 3);
  v13 = 0x400000LL;
  v14 = *((_DWORD *)a1 + 20);
  if ( (_DWORD)v12 != 1 )
  {
    if ( (_DWORD)v12 )
    {
      if ( v14 < 0x18 )
      {
        v15 = WdLogNewEntry5_WdError(v12);
        v16 = *((unsigned int *)a1 + 20);
        *(_QWORD *)(v15 + 32) = 289LL;
        goto LABEL_7;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0ppq(
          v12,
          &EventVmBusProcessPacketHostToVmWorkerBegin,
          a3,
          *((_QWORD *)a1 + 4),
          *v3,
          *((_DWORD *)v3 + 4));
      v6 = *((_DWORD *)v3 + 4);
      if ( v6 > 2 )
      {
        v24 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v24 + 24) = *((int *)v3 + 4);
        *(_QWORD *)(v24 + 32) = 299LL;
        WdLogEvent5_WdError(v24);
        goto LABEL_37;
      }
      v17 = *((int *)v3 + 4);
      v18 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm;
    }
    else
    {
      if ( v14 < 0x18 )
      {
        v15 = WdLogNewEntry5_WdError(v12);
        v16 = *((unsigned int *)a1 + 20);
        *(_QWORD *)(v15 + 32) = 269LL;
        goto LABEL_7;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0ppq(v12, &EventVmBusProcessPacketWorkerBegin, a3, *((_QWORD *)a1 + 4), *v3, *((_DWORD *)v3 + 4));
      v7 = *((_DWORD *)v3 + 4);
      if ( v7 > 0x32 )
      {
        v15 = WdLogNewEntry5_WdError(v12);
        v16 = *((int *)v3 + 4);
        *(_QWORD *)(v15 + 32) = 279LL;
        goto LABEL_7;
      }
      v17 = *((int *)v3 + 4);
      v18 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost;
    }
LABEL_30:
    v19 = &v18[2 * v17];
    if ( *((_DWORD *)a1 + 20) < *((_DWORD *)v19 + 3) )
    {
      v15 = WdLogNewEntry5_WdError(v19);
      v16 = *((unsigned int *)a1 + 20);
      *(_QWORD *)(v15 + 32) = 306LL;
      goto LABEL_7;
    }
    v20 = (__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *))*v19;
    if ( *((_BYTE *)v19 + 8) )
      v21 = VmBusExecuteCommandInProcessContext(a1, v20);
    else
      v21 = ((__int64 (__fastcall *)(struct DXGADAPTER_VMBUS_PACKET *, __int64))v20)(a1, v13);
    v4 = v21;
LABEL_37:
    if ( v4 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( v14 >= 0x18 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0ppq(v12, &EventVmBusProcessPacketGlobalWorkerBegin, a3, *((_QWORD *)a1 + 4), *v3, *((_DWORD *)v3 + 4));
    v5 = *((_DWORD *)v3 + 4);
    if ( (unsigned int)(v5 - 51) > 9 )
    {
      v15 = WdLogNewEntry5_WdError(v12);
      v16 = *((int *)v3 + 4);
      *(_QWORD *)(v15 + 32) = 258LL;
      goto LABEL_7;
    }
    v17 = v5 - 51;
    v18 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost;
    goto LABEL_30;
  }
  v15 = WdLogNewEntry5_WdError(v12);
  v16 = *((unsigned int *)a1 + 20);
  *(_QWORD *)(v15 + 32) = 248LL;
LABEL_7:
  *(_QWORD *)(v15 + 24) = v16;
  WdLogEvent5_WdError(v15);
LABEL_38:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), 0LL, 0);
LABEL_39:
  if ( bTracingEnabled )
  {
    if ( v10 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v26) = v5;
        v25 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
LABEL_48:
        McTemplateK0ppq(v22, v25, v23, *((_QWORD *)a1 + 4), v9, v26);
      }
    }
    else if ( v10 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      {
        LODWORD(v26) = v6;
        v25 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        goto LABEL_48;
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      LODWORD(v26) = v7;
      v25 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
      goto LABEL_48;
    }
  }
  ExFreePoolWithTag(a1, 0x4B677844u);
}
