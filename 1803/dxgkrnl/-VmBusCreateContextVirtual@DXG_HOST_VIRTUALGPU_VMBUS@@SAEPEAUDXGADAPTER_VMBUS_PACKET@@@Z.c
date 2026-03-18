/*
 * XREFs of ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D8C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C00A12D8 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateContextVirtual(struct VMBPACKETCOMPLETION__ **a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // ebp
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  _D3DKMT_CREATECONTEXTVIRTUAL v13; // [rsp+20h] [rbp-38h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v4 = v2;
  if ( v2 )
  {
    v5 = *(unsigned int *)(v2 + 48);
    if ( (unsigned __int64)*((unsigned int *)a1 + 20) - 55 >= v5 )
    {
      v7 = v5 + 55;
      memset(&v13, 0, sizeof(v13));
      v13.Flags.Value = *(_DWORD *)(v4 + 40);
      v13.hDevice = *(_DWORD *)(v4 + 28);
      v13.ClientHint = *(_DWORD *)(v4 + 44);
      v13.NodeOrdinal = *(_DWORD *)(v4 + 32);
      v13.EngineAffinity = *(_DWORD *)(v4 + 36);
      if ( (_DWORD)v5 )
      {
        v13.PrivateDriverDataSize = v5;
        v13.pPrivateDriverData = (void *)(v4 + 52);
      }
      *(_DWORD *)(v4 + 24) = 0;
      v9 = DxgkCreateContextVirtualImpl(&v13, 0, v8);
      v11 = v9;
      if ( v9 >= 0 )
      {
        *(_DWORD *)(v4 + 24) = v13.hContext;
        VmBusCompletePacket(a1[8], (void *)v4, v7);
        return 1;
      }
      v6 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v6 + 24) = v11;
      *(_QWORD *)(v6 + 32) = 711LL;
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v3);
      *(_QWORD *)(v6 + 24) = *((unsigned int *)a1 + 20);
      *(_QWORD *)(v6 + 32) = 684LL;
    }
    WdLogEvent5_WdError(v6);
  }
  return 0;
}
