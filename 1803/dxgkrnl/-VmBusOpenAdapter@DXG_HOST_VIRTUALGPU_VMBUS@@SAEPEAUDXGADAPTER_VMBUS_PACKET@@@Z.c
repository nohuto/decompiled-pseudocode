/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01804A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00F50F8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z @ 0x1C01B7BC0 (-SetSharedPage@DXGVIRTUALMACHINE@@QEAAXI@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int *v4; // rbx
  __int64 v5; // rax
  char v6; // si
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rax
  _QWORD *v12; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v4 = (unsigned int *)v2;
  if ( !v2 )
    return 0;
  if ( *(_DWORD *)(v2 + 24) != 10 || *(_DWORD *)(v2 + 28) != 51 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(v3);
    v12[3] = 10LL;
    v12[4] = 51LL;
    v12[5] = v4[6];
    v12[6] = v4[7];
    WdLogEvent5_WdAssertion(v12);
    return 0;
  }
  v5 = *((_QWORD *)a1 + 5);
  v15 = 0;
  v14 = *(_QWORD *)(v5 + 16);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  v6 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 176LL) == 1 )
  {
    v7 = DXGADAPTER::CreateHandle(
           *(DXGADAPTER **)(*((_QWORD *)a1 + 5) + 16LL),
           *(struct DXGPROCESS **)(*((_QWORD *)a1 + 5) + 208LL),
           &v16);
    v9 = v7;
    if ( v7 >= 0 )
    {
      if ( g_VgpuEnableGuestDebug )
        DXGVIRTUALMACHINE::SetSharedPage(*(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 456LL), v4[8]);
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), &v16, 4u);
      goto LABEL_11;
    }
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  v6 = 0;
LABEL_11:
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return v6;
}
