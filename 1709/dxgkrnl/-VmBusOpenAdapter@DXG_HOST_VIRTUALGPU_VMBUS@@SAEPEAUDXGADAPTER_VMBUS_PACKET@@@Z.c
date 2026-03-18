/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194200
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0084CB0 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v8; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+30h] [rbp-18h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  if ( *(_QWORD *)(v1 + 24) != 0x3000000007LL )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
    v8[3] = 7LL;
    v8[4] = 48LL;
    v8[5] = *(unsigned int *)(v1 + 24);
    v8[6] = *(unsigned int *)(v1 + 28);
    WdLogEvent5_WdAssertion(v8);
    return 0;
  }
  v3 = *((_QWORD *)a1 + 5);
  v11 = 0;
  v10 = *(_QWORD *)(v3 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  v4 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 176LL) != 1 )
    goto LABEL_6;
  if ( (int)DXGADAPTER::CreateHandle(
              *(DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL),
              *(struct DXGPROCESS **)(*((_QWORD *)a1 + 5) + 192LL),
              &v12) < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v6 + 24) = 3265LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    v4 = 0;
    goto LABEL_7;
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v12, 4u);
LABEL_7:
  if ( v11 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v9);
  return v4;
}
