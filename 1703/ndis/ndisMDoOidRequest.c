/*
 * XREFs of ndisMDoOidRequest @ 0x1C000AB80
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A240 (ndisQueueOidRequest.c)
 *     ndisDoOidRequests @ 0x1C001E190 (ndisDoOidRequests.c)
 *     ndisMProcessDeferred @ 0x1C005FF14 (ndisMProcessDeferred.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000B560 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000BAF0 (ndisPreProcessOid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003CA88 (WPP_SF_qqDD.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     Template_jqxptqq @ 0x1C0045950 (Template_jqxptqq.c)
 *     Template_jqxqqq @ 0x1C0045A18 (Template_jqxqqq.c)
 *     WPP_SF_qqDDD @ 0x1C0045BF4 (WPP_SF_qqDDD.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00461C4 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestToRequest @ 0x1C00477EC (ndisMOidRequestToRequest.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006D794 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006DB18 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisClearBusy @ 0x1C006E7B8 (ndisClearBusy.c)
 *     ndisMInvokeOidRequest @ 0x1C00A5080 (ndisMInvokeOidRequest.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *v1; // r12
  _NDIS_OID_REQUEST *p_Blink; // rsi
  _LIST_ENTRY *Flink; // r14
  char v5; // di
  KIRQL v6; // r15
  unsigned int WSyncFlags; // r8d
  _LIST_ENTRY *p_OidRequestList; // rdx
  _LIST_ENTRY *v9; // rax
  __int64 v10; // r8
  unsigned int Oid; // r12d
  unsigned __int8 v12; // al
  int v13; // edx
  int v14; // ecx
  char v15; // di
  char v16; // r15
  KIRQL v17; // al
  bool v18; // zf
  KIRQL v19; // r15
  int v20; // edi
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int PnPFlags; // ecx
  int v23; // ecx
  unsigned __int64 *p_Lock; // rcx
  bool v25; // cf
  unsigned int Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v28; // ecx
  KIRQL v29; // al
  unsigned __int64 *p_PowerStateLock; // rcx
  _KEVENT *AllRequestsCompletedEvent; // rax
  _QWORD v32[6]; // [rsp+50h] [rbp-30h] BYREF
  int v33; // [rsp+C0h] [rbp+40h] BYREF
  struct _KEVENT *v34; // [rsp+C8h] [rbp+48h]

  v1 = 0LL;
  v34 = 0LL;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(25LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
  while ( 1 )
  {
    v33 = -1073741823;
    p_Blink = 0LL;
    Flink = 0LL;
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 2295596;
    if ( (WSyncFlags & 1) != 0 )
    {
      if ( (unsigned __int8)byte_1C0092612 >= 4u )
        WPP_SF_q(26LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
    }
    else
    {
      p_OidRequestList = &a1->OidRequestList;
      if ( p_OidRequestList->Flink == p_OidRequestList )
      {
        if ( (a1->PnPFlags & 0x20000) == 0 )
          goto LABEL_9;
      }
      else if ( (a1->PnPFlags & 0x20000) == 0 )
      {
        a1->WSyncFlags = WSyncFlags | 1;
        Flink = p_OidRequestList->Flink;
        v9 = p_OidRequestList->Flink->Flink;
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList || v9->Blink != Flink )
          __fastfail(3u);
        p_OidRequestList->Flink = v9;
        p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        v9->Blink = p_OidRequestList;
        a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        goto LABEL_9;
      }
      AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
      v5 = 1;
      if ( AllRequestsCompletedEvent )
      {
        a1->AllRequestsCompletedEvent = 0LL;
        v1 = AllRequestsCompletedEvent;
        v34 = AllRequestsCompletedEvent;
      }
    }
LABEL_9:
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v6);
    if ( v5 )
    {
      LOBYTE(v10) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v10);
    }
    if ( v1 )
    {
      KeSetEvent(v1, 0, 0);
      v34 = 0LL;
    }
    if ( !Flink )
      break;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qqd(
        27LL,
        &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids,
        a1,
        p_Blink,
        p_Blink->DATA.QUERY_INFORMATION.Oid);
    v12 = ndisPreProcessOid(a1, p_Blink, a1->Header.Type, &v33);
    v15 = v12;
    v16 = v33;
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qqDDD(28LL, v12, a1, p_Blink, Oid, v12, v33);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      Template_jqxptqq(
        v14,
        v13,
        (_DWORD)a1 + 4032,
        (_DWORD)a1 + 4032,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v15,
        v16,
        Oid);
    if ( v15 == 1 )
    {
      v1 = v34;
    }
    else
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v18 = (a1->Flags & 0x80000) == 0;
      v19 = v17;
      a1->MiniportThread = KeGetCurrentThread();
      v20 = 0;
      a1->LockDbg = 2295721;
      if ( !v18 )
      {
        v20 = -1073676275;
        goto LABEL_40;
      }
      RequestType = p_Blink->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v20 = -2147483633;
        goto LABEL_40;
      }
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x100) != 0 )
      {
        v20 = -1073676280;
        goto LABEL_40;
      }
      v23 = PnPFlags & 0x20000;
      if ( !v23 && ((unsigned int)(a1->DriverPowerState - 2) > 2 || p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855) )
      {
        ++a1->RequestCount;
        a1->PendingOidRequest = p_Blink;
        if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855 )
        {
          a1->MiniportThread = 0LL;
          a1->LockDbg = 0;
          KeReleaseSpinLock(&a1->Lock, v17);
          while ( 1 )
          {
            v29 = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
            p_PowerStateLock = &a1->PowerStateLock;
            if ( !a1->PendingReturnNBLCount )
              break;
            KeReleaseSpinLock(p_PowerStateLock, v29);
            NdisMSleep(0x32u);
          }
          a1->PrevDriverPowerState = a1->DriverPowerState;
          a1->DriverPowerState = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
          KeReleaseSpinLock(p_PowerStateLock, v19);
          v19 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
          a1->MiniportThread = KeGetCurrentThread();
          a1->LockDbg = 2295816;
        }
        if ( (a1->Flags & 0x20000) != 0 )
          LODWORD(Flink[1].Flink) |= 0x2000u;
        LODWORD(Flink[1].Flink) |= 0x10000u;
        p_Lock = &a1->Lock;
        v25 = a1->MajorNdisVersion < 6u;
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        if ( v25 )
        {
          KeReleaseSpinLockFromDpcLevel(p_Lock);
          v33 = ndisMOidRequestToRequest(a1, p_Blink);
          KeAcquireSpinLockAtDpcLevel(&a1->Lock);
          CurrentThread = KeGetCurrentThread();
          a1->LockDbg = 2295858;
        }
        else
        {
          KeReleaseSpinLock(p_Lock, v19);
          Flags = a1->Flags;
          if ( (Flags & 0x20000) != 0 )
          {
            v33 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
          }
          else
          {
            if ( a1->SelectiveSuspend )
            {
              if ( (Flags & 0x80u) == 0 )
                ndisWdmSetBusySync(a1, NdisBusyOid, Oid);
              else
                ndisWdfSetBusySync(a1, NdisBusyOid, Oid);
            }
            v33 = ndisMInvokeOidRequest(a1, p_Blink);
            if ( v33 != 259 && a1->SelectiveSuspend )
              ndisClearBusy(a1, 1LL, 33LL);
          }
          v19 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
          CurrentThread = KeGetCurrentThread();
          a1->LockDbg = 2295847;
        }
        --a1->RequestCount;
        v20 = v33;
        a1->MiniportThread = CurrentThread;
        if ( v20 != 259 )
        {
          p_Blink = a1->PendingOidRequest;
          a1->PendingOidRequest = 0LL;
        }
      }
      else
      {
        if ( (RequestType & 0xFFFFFFFD) == 0 )
        {
          p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
          goto LABEL_76;
        }
        if ( RequestType == NdisRequestSetInformation )
        {
          p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
          v20 = v23 != 0 ? -1073741823 : -1071448017;
          goto LABEL_40;
        }
        if ( RequestType == NdisRequestMethod )
        {
          p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
LABEL_76:
          v20 = -1073741823;
        }
      }
LABEL_40:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v19);
      v1 = v34;
      if ( v20 != 259 && p_Blink )
      {
        memset(v32, 0, sizeof(v32));
        if ( (unsigned __int8)byte_1C0092612 >= 4u )
          WPP_SF_qqDD(
            29LL,
            &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids,
            a1,
            p_Blink,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v20);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          Template_jqxqqq(
            v28,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4032,
            (_DWORD)a1 + 4032,
            a1->IfIndex,
            a1->NetLuid.Value,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v20,
            83);
        v32[4] = p_Blink;
        LODWORD(v32[5]) = v20;
        v32[0] = a1;
        ndisOidRequestComplete(v32);
      }
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_q(30LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
}
