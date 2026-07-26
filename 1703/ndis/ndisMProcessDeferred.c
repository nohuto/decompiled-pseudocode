/*
 * XREFs of ndisMProcessDeferred @ 0x1C005FF14
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004E170 (ndisMProcessSGListS.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057A90 (ndisMSendPacketsToMiniport.c)
 *     NdisIMQueueMiniportCallback @ 0x1C005DEA0 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C005E030 (NdisIMRevertBack.c)
 *     ndisMReset @ 0x1C0060660 (ndisMReset.c)
 *     ndisMDeferredDpc @ 0x1C0061F20 (ndisMDeferredDpc.c)
 *     ndisMDpc @ 0x1C006200C (ndisMDpc.c)
 *     ndisMTimerDpc @ 0x1C0062460 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0062680 (ndisMWakeUpDpc.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000AB80 (ndisMDoOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 *     ndisMDeferredReturnPackets @ 0x1C005F5E4 (ndisMDeferredReturnPackets.c)
 *     ndisMProcessResetRequested @ 0x1C00602AC (ndisMProcessResetRequested.c)
 *     ndisMResetCompleteStage1 @ 0x1C00609C0 (ndisMResetCompleteStage1.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060A74 (ndisMResetCompleteStage2.c)
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
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_q(0x2Eu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
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
      if ( (unsigned __int8)byte_1C0092613 >= 4u )
        WPP_SF_q(0x2Fu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jqxq(
          a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (unsigned __int64)&v1->InterfaceGuid,
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
          v1->LockDbg = 724396;
        }
      }
      v2 = 1;
    }
    if ( v1->WorkQueue[3].Next )
    {
      if ( (unsigned __int8)byte_1C0092613 >= 4u )
        WPP_SF_q(0x30u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)v1);
      if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
        Template_jqxq(
          a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (unsigned __int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          1);
      v7 = ndisMProcessResetRequested(v1);
      v10 = v7;
      if ( v7 == 259 )
      {
        if ( (unsigned __int8)byte_1C0092613 >= 4u )
          WPP_SF_q(0x31u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)v1);
        if ( (Microsoft_Windows_NDISEnableBits & 0x1000000) != 0 )
          Template_jqxq(
            v8,
            &NotifyMiniportAction,
            &v1->InterfaceGuid,
            (unsigned __int64)&v1->InterfaceGuid,
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
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_q(0x32u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, (__int64)v1);
}
