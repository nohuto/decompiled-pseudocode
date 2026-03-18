/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01811B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C016CDD0 (DxgkQueryAllocationResidency.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // edi
  int *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int *v18; // rsi
  int AllocationResidency; // eax
  __int64 v20; // rcx
  __int64 v21; // rax

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v5 = *(unsigned int *)(v2 + 28);
  if ( (_DWORD)v5 )
    v6 = 0LL;
  else
    v6 = *(unsigned int *)(v2 + 40);
  v7 = 4 * v6;
  if ( v7 > 0xFFFFFFFF )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 2235LL;
LABEL_9:
    WdLogEvent5_WdAssertion(v9);
    return 0;
  }
  v8 = v7;
  v10 = v7 + 56;
  if ( (unsigned int)(v8 + 56) < 0x38 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 2241LL;
    goto LABEL_9;
  }
  if ( v10 > *((_DWORD *)a1 + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 2246LL;
    goto LABEL_9;
  }
  v11 = 1LL;
  if ( !(_DWORD)v5 )
    v11 = *(unsigned int *)(v3 + 40);
  v12 = 4 * v11;
  if ( v12 > 0xFFFFFFFF )
  {
    v9 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    *(_QWORD *)(v9 + 24) = 2255LL;
    goto LABEL_9;
  }
  if ( (unsigned int)v12 >= 0xFFFFFFFC )
  {
    v9 = WdLogNewEntry5_WdAssertion((unsigned int)v12);
    *(_QWORD *)(v9 + 24) = 2260LL;
    goto LABEL_9;
  }
  v13 = v12 + 4;
  v14 = (int *)operator new((unsigned int)(v12 + 4), 0x4B677844u, 1, (POOL_TYPE)512);
  v18 = v14;
  if ( !v14 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v16);
    *(_QWORD *)(v9 + 24) = 2267LL;
    goto LABEL_9;
  }
  *(_QWORD *)(v3 + 32) = v3 + 56;
  *(_QWORD *)(v3 + 48) = v14 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v3 + 24, v15, v17);
  *v18 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20);
    *(_QWORD *)(v21 + 24) = *v18;
    WdLogEvent5_WdAssertion(v21);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v18, v13);
  operator delete[](v18);
  return 1;
}
