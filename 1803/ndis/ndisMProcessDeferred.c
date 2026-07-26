/*
 * XREFs of ndisMProcessDeferred @ 0x1C006098C
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004CC50 (ndisMProcessSGListS.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057580 (ndisMSendPacketsToMiniport.c)
 *     NdisIMQueueMiniportCallback @ 0x1C005E650 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C005E7F0 (NdisIMRevertBack.c)
 *     ndisMReset @ 0x1C00610B0 (ndisMReset.c)
 *     ndisMDeferredDpc @ 0x1C0062F10 (ndisMDeferredDpc.c)
 *     ndisMDpc @ 0x1C0063004 (ndisMDpc.c)
 *     ndisMTimerDpc @ 0x1C0063460 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0063690 (ndisMWakeUpDpc.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000DFB0 (ndisMDoOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 *     ndisMDeferredReturnPackets @ 0x1C005FE58 (ndisMDeferredReturnPackets.c)
 *     ndisMProcessResetRequested @ 0x1C0060CF4 (ndisMProcessResetRequested.c)
 *     ndisMResetCompleteStage1 @ 0x1C0061418 (ndisMResetCompleteStage1.c)
 *     ndisMResetCompleteStage2 @ 0x1C00614CC (ndisMResetCompleteStage2.c)
 */

void __fastcall ndisMProcessDeferred(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _SINGLE_LIST_ENTRY *Next; // rcx
  char v6; // si
  _SINGLE_LIST_ENTRY *v7; // rcx
  _SINGLE_LIST_ENTRY *v8; // rcx
  _SINGLE_LIST_ENTRY *v9; // rbp
  _SINGLE_LIST_ENTRY *v10; // rsi
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  int v15; // eax
  char v16; // cl
  _SINGLE_LIST_ENTRY *v17; // rcx
  _SINGLE_LIST_ENTRY *v18; // rcx
  _SINGLE_LIST_ENTRY *v19; // rcx
  char v20; // [rsp+60h] [rbp+8h]

  v20 = 0;
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_q(0x32u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1);
  while ( 1 )
  {
    Next = a1->WorkQueue[1].Next;
    v6 = 0;
    if ( Next && (a1->Flags & 0x80300000) == 0 )
    {
      a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
      Next->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
      a1->SingleWorkItems[1].Next = Next;
      a1->DeferredSendHandler(a1);
      v6 = 1;
    }
    if ( a1->WorkQueue[4].Next )
      break;
    v7 = a1->WorkQueue[2].Next;
    if ( v7 )
    {
      a1->WorkQueue[2] = (_SINGLE_LIST_ENTRY)v7->Next;
      v7->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[2];
      a1->SingleWorkItems[2].Next = v7;
      ndisMDeferredReturnPackets((__int64)a1);
    }
    if ( (a1->Flags & 0x80000000) != 0 )
    {
      if ( (unsigned __int8)byte_1C0099613 >= 4u )
        WPP_SF_q(0x33u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        McTemplateK0jqxq(
          (__int64)v7,
          &NotifyMiniportAction,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          0);
      goto LABEL_41;
    }
    v8 = a1->WorkQueue[6].Next;
    if ( v8 )
    {
      a1->WorkQueue[6] = (_SINGLE_LIST_ENTRY)v8->Next;
      v9 = v8[2].Next;
      v10 = v8[3].Next;
      ExFreePoolWithTag(v8, 0);
      if ( v10 )
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&a1->Lock);
        ((void (__fastcall *)(void *, _SINGLE_LIST_ENTRY *))v10)(a1->MiniportAdapterContext, v9);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 724497;
      }
      v6 = 1;
    }
    if ( a1->WorkQueue[3].Next )
    {
      if ( (unsigned __int8)byte_1C0099613 >= 4u )
        WPP_SF_q(0x34u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        McTemplateK0jqxq(
          (__int64)v8,
          &NotifyMiniportAction,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1);
      v11 = ndisMProcessResetRequested(a1);
      v14 = v11;
      if ( v11 == 259 )
      {
        if ( (unsigned __int8)byte_1C0099613 >= 4u )
          WPP_SF_q(0x35u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
          McTemplateK0jqxq(
            v12,
            &NotifyMiniportAction,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2);
        goto LABEL_41;
      }
      LOBYTE(v13) = v20;
      v15 = ndisMResetCompleteStage1(a1, v11, v13);
      v16 = v20;
      if ( v15 )
        v16 = 0;
      v20 = v16;
      if ( !v16 || v14 )
      {
        ndisMResetCompleteStage2(a1);
        goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      v17 = a1->WorkQueue[0].Next;
      if ( v17 )
      {
        a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v17->Next;
        v17->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
        a1->SingleWorkItems[0].Next = v17;
        ndisMDoOidRequest(a1, a2, a3, a4);
        v6 = 1;
      }
      v18 = a1->WorkQueue[1].Next;
      if ( v18 )
      {
        a1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)v18->Next;
        v18->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[1];
        a1->SingleWorkItems[1].Next = v18;
        a1->DeferredSendHandler(a1);
        v6 = 1;
      }
      if ( !v6 )
        goto LABEL_41;
    }
  }
  v19 = a1->WorkQueue[0].Next;
  if ( v19 )
  {
    a1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v19->Next;
    v19->Next = (_SINGLE_LIST_ENTRY *)a1->SingleWorkItems[0];
    a1->SingleWorkItems[0].Next = v19;
    ndisMDoOidRequest(a1, a2, a3, a4);
  }
LABEL_41:
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_q(0x36u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, (__int64)a1);
}
