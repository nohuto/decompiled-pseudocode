/*
 * XREFs of ndisMDoOidRequest @ 0x1C000D160
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000B550 (ndisQueueOidRequest.c)
 *     ndisDoOidRequests @ 0x1C001A290 (ndisDoOidRequests.c)
 *     ndisMProcessDeferred @ 0x1C005FF50 (ndisMProcessDeferred.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisOidRequestComplete @ 0x1C000C470 (ndisOidRequestComplete.c)
 *     ndisPreProcessOid @ 0x1C000CA90 (ndisPreProcessOid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqDD @ 0x1C0039564 (WPP_SF_qqDD.c)
 *     McTemplateK0jqxptqq @ 0x1C00423B8 (McTemplateK0jqxptqq.c)
 *     McTemplateK0jqxqqq @ 0x1C0042478 (McTemplateK0jqxqqq.c)
 *     WPP_SF_qqDDD @ 0x1C0042D94 (WPP_SF_qqDDD.c)
 *     ndisCancelOidRequestOnMiniport @ 0x1C00433C4 (ndisCancelOidRequestOnMiniport.c)
 *     ndisMOidRequestToRequest @ 0x1C0044C04 (ndisMOidRequestToRequest.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006EE2C (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C006F1B0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 *     ndisMInvokeOidRequest @ 0x1C00B9A74 (ndisMInvokeOidRequest.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 */

