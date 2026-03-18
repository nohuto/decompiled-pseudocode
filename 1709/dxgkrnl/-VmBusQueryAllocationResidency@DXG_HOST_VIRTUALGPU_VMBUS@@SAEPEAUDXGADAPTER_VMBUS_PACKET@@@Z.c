/*
 * XREFs of ?VmBusQueryAllocationResidency@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C0184C10 (DxgkQueryAllocationResidency.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusQueryAllocationResidency(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  int v3; // edx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned int v12; // edi
  int *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int *v17; // rsi
  int AllocationResidency; // eax
  __int64 v19; // rcx
  __int64 v20; // rax

  v1 = *((_QWORD *)a1 + 9);
  v3 = *(_DWORD *)(v1 + 28);
  if ( v3 )
    v4 = 0LL;
  else
    v4 = *(unsigned int *)(v1 + 40);
  v5 = 4 * v4;
  if ( v5 > 0xFFFFFFFF )
  {
    v7 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    *(_QWORD *)(v7 + 24) = 1939LL;
LABEL_7:
    WdLogEvent5_WdAssertion(v7);
    return 0;
  }
  v6 = v5;
  v9 = v5 + 56;
  if ( (unsigned int)(v6 + 56) < 0x38 )
  {
    v7 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    *(_QWORD *)(v7 + 24) = 1945LL;
    goto LABEL_7;
  }
  if ( v9 > *((_DWORD *)a1 + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v7 + 24) = 1950LL;
    goto LABEL_7;
  }
  v10 = 1LL;
  if ( !v3 )
    v10 = *(unsigned int *)(v1 + 40);
  v11 = 4 * v10;
  if ( v11 > 0xFFFFFFFF )
  {
    v7 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL);
    *(_QWORD *)(v7 + 24) = 1959LL;
    goto LABEL_7;
  }
  if ( (unsigned int)v11 >= 0xFFFFFFFC )
  {
    v7 = WdLogNewEntry5_WdAssertion((unsigned int)v11);
    *(_QWORD *)(v7 + 24) = 1964LL;
    goto LABEL_7;
  }
  v12 = v11 + 4;
  v13 = (int *)operator new((unsigned int)(v11 + 4), 0x4B677844u, 1, (POOL_TYPE)512);
  v17 = v13;
  if ( !v13 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v15);
    *(_QWORD *)(v7 + 24) = 1971LL;
    goto LABEL_7;
  }
  *(_QWORD *)(v1 + 32) = v1 + 56;
  *(_QWORD *)(v1 + 48) = v13 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v1 + 24, v14, v16);
  *v17 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v19);
    *(_QWORD *)(v20 + 24) = *v17;
    WdLogEvent5_WdAssertion(v20);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v17, v12);
  ExFreePoolWithTag(v17, 0);
  return 1;
}
