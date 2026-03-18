/*
 * XREFs of ?VmBusQueryAllocationResidency@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkQueryAllocationResidency @ 0x1C009C3C0 (DxgkQueryAllocationResidency.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

unsigned __int8 __fastcall VmBusQueryAllocationResidency(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // esi
  int *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int *v22; // rdi
  int AllocationResidency; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax

  v4 = *((_QWORD *)a1 + 9);
  v6 = *(unsigned int *)(v4 + 20);
  if ( (_DWORD)v6 )
    v7 = 0LL;
  else
    v7 = *(unsigned int *)(v4 + 32);
  v8 = 4 * v7;
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, v6, a3, a4);
    *(_QWORD *)(v9 + 24) = 5492LL;
LABEL_6:
    WdLogEvent5_WdAssertion(v9);
    return 0;
  }
  v11 = v8 + 48;
  if ( v11 < 0x30 )
  {
    v9 = WdLogNewEntry5_WdAssertion(0xFFFFFFFFLL, v6, a3, a4);
    *(_QWORD *)(v9 + 24) = 5498LL;
    goto LABEL_6;
  }
  v12 = v11;
  if ( v11 > *((_DWORD *)a1 + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v11, v6, a3, a4);
    *(_QWORD *)(v9 + 24) = 5503LL;
    goto LABEL_6;
  }
  v13 = 1LL;
  if ( !(_DWORD)v6 )
    v13 = *(unsigned int *)(v4 + 32);
  v14 = 4 * v13;
  if ( v14 > 0xFFFFFFFF )
  {
    v9 = WdLogNewEntry5_WdAssertion(v12, v6, a3, a4);
    *(_QWORD *)(v9 + 24) = 5512LL;
    goto LABEL_6;
  }
  v15 = v14 + 4;
  if ( v15 < 4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v12, v6, a3, a4);
    *(_QWORD *)(v9 + 24) = 5517LL;
    goto LABEL_6;
  }
  v16 = v15;
  v17 = (int *)operator new(v15, v6, 1, (enum _POOL_TYPE)512);
  v22 = v17;
  if ( !v17 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v9 + 24) = 5524LL;
    goto LABEL_6;
  }
  *(_QWORD *)(v4 + 24) = v4 + 48;
  *(_QWORD *)(v4 + 40) = v17 + 1;
  AllocationResidency = DxgkQueryAllocationResidency(v4 + 16);
  *v22 = AllocationResidency;
  if ( AllocationResidency < 0 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
    *(_QWORD *)(v28 + 24) = *v22;
    WdLogEvent5_WdAssertion(v28);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v22, v16);
  operator delete[](v22);
  return 1;
}
