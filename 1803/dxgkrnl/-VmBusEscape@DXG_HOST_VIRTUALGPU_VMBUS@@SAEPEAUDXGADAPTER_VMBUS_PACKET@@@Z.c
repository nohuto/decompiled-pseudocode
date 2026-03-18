/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F120
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(
        struct VMBPACKETCOMPLETION__ **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  const void *v17[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)a1[5] + 113) )
  {
    v4 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v4 + 24) = 3384LL;
    WdLogEvent5_WdWarning(v4);
  }
  else
  {
    v5 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
    v7 = (_DWORD *)v5;
    if ( v5 )
    {
      v8 = *(unsigned int *)(v5 + 40);
      if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 55 >= v8 )
      {
        v10 = *(_DWORD *)(v5 + 32);
        if ( !v10 || v10 == 8 )
        {
          memset(v17, 0, 0x20uLL);
          LODWORD(v17[0]) = v7[6];
          HIDWORD(v17[1]) = v7[9];
          HIDWORD(v17[0]) = v7[7];
          HIDWORD(v17[3]) = v7[11];
          v17[2] = v7 + 12;
          LODWORD(v17[1]) = v10;
          LODWORD(v17[3]) = v8;
          v13 = DxgkEscape(v17, v11, v12);
          v15 = v13;
          if ( v13 >= 0 )
          {
            VmBusCompletePacket(a1[8], (void *)v17[2], (unsigned int)v17[3]);
            return 1;
          }
          v9 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v9 + 24) = v15;
        }
        else
        {
          v9 = WdLogNewEntry5_WdError(v6);
          *(_QWORD *)(v9 + 24) = (int)v7[8];
          *(_QWORD *)(v9 + 32) = 3402LL;
        }
      }
      else
      {
        v9 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v9 + 24) = *((unsigned int *)a1 + 20);
      }
      WdLogEvent5_WdError(v9);
    }
  }
  return 0;
}
