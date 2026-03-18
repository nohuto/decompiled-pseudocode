/*
 * XREFs of ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0191CA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C0090D00 (DxgkCreateContextVirtual.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  _DWORD *v1; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  int ContextVirtual; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (_DWORD *)*((_QWORD *)a1 + 9);
  v3 = (unsigned int)v1[12];
  if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 63 >= v3 )
  {
    v5 = v3 + 63;
    memset(v12, 0, 0x28uLL);
    HIDWORD(v12[1]) = v1[10];
    LODWORD(v12[0]) = v1[7];
    HIDWORD(v12[3]) = v1[11];
    HIDWORD(v12[0]) = v1[8];
    LODWORD(v12[1]) = v1[9];
    if ( (_DWORD)v3 )
    {
      LODWORD(v12[3]) = v3;
      v12[2] = v1 + 14;
    }
    v1[6] = 0;
    ContextVirtual = DxgkCreateContextVirtual((ULONG64)v12, v6, v7);
    v10 = ContextVirtual;
    if ( ContextVirtual >= 0 )
    {
      v1[6] = v12[4];
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v1, v5);
      return 1;
    }
    v4 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v4 + 24) = v10;
    *(_QWORD *)(v4 + 32) = 638LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v4 + 24) = *((unsigned int *)a1 + 20);
    *(_QWORD *)(v4 + 32) = 611LL;
  }
  WdLogEvent5_WdError(v4);
  return 0;
}
