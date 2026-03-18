/*
 * XREFs of ?VmBusCreateContextVirtual@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C2B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkCreateContextVirtual @ 0x1C00FC280 (DxgkCreateContextVirtual.c)
 */

unsigned __int8 __fastcall VmBusCreateContextVirtual(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // ebp
  int ContextVirtual; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (_DWORD *)*((_QWORD *)a1 + 9);
  v4 = (unsigned int)v2[10];
  if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 55 >= v4 )
  {
    v6 = v4 + 55;
    memset(v12, 0, 0x28uLL);
    HIDWORD(v12[1]) = v2[8];
    LODWORD(v12[0]) = v2[5];
    HIDWORD(v12[3]) = v2[9];
    HIDWORD(v12[0]) = v2[6];
    LODWORD(v12[1]) = v2[7];
    if ( (_DWORD)v4 )
    {
      LODWORD(v12[3]) = v4;
      v12[2] = v2 + 12;
    }
    v2[4] = 0;
    ContextVirtual = DxgkCreateContextVirtual(v12);
    v10 = ContextVirtual;
    if ( ContextVirtual >= 0 )
    {
      v2[4] = v12[4];
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v2, v6);
      return 1;
    }
    v5 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v5 + 24) = v10;
    *(_QWORD *)(v5 + 32) = 4689LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 20);
    *(_QWORD *)(v5 + 32) = 4662LL;
  }
  WdLogEvent5_WdError(v5);
  return 0;
}
