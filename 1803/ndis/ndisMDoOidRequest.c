/*
 * XREFs of ndisMDoOidRequest @ 0x1C000DFB0
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000C3B0 (ndisQueueOidRequest.c)
 *     ndisDoOidRequests @ 0x1C001F670 (ndisDoOidRequests.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 *     ndisPmInitializeMiniport @ 0x1C010FEDC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000D290 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000D870 (ndisPreProcessOid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C003A8FC (WPP_SF_qqDD.c)
 *     McTemplateK0jqxptqq @ 0x1C0043424 (McTemplateK0jqxptqq.c)
 *     McTemplateK0jqxqqq @ 0x1C00434E4 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqDDD @ 0x1C0043E80 (WPP_SF_qqDDD.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00444B0 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestToRequest @ 0x1C0045DD4 (ndisMOidRequestToRequest.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006F6C0 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006FA44 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisClearBusy @ 0x1C0070730 (ndisClearBusy.c)
 *     ndisMInvokeOidRequest @ 0x1C00AEFF0 (ndisMInvokeOidRequest.c)
 *     NdisMSleep @ 0x1C00C8450 (NdisMSleep.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KEVENT *AllRequestsCompletedEvent; // r14
  _NDIS_OID_REQUEST *p_Blink; // r15
  _LIST_ENTRY *Flink; // rdi
  char v8; // si
  KIRQL v9; // bp
  __int64 v10; // r9
  unsigned int WSyncFlags; // r8d
  _LIST_ENTRY *p_OidRequestList; // rdx
  _LIST_ENTRY *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int Oid; // r13d
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  int v19; // ecx
  unsigned __int8 v20; // si
  char v21; // bp
  char v22; // r14
  KIRQL v23; // al
  bool v24; // zf
  KIRQL v25; // bp
  unsigned int v26; // esi
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int PnPFlags; // ecx
  int v29; // ecx
  int v30; // ecx
  unsigned __int64 *p_Lock; // rcx
  unsigned int Flags; // eax
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  KIRQL i; // al
  __int64 v37; // [rsp+20h] [rbp-98h]
  __int64 v38[13]; // [rsp+50h] [rbp-68h] BYREF
  int v39; // [rsp+C0h] [rbp+8h] BYREF
  struct _KEVENT *v40; // [rsp+C8h] [rbp+10h]

  AllRequestsCompletedEvent = 0LL;
  v40 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(25LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a4);
  while ( 1 )
  {
    v39 = -1073741823;
    p_Blink = 0LL;
    Flink = 0LL;
    v8 = 0;
    v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 2295622;
    if ( (WSyncFlags & 1) != 0 )
    {
      if ( (unsigned __int8)byte_1C0099612 >= 4u )
        WPP_SF_q(26LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v10);
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
        if ( p_OidRequestList->Flink->Blink != p_OidRequestList || (v13 = Flink->Flink, Flink->Flink->Blink != Flink) )
          __fastfail(3u);
        p_OidRequestList->Flink = v13;
        p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        v13->Blink = p_OidRequestList;
        a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
        goto LABEL_9;
      }
      v8 = 1;
      if ( a1->AllRequestsCompletedEvent )
      {
        AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
        v40 = AllRequestsCompletedEvent;
        a1->AllRequestsCompletedEvent = 0LL;
      }
    }
LABEL_9:
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v9);
    if ( v8 )
    {
      LOBYTE(v14) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v14);
    }
    if ( AllRequestsCompletedEvent )
    {
      KeSetEvent(AllRequestsCompletedEvent, 0, 0);
      v40 = 0LL;
    }
    if ( !Flink )
      break;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qqd(
        27LL,
        &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids,
        a1,
        p_Blink,
        p_Blink->DATA.QUERY_INFORMATION.Oid);
    v17 = ndisPreProcessOid((__int64)a1, (__int64)p_Blink, a1->Header.Type, (unsigned int *)&v39);
    v20 = v17;
    v21 = v17;
    v22 = v39;
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
    {
      LODWORD(v37) = Oid;
      WPP_SF_qqDDD(28LL, v18, a1, p_Blink, v37, v17, v39);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      McTemplateK0jqxptqq(
        v19,
        v18,
        (_DWORD)a1 + 4032,
        (_DWORD)a1 + 4032,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v21,
        v22,
        Oid);
    AllRequestsCompletedEvent = v40;
    if ( v20 != 1 )
    {
      v23 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v24 = (a1->Flags & 0x80000) == 0;
      v25 = v23;
      a1->MiniportThread = KeGetCurrentThread();
      v26 = 0;
      a1->LockDbg = 2295747;
      if ( !v24 )
      {
        v26 = -1073676275;
        goto LABEL_40;
      }
      RequestType = p_Blink->RequestType;
      if ( RequestType == NdisRequestQueryStatistics
        && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
      {
        v26 = -2147483633;
        goto LABEL_40;
      }
      PnPFlags = a1->PnPFlags;
      if ( (PnPFlags & 0x100) != 0 )
      {
        v26 = -1073676280;
        goto LABEL_40;
      }
      v29 = PnPFlags & 0x20000;
      if ( v29 || (unsigned int)(a1->DriverPowerState - 2) <= 2 && p_Blink->DATA.QUERY_INFORMATION.Oid != -50265855 )
      {
        if ( (RequestType & 0xFFFFFFFD) != 0 )
        {
          if ( RequestType == NdisRequestSetInformation )
          {
            v26 = -1071448017;
            if ( v29 )
              v26 = -1073741823;
            p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
            goto LABEL_40;
          }
          if ( RequestType != NdisRequestMethod )
            goto LABEL_40;
          p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
        }
        else
        {
          p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
        }
        v26 = -1073741823;
        goto LABEL_40;
      }
      ++a1->RequestCount;
      a1->PendingOidRequest = p_Blink;
      if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855 )
      {
        a1->MiniportThread = 0LL;
        a1->LockDbg = 0;
        KeReleaseSpinLock(&a1->Lock, v23);
        for ( i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
              a1->PendingReturnNBLCount;
              i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock) )
        {
          KeReleaseSpinLock(&a1->PowerStateLock, i);
          NdisMSleep(0x32u);
        }
        a1->PrevDriverPowerState = a1->DriverPowerState;
        a1->DriverPowerState = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
        KeReleaseSpinLock(&a1->PowerStateLock, v25);
        v25 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        a1->LockDbg = 2295842;
      }
      v30 = (int)Flink[1].Flink;
      if ( (a1->Flags & 0x20000) != 0 )
      {
        v30 |= 0x2000u;
        LODWORD(Flink[1].Flink) = v30;
      }
      LODWORD(Flink[1].Flink) = v30 | 0x10000;
      p_Lock = &a1->Lock;
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      if ( a1->MajorNdisVersion < 6u )
      {
        KeReleaseSpinLockFromDpcLevel(p_Lock);
        v39 = ndisMOidRequestToRequest(a1, p_Blink);
        KeAcquireSpinLockAtDpcLevel(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        v33 = 2295884;
      }
      else
      {
        KeReleaseSpinLock(p_Lock, v25);
        Flags = a1->Flags;
        if ( (Flags & 0x20000) != 0 )
        {
          v39 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
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
          v39 = ndisMInvokeOidRequest(a1, p_Blink);
          if ( v39 != 259 && a1->SelectiveSuspend )
            ndisClearBusy(a1, 1LL, 33LL);
        }
        v25 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
        a1->MiniportThread = KeGetCurrentThread();
        v33 = 2295873;
      }
      a1->LockDbg = v33;
      --a1->RequestCount;
      v26 = v39;
      if ( v39 != 259 )
      {
        p_Blink = a1->PendingOidRequest;
        a1->PendingOidRequest = 0LL;
      }
LABEL_40:
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v25);
      AllRequestsCompletedEvent = v40;
      if ( v26 != 259 && p_Blink )
      {
        memset(v38, 0, 0x30uLL);
        if ( (unsigned __int8)byte_1C0099612 >= 4u )
          WPP_SF_qqDD(
            29LL,
            &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids,
            a1,
            p_Blink,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v26);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          McTemplateK0jqxqqq(
            v35,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4032,
            (_DWORD)a1 + 4032,
            a1->IfIndex,
            a1->NetLuid.Value,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v26,
            109);
        v38[4] = (__int64)p_Blink;
        LODWORD(v38[5]) = v26;
        v38[0] = (__int64)a1;
        ndisOidRequestComplete(v38, v34);
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(30LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v15);
}
