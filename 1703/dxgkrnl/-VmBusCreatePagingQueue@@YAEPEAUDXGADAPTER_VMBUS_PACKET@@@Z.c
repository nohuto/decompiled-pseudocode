/*
 * XREFs of ?VmBusCreatePagingQueue@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002BC0C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C00FC010 (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

unsigned __int8 __fastcall VmBusCreatePagingQueue(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rbx
  int PagingQueueInternal; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 9);
  PagingQueueInternal = DxgkCreatePagingQueueInternal((struct _D3DKMT_CREATEPAGINGQUEUE *)(v1 + 16), 0);
  v6 = PagingQueueInternal;
  if ( PagingQueueInternal < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = v6;
    WdLogEvent5_WdError(v9);
    return 0;
  }
  else
  {
    v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v10[0] = 0LL;
    v10[0] = *(_QWORD *)(v1 + 24);
    v10[2] = *(unsigned int *)(v1 + 32);
    v10[1] = *(_QWORD *)(v1 + 32);
    VmBusCompletePacket(v7, v10, 0x18u);
    return 1;
  }
}
