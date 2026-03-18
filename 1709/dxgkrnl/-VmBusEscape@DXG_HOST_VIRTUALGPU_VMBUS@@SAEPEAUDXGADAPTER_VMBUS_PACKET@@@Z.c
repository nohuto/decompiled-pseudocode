/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193010
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  _DWORD *v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  void *v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 105LL) )
  {
    v4 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v4 + 24) = 2950LL;
    WdLogEvent5_WdWarning(v4);
  }
  else
  {
    v5 = (_DWORD *)*((_QWORD *)a1 + 9);
    v6 = (unsigned int)v5[10];
    if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 55 >= v6 )
    {
      v8 = v5[8];
      if ( !v8 || v8 == 8 )
      {
        memset(v15, 0, 0x20uLL);
        LODWORD(v15[0]) = v5[6];
        HIDWORD(v15[1]) = v5[9];
        HIDWORD(v15[0]) = v5[7];
        HIDWORD(v15[3]) = v5[11];
        v15[2] = v5 + 12;
        LODWORD(v15[1]) = v8;
        LODWORD(v15[3]) = v6;
        v11 = DxgkEscape((unsigned int *)v15, v9, v10);
        v13 = v11;
        if ( v11 >= 0 )
        {
          VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v15[2], (unsigned int)v15[3]);
          return 1;
        }
        v7 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v7 + 24) = v13;
      }
      else
      {
        v7 = WdLogNewEntry5_WdError(a1);
        *(_QWORD *)(v7 + 24) = (int)v5[8];
        *(_QWORD *)(v7 + 32) = 2968LL;
      }
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v7 + 24) = *((unsigned int *)a1 + 20);
    }
    WdLogEvent5_WdError(v7);
  }
  return 0;
}
