/*
 * XREFs of ?VmBusCreatePagingQueue@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01921E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z @ 0x1C009177C (-DxgkCreatePagingQueueInternal@@YAJPEAU_D3DKMT_CREATEPAGINGQUEUE@@H@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreatePagingQueue(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  int PagingQueueInternal; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  struct VMBPACKETCOMPLETION__ *v8; // rcx
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 9);
  PagingQueueInternal = DxgkCreatePagingQueueInternal((struct _D3DKMT_CREATEPAGINGQUEUE *)(v3 + 24), 0, a3);
  v7 = PagingQueueInternal;
  if ( PagingQueueInternal < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = v7;
    WdLogEvent5_WdError(v10);
    return 0;
  }
  else
  {
    v8 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 8);
    v11[0] = 0LL;
    v11[0] = *(_QWORD *)(v3 + 32);
    v11[2] = *(unsigned int *)(v3 + 40);
    v11[1] = *(_QWORD *)(v3 + 40);
    VmBusCompletePacket(v8, v11, 0x18u);
    return 1;
  }
}
