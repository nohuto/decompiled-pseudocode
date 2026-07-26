/*
 * XREFs of ndisMProcessDeferred @ 0x1C005FF50
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004BCC0 (ndisMProcessSGListS.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056BE0 (ndisMSendPacketsToMiniport.c)
 *     NdisIMQueueMiniportCallback @ 0x1C005DC60 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C005DDF0 (NdisIMRevertBack.c)
 *     ndisMReset @ 0x1C00606A0 (ndisMReset.c)
 *     ndisMDeferredDpc @ 0x1C0062410 (ndisMDeferredDpc.c)
 *     ndisMDpc @ 0x1C00624FC (ndisMDpc.c)
 *     ndisMTimerDpc @ 0x1C0062950 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0062B70 (ndisMWakeUpDpc.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000D160 (ndisMDoOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 *     ndisMDeferredReturnPackets @ 0x1C005F39C (ndisMDeferredReturnPackets.c)
 *     ndisMProcessResetRequested @ 0x1C00602E8 (ndisMProcessResetRequested.c)
 *     ndisMResetCompleteStage1 @ 0x1C0060A00 (ndisMResetCompleteStage1.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060AB4 (ndisMResetCompleteStage2.c)
 */

void __fastcall ndisMProcessDeferred(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  char v2; // bl
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v4; // rcx
  _NDIS_MINIPORT_BLOCK *v5; // rbp
  void (__fastcall *v6)(void *, _NDIS_MINIPORT_BLOCK *); // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // esi
  int v11; // eax
  _SINGLE_LIST_ENTRY *v12; // rcx
  _SINGLE_LIST_ENTRY *v13; // rcx
  _SINGLE_LIST_ENTRY *v14; // rcx
  unsigned __int8 v15; // [rsp+60h] [rbp+8h]

  v1 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  v15 = 0;
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_q(0x2Fu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  while ( 1 )
  {
    v2 = 0;
    if ( v1->WorkQueue[1].Next && (v1->Flags & 0x80300000) == 0 )
    {
      Next = v1->WorkQueue[1].Next;
      if ( Next )
      {
        v1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)Next->Next;
        Next->Next = (_SINGLE_LIST_ENTRY *)v1->SingleWorkItems[1];
        v1->SingleWorkItems[1].Next = Next;
      }
      v1->DeferredSendHandler(v1);
      v2 = 1;
    }
    if ( v1->WorkQueue[4].Next )
      break;
    if ( v1->WorkQueue[2].Next )
    {
      v4 = v1->WorkQueue[2].Next;
      if ( v4 )
      {
        v1->WorkQueue[2] = (_SINGLE_LIST_ENTRY)v4->Next;
        v4->Next = (_SINGLE_LIST_ENTRY *)v1->SingleWorkItems[2];
        v1->SingleWorkItems[2].Next = v4;
      }
      ndisMDeferredReturnPackets((__int64)v1);
    }
    if ( (v1->Flags & 0x80000000) != 0 )
    {
      if ( (unsigned __int8)byte_1C0098753 >= 4u )
        WPP_SF_q(0x30u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        McTemplateK0jqxq(
          a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          0);
      goto LABEL_52;
    }
    if ( v1->WorkQueue[6].Next )
    {
      a1 = (__int64)v1->WorkQueue[6].Next;
      if ( a1 )
      {
        v1->WorkQueue[6].Next = *(_SINGLE_LIST_ENTRY **)a1;
        v5 = *(_NDIS_MINIPORT_BLOCK **)(a1 + 16);
        v6 = *(void (__fastcall **)(void *, _NDIS_MINIPORT_BLOCK *))(a1 + 24);
        ExFreePoolWithTag((PVOID)a1, 0);
        if ( v6 )
        {
          v1->MiniportThread = 0LL;
          v1->LockDbg = 0;
          KeReleaseSpinLockFromDpcLevel(&v1->Lock);
          v6(v1->MiniportAdapterContext, v5);
          KeAcquireSpinLockAtDpcLevel(&v1->Lock);
          v1->MiniportThread = KeGetCurrentThread();
          v1->LockDbg = 724389;
        }
      }
      v2 = 1;
    }
    if ( v1->WorkQueue[3].Next )
    {
      if ( (unsigned __int8)byte_1C0098753 >= 4u )
        WPP_SF_q(0x31u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        McTemplateK0jqxq(
          a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          1);
      v7 = ndisMProcessResetRequested(v1);
      v10 = v7;
      if ( v7 == 259 )
      {
        if ( (unsigned __int8)byte_1C0098753 >= 4u )
          WPP_SF_q(0x32u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)v1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
          McTemplateK0jqxq(
            v8,
            &NotifyMiniportAction,
            &v1->InterfaceGuid,
            (__int64)&v1->InterfaceGuid,
            v1->IfIndex,
            v1->NetLuid.Value,
            2);
        goto LABEL_52;
      }
      LOBYTE(v9) = v15;
      v11 = ndisMResetCompleteStage1(v1, v7, v9);
      a1 = v15;
      if ( v11 )
        a1 = 0LL;
      v15 = a1;
      if ( !(_BYTE)a1 || v10 )
      {
        ndisMResetCompleteStage2(v1);
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      if ( v1->WorkQueue[0].Next )
      {
        v12 = v1->WorkQueue[0].Next;
        if ( v12 )
        {
          v1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v12->Next;
          v12->Next = (_SINGLE_LIST_ENTRY *)v1->SingleWorkItems[0];
          v1->SingleWorkItems[0].Next = v12;
        }
        ndisMDoOidRequest(v1);
        v2 = 1;
      }
      if ( v1->WorkQueue[1].Next )
      {
        v13 = v1->WorkQueue[1].Next;
        if ( v13 )
        {
          v1->WorkQueue[1] = (_SINGLE_LIST_ENTRY)v13->Next;
          v13->Next = (_SINGLE_LIST_ENTRY *)v1->SingleWorkItems[1];
          v1->SingleWorkItems[1].Next = v13;
        }
        v1->DeferredSendHandler(v1);
        v2 = 1;
      }
      if ( !v2 )
        goto LABEL_52;
    }
  }
  if ( v1->WorkQueue[0].Next )
  {
    v14 = v1->WorkQueue[0].Next;
    if ( v14 )
    {
      v1->WorkQueue[0] = (_SINGLE_LIST_ENTRY)v14->Next;
      v14->Next = (_SINGLE_LIST_ENTRY *)v1->SingleWorkItems[0];
      v1->SingleWorkItems[0].Next = v14;
    }
    ndisMDoOidRequest(v1);
  }
LABEL_52:
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_q(0x33u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, (__int64)v1);
}
