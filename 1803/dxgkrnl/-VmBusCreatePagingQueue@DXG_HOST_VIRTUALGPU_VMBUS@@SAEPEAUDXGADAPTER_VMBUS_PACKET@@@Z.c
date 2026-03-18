/*
 * XREFs of ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017DFC0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D40C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00A101C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreatePagingQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  int PagingQueueInternal; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-28h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU>((__int64)a1);
  v4 = v2;
  if ( v2 )
  {
    PagingQueueInternal = DxgkCreatePagingQueueInternal((struct _D3DKMT_CREATEPAGINGQUEUE *)(v2 + 24), 0, v3);
    v7 = PagingQueueInternal;
    if ( PagingQueueInternal >= 0 )
    {
      v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
      v11[0] = 0LL;
      v11[0] = *(_QWORD *)(v4 + 32);
      v11[2] = *(unsigned int *)(v4 + 40);
      v11[1] = *(_QWORD *)(v4 + 40);
      VmBusCompletePacket(v8, v11, 0x18u);
      return 1;
    }
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = v7;
    WdLogEvent5_WdError(v10);
  }
  return 0;
}
