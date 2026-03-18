/*
 * XREFs of ?VmBusEscape@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D280
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 */

unsigned __int8 __fastcall VmBusEscape(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  _DWORD *v2; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  void *v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (_DWORD *)*((_QWORD *)a1 + 9);
  v4 = (unsigned int)v2[8];
  if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 47 >= v4 )
  {
    memset(v11, 0, 0x20uLL);
    LODWORD(v11[0]) = v2[4];
    HIDWORD(v11[1]) = v2[7];
    HIDWORD(v11[0]) = v2[5];
    HIDWORD(v11[3]) = v2[9];
    LODWORD(v11[1]) = v2[6];
    v11[2] = v2 + 10;
    LODWORD(v11[3]) = v4;
    v6 = DxgkEscape(v11);
    v9 = v6;
    if ( v6 >= 0 )
    {
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v11[2], (unsigned int)v11[3]);
      return 1;
    }
    v5 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v5 + 24) = v9;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = *((unsigned int *)a1 + 20);
  }
  WdLogEvent5_WdError(v5);
  return 0;
}
