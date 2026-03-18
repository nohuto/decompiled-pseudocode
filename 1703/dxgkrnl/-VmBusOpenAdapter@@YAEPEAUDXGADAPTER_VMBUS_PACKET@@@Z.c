/*
 * XREFs of ?VmBusOpenAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E220
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00D3674 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

char __fastcall VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 9);
  if ( *(_QWORD *)(v4 + 16) != 0x3B00000003LL )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    v12[3] = 3LL;
    v12[4] = 59LL;
    v12[5] = *(unsigned int *)(v4 + 16);
    v12[6] = *(unsigned int *)(v4 + 20);
    WdLogEvent5_WdAssertion(v12);
    return 0;
  }
  v6 = *((_QWORD *)a1 + 5);
  v15 = 0;
  v14 = *(_QWORD *)(v6 + 8);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  v7 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 8LL) + 176LL) != 1 )
    goto LABEL_6;
  if ( (int)DXGADAPTER::CreateHandle(
              *(DXGADAPTER **)(*((_QWORD *)a1 + 5) + 8LL),
              *(struct DXGPROCESS **)(*((_QWORD *)a1 + 5) + 88LL),
              &v16) < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v10 + 24) = 6895LL;
    WdLogEvent5_WdError(v10);
LABEL_6:
    v7 = 0;
    goto LABEL_7;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v16, 4u);
LABEL_7:
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return v7;
}