void __fastcall ndisMDoOidRequest(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _KEVENT *AllRequestsCompletedEvent; // r13
  _NDIS_OID_REQUEST *p_Blink; // r14
  _LIST_ENTRY *Flink; // rdi
  char v5; // si
  KIRQL v6; // bp
  unsigned int WSyncFlags; // r8d
  _LIST_ENTRY *p_OidRequestList; // rdx
  __int64 v9; // r8
  unsigned int Oid; // r12d
  unsigned __int8 v11; // al
  int v12; // edx
  int v13; // ecx
  char v14; // si
  char v15; // bp
  KIRQL v16; // al
  bool v17; // zf
  KIRQL v18; // bp
  unsigned int v19; // esi
  NDIS_REQUEST_TYPE RequestType; // edx
  unsigned int PnPFlags; // ecx
  int v22; // ecx
  unsigned __int64 *p_Lock; // rcx
  unsigned int Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rdx
  int v27; // ecx
  _LIST_ENTRY *v28; // rax
  KIRQL i; // al
  __int64 v30; // [rsp+20h] [rbp-88h]
  _QWORD v31[6]; // [rsp+50h] [rbp-58h] BYREF
  int v32; // [rsp+B0h] [rbp+8h] BYREF

  AllRequestsCompletedEvent = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(25LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1);
  while ( 1 )
  {
    v32 = -1073741823;
    p_Blink = 0LL;
    Flink = 0LL;
    v5 = 0;
    v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    WSyncFlags = a1->WSyncFlags;
    a1->MiniportThread = KeGetCurrentThread();
    a1->LockDbg = 2295622;
    if ( (WSyncFlags & 1) != 0 )
    {
      if ( (unsigned __int8)byte_1C0098752 >= 4u )
        WPP_SF_q(26LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1);
    }
    else
    {
      p_OidRequestList = &a1->OidRequestList;
      if ( p_OidRequestList->Flink == p_OidRequestList )
      {
        if ( (a1->PnPFlags & 0x20000) == 0 )
          goto LABEL_6;
LABEL_57:
        v5 = 1;
        if ( a1->AllRequestsCompletedEvent )
        {
          AllRequestsCompletedEvent = a1->AllRequestsCompletedEvent;
          a1->AllRequestsCompletedEvent = 0LL;
        }
        goto LABEL_6;
      }
      if ( (a1->PnPFlags & 0x20000) != 0 )
        goto LABEL_57;
      a1->WSyncFlags = WSyncFlags | 1;
      Flink = p_OidRequestList->Flink;
      if ( p_OidRequestList->Flink->Blink != p_OidRequestList || (v28 = Flink->Flink, Flink->Flink->Blink != Flink) )
        __fastfail(3u);
      p_OidRequestList->Flink = v28;
      p_Blink = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
      v28->Blink = p_OidRequestList;
      a1->ProcessedOidRequest = (_NDIS_OID_REQUEST *)&Flink[-5].Blink;
    }
LABEL_6:
    a1->MiniportThread = 0LL;
    a1->LockDbg = 0;
    KeReleaseSpinLock(&a1->Lock, v6);
    if ( v5 )
    {
      LOBYTE(v9) = 1;
      ndisCancelOidRequestOnMiniport(a1, 0LL, v9);
    }
    if ( AllRequestsCompletedEvent )
    {
      KeSetEvent(AllRequestsCompletedEvent, 0, 0);
      AllRequestsCompletedEvent = 0LL;
    }
    if ( !Flink )
      break;
    Oid = p_Blink->DATA.QUERY_INFORMATION.Oid;
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qqd(
        27LL,
        &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids,
        a1,
        p_Blink,
        p_Blink->DATA.QUERY_INFORMATION.Oid);
    v11 = ndisPreProcessOid((__int64)a1, (__int64)p_Blink, a1->Header.Type, (unsigned int *)&v32);
    v14 = v11;
    v15 = v32;
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
    {
      LODWORD(v30) = Oid;
      WPP_SF_qqDDD(28LL, v11, a1, p_Blink, v30, v11, v32);
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
      McTemplateK0jqxptqq(
        v13,
        v12,
        (_DWORD)a1 + 4032,
        (_DWORD)a1 + 4032,
        a1->IfIndex,
        a1->NetLuid.Value,
        (char)p_Blink,
        v14,
        v15,
        Oid);
    if ( v14 != 1 )
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      v17 = (a1->Flags & 0x80000) == 0;
      v18 = v16;
      a1->MiniportThread = KeGetCurrentThread();
      v19 = 0;
      a1->LockDbg = 2295747;
      if ( v17 )
      {
        RequestType = p_Blink->RequestType;
        if ( RequestType == NdisRequestQueryStatistics
          && ((a1->PnPFlags & 0x800) != 0 || a1->CurrentDevicePowerState > PowerDeviceD0) )
        {
          v19 = -2147483633;
        }
        else
        {
          PnPFlags = a1->PnPFlags;
          if ( (PnPFlags & 0x100) != 0 )
          {
            v19 = -1073676280;
          }
          else
          {
            v22 = PnPFlags & 0x20000;
            if ( !v22
              && ((unsigned int)(a1->DriverPowerState - 2) > 2 || p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855) )
            {
              ++a1->RequestCount;
              a1->PendingOidRequest = p_Blink;
              if ( p_Blink->DATA.QUERY_INFORMATION.Oid == -50265855 )
              {
                a1->MiniportThread = 0LL;
                a1->LockDbg = 0;
                KeReleaseSpinLock(&a1->Lock, v16);
                for ( i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock);
                      a1->PendingReturnNBLCount;
                      i = KeAcquireSpinLockRaiseToDpc(&a1->PowerStateLock) )
                {
                  KeReleaseSpinLock(&a1->PowerStateLock, i);
                  NdisMSleep(0x32u);
                }
                a1->PrevDriverPowerState = a1->DriverPowerState;
                a1->DriverPowerState = *(_DWORD *)p_Blink->DATA.QUERY_INFORMATION.InformationBuffer;
                KeReleaseSpinLock(&a1->PowerStateLock, v18);
                v18 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
                a1->MiniportThread = KeGetCurrentThread();
                a1->LockDbg = 2295842;
              }
              if ( (a1->Flags & 0x20000) != 0 )
                LODWORD(Flink[1].Flink) |= 0x2000u;
              LODWORD(Flink[1].Flink) |= 0x10000u;
              p_Lock = &a1->Lock;
              if ( a1->MajorNdisVersion < 6u )
              {
                a1->MiniportThread = 0LL;
                a1->LockDbg = 0;
                KeReleaseSpinLockFromDpcLevel(p_Lock);
                v32 = ndisMOidRequestToRequest(a1, p_Blink);
                KeAcquireSpinLockAtDpcLevel(&a1->Lock);
                CurrentThread = KeGetCurrentThread();
                a1->LockDbg = 2295884;
              }
              else
              {
                a1->MiniportThread = 0LL;
                a1->LockDbg = 0;
                KeReleaseSpinLock(p_Lock, v18);
                Flags = a1->Flags;
                if ( (Flags & 0x20000) != 0 )
                {
                  v32 = a1->DriverHandle->CoOidRequestHandler(a1->MiniportAdapterContext, 0LL, p_Blink);
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
                  v32 = ndisMInvokeOidRequest(a1, p_Blink);
                  if ( v32 != 259 && a1->SelectiveSuspend )
                    ndisClearBusy(a1, 1LL, 33LL);
                }
                v18 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
                CurrentThread = KeGetCurrentThread();
                a1->LockDbg = 2295873;
              }
              --a1->RequestCount;
              v19 = v32;
              a1->MiniportThread = CurrentThread;
              if ( v19 != 259 )
              {
                p_Blink = a1->PendingOidRequest;
                a1->PendingOidRequest = 0LL;
              }
            }
            else if ( (RequestType & 0xFFFFFFFD) != 0 )
            {
              if ( RequestType == NdisRequestSetInformation )
              {
                v19 = -1073741823;
                if ( !v22 )
                  v19 = -1071448017;
                p_Blink->DATA.QUERY_INFORMATION.BytesWritten = p_Blink->DATA.QUERY_INFORMATION.InformationBufferLength;
              }
              else if ( RequestType == NdisRequestMethod )
              {
                v19 = -1073741823;
                p_Blink->DATA.METHOD_INFORMATION.BytesRead = 0;
              }
            }
            else
            {
              v19 = -1073741823;
              p_Blink->DATA.QUERY_INFORMATION.BytesWritten = 0;
            }
          }
        }
      }
      else
      {
        v19 = -1073676275;
      }
      a1->MiniportThread = 0LL;
      a1->LockDbg = 0;
      KeReleaseSpinLock(&a1->Lock, v18);
      if ( v19 != 259 && p_Blink )
      {
        memset(v31, 0, sizeof(v31));
        if ( (unsigned __int8)byte_1C0098752 >= 4u )
          WPP_SF_qqDD(
            29LL,
            &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids,
            a1,
            p_Blink,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v19);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000) != 0 )
          McTemplateK0jqxqqq(
            v27,
            (unsigned int)&CompletingOidRequestMiniportEx,
            (_DWORD)a1 + 4032,
            (_DWORD)a1 + 4032,
            a1->IfIndex,
            a1->NetLuid.Value,
            p_Blink->DATA.QUERY_INFORMATION.Oid,
            v19,
            109);
        v31[4] = p_Blink;
        LODWORD(v31[5]) = v19;
        v31[0] = a1;
        ndisOidRequestComplete((__int64)v31, v26);
      }
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(30LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1);
}
