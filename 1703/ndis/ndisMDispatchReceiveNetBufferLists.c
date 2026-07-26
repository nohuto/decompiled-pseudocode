/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C0001480
 * Callers:
 *     <none>
 * Callees:
 *     ndisIndicateToPmodeOpens @ 0x1C0001824 (ndisIndicateToPmodeOpens.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0002D50 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003250 (ndisSortNetBufferLists.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00058A0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00281E4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0028208 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0028358 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C00284F8 (ndisReturnPeriodicReceives.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        int a4,
        int NewIrql)
{
  unsigned __int64 CurrentIrql; // rax
  char v6; // si
  unsigned int v7; // r13d
  int v8; // r10d
  struct _NET_BUFFER_LIST *v10; // rbx
  struct _NDIS_FILTER_BLOCK *v11; // r14
  struct _NET_BUFFER_LIST *v12; // r12
  struct _NDIS_RCV_TRACKER_ARRAY *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  char *v17; // rdi
  _QWORD *XmitLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v20; // rsi
  struct _NET_BUFFER_LIST *Context; // r11
  _QWORD *v22; // rsi
  unsigned int v23; // ebx
  int v24; // r14d
  _QWORD *v25; // r12
  unsigned int v26; // r15d
  __int64 v27; // rcx
  struct _NET_BUFFER_LIST *v28; // rdx
  _QWORD *v29; // r15
  int v30; // r12d
  unsigned int v31; // r15d
  unsigned int i; // esi
  _NDIS_PCW_DATA_BLOCK *Myptr; // rax
  struct _NET_BUFFER_LIST *v34; // rcx
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // rsi
  void (__fastcall *IndicateOffloadEventHandler)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // r10
  void (*Offload)(void); // r12
  __int64 v38; // rax
  unsigned int v39; // r14d
  int v40; // r13d
  _QWORD *v41; // r12
  unsigned int v42; // esi
  __int64 v43; // rcx
  struct _NET_BUFFER_LIST *v44; // rdx
  char *PoolWithTag; // rax
  unsigned int Number; // ecx
  struct _NET_BUFFER_LIST **v47; // r15
  void (__fastcall *v48)(void *, _NET_BUFFER_LIST *); // r13
  __int64 v49; // r14
  char v50; // al
  struct _NET_BUFFER_LIST *v51; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v53; // r9
  struct _NET_BUFFER_LIST *v54; // rbx
  unsigned int ChildRefCount; // [rsp+38h] [rbp-81h]
  unsigned int v56; // [rsp+38h] [rbp-81h]
  char v57; // [rsp+48h] [rbp-71h]
  unsigned int v58; // [rsp+4Ch] [rbp-6Dh]
  void (__fastcall *v59)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+50h] [rbp-69h]
  unsigned int v60; // [rsp+58h] [rbp-61h]
  char *v61; // [rsp+60h] [rbp-59h]
  struct NDIS_PCW_CONTEXT v62; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v63[3]; // [rsp+80h] [rbp-39h] BYREF
  char Parameter[8]; // [rsp+98h] [rbp-21h] BYREF
  void (__fastcall *v65)(void *, _NET_BUFFER_LIST *); // [rsp+A0h] [rbp-19h]
  void (__fastcall *v66)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+A8h] [rbp-11h]
  void (*v67)(void); // [rsp+B0h] [rbp-9h]
  struct _NET_BUFFER_LIST *v68; // [rsp+B8h] [rbp-1h]
  int v69; // [rsp+C0h] [rbp+7h]
  __int64 v70; // [rsp+C4h] [rbp+Bh]
  unsigned int v71; // [rsp+CCh] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+57h] BYREF
  char v74; // [rsp+118h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+138h] [rbp+7Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v6 = NewIrql;
  v60 = 0;
  v7 = NewIrql & 1;
  v57 = 0;
  v8 = a4;
  v10 = a2;
  v11 = a1;
  v12 = 0LL;
  if ( (NewIrql & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
  {
    if ( ndisPerProcRcvTrackers )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v13 = ndisPerProcRcvTrackers;
      v14 = 2096 * CurrentIrql;
      v60 = CurrentIrql;
      v15 = *((unsigned int *)ndisPerProcRcvTrackers + 524 * CurrentIrql);
      if ( (unsigned int)v15 < 3 )
      {
        v57 = 1;
        v16 = v14 + 696 * v15;
        v17 = (char *)ndisPerProcRcvTrackers + v16 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v14) = v15 + 1;
        v61 = (char *)v13 + v16 + 8;
LABEL_5:
        XmitLinkSpeedIndicateUp = (_QWORD *)v11->XmitLinkSpeedIndicateUp;
        v17[692] = 0;
        Alignment = v10;
        if ( (NewIrql & 2) == 0 )
        {
          do
          {
            v12 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v20 = (_QWORD *)XmitLinkSpeedIndicateUp[41];
        if ( v20 && *(_BYTE *)(v20[3] + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v20, v10, NewIrql);
          Context = 0LL;
          *((_QWORD *)v17 + 8) = 0LL;
          *((_DWORD *)v17 + 20) = 0;
        }
        else
        {
          *((_QWORD *)v17 + 3) = v10;
          *((_QWORD *)v17 + 1) = XmitLinkSpeedIndicateUp;
          *((_DWORD *)v17 + 4) = NewIrql;
          *(_QWORD *)v17 = v11;
          *((_QWORD *)v17 + 4) = v12;
          *((_DWORD *)v17 + 10) = a3;
          *((_DWORD *)v17 + 11) = v8;
          ndisSortNetBufferLists(v17);
          Context = 0LL;
          if ( *((_QWORD *)v17 + 8) || *((_DWORD *)v17 + 172) )
          {
            if ( !*XmitLinkSpeedIndicateUp || a3 )
            {
              v17[692] = 1;
            }
            else
            {
              ndisIndicateXlatedPacketsToNdis5Protocols(v17);
              Context = 0LL;
            }
            if ( !v20 )
            {
              v22 = (_QWORD *)XmitLinkSpeedIndicateUp[1];
              if ( v22 )
              {
                v23 = *((_DWORD *)v17 + 172);
                v24 = *((_DWORD *)v17 + 4) | 2;
                do
                {
                  v25 = (_QWORD *)v22[53];
                  v26 = 0;
                  do
                  {
                    v27 = v26++;
                    v28 = *(struct _NET_BUFFER_LIST **)&v17[40 * v27 + 64];
                    if ( v28 )
                      ndisMIndicateNetBufferListsToOpen(v22, v28, v24);
                  }
                  while ( v26 <= v23 );
                  v22 = v25;
                }
                while ( v25 );
                v10 = a2;
                v11 = a1;
              }
              v29 = (_QWORD *)XmitLinkSpeedIndicateUp[2];
              if ( v29 )
              {
                if ( (NewIrql & 2) != 0 )
                {
                  v39 = *((_DWORD *)v17 + 172);
                  v40 = *((_DWORD *)v17 + 4) | 2;
                  do
                  {
                    v41 = (_QWORD *)v29[53];
                    v42 = 0;
                    do
                    {
                      v43 = v42++;
                      v44 = *(struct _NET_BUFFER_LIST **)&v17[40 * v43 + 64];
                      if ( v44 )
                        ndisMIndicateNetBufferListsToOpen(v29, v44, v40);
                    }
                    while ( v42 <= v39 );
                    v29 = v41;
                  }
                  while ( v41 );
                  v11 = a1;
                }
                else
                {
                  v30 = *((_DWORD *)v17 + 4);
                  v31 = *((_DWORD *)v17 + 172);
                  if ( *(_DWORD *)(*(_QWORD *)v17 + 2252LL) )
                    ndisIndicateToPmodeOpens(v17);
                  for ( i = 1; i <= v31; ++i )
                  {
                    v38 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(NDIS_HANDLE *)&v17[40 * v38 + 56],
                      *(struct _NET_BUFFER_LIST **)&v17[40 * v38 + 64],
                      v30);
                  }
                }
              }
              Context = 0LL;
            }
          }
        }
        v6 = NewIrql;
        v7 = NewIrql & 1;
        goto LABEL_28;
      }
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  Context = 0LL;
  v61 = PoolWithTag;
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = a4;
    goto LABEL_5;
  }
  if ( (unsigned __int8)byte_1C009260B >= 2u )
  {
    WPP_SF_(10LL, &WPP_b73f8523fdf5311d444d9d2d2cf99027_Traceguids);
    Context = 0LL;
  }
LABEL_28:
  if ( (v6 & 2) != 0 )
    goto LABEL_46;
  if ( v17 )
  {
    if ( !v17[692] )
      goto LABEL_46;
    v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)v17 + 8);
  }
  if ( v10 )
  {
    Myptr = (_NDIS_PCW_DATA_BLOCK *)v11->FilterInstanceName._Myptr;
    v34 = v10;
    v62.CurrentCpu = -1;
    v62.PcwBlock = Myptr;
    v62.DatapathEventsMask = (unsigned int)v11->FilterFriendlyName;
    v62.DatapathCyclesMask = *(_DWORD *)&v11->Ref.ReferenceCount;
    NewIrqla = 2;
    do
    {
      v34->Flags = v34->Flags & 0xFFFFFFF4 | 8;
      v34 = (struct _NET_BUFFER_LIST *)v34->Link.Alignment;
    }
    while ( v34 );
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisMarkNetBufferListCorrelationIdsAsUsed(v10);
    if ( LODWORD(v11[3].NextSendNetBufferListsCompleteContext) != (_DWORD)Context )
    {
      v10 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v11, v10);
      Context = 0LL;
    }
    if ( v10 )
    {
      if ( ndisNblTrackerMode != (_DWORD)Context )
      {
        ndisNblTrackerTransferOwnershipInternal(
          v10,
          0LL,
          (struct NDIS_NBL_TRACKER_HANDLE__ *)v11[2].TcpOffloadSendCompleteHandler,
          NdisNblTrackerEvent_ProtocolReturned,
          v7);
        Context = 0LL;
      }
      if ( (v62.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v7 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v62, 5u);
      }
      TcpOffloadReceiveCompleteHandler = v11[2].TcpOffloadReceiveCompleteHandler;
      IndicateOffloadEventHandler = v11[2].IndicateOffloadEventHandler;
      Offload = (void (*)(void))v11[2].Offload;
      v59 = IndicateOffloadEventHandler;
      if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
        goto LABEL_44;
      if ( ndisIterativeDataPathDisabled == (_DWORD)Context && (v7 || KeGetCurrentIrql() == 2) )
      {
        Number = KeGetPcr()->Prcb.Number;
        v47 = (struct _NET_BUFFER_LIST **)v63;
        v58 = Number;
        v63[2] = 0LL;
        v63[0] = v10;
        v63[1] = v10;
        v10->Scratch = Context;
        v10->ChildRefCount = v7;
        while ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5 )
        {
          if ( *v47 == Context )
            goto LABEL_45;
          v48 = TcpOffloadReceiveCompleteHandler;
          v49 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96LL * Number;
          v50 = *(_BYTE *)(v49 + 88);
          *(_BYTE *)(v49 + 88) = 1;
          v51 = *v47;
          v74 = v50;
          *v47 = Context;
          if ( v51 )
          {
            do
            {
              Scratch = (struct _NET_BUFFER_LIST *)v51->Scratch;
              ChildRefCount = v51->ChildRefCount;
              v51->ChildRefCount = (int)Context;
              ndisCallReceiveCompleteHandler(
                TcpOffloadReceiveCompleteHandler,
                Offload,
                v59,
                v51,
                (unsigned int)Context,
                (unsigned int)Context,
                ChildRefCount);
              Context = 0LL;
              v51 = Scratch;
            }
            while ( Scratch );
            v17 = v61;
            IndicateOffloadEventHandler = v59;
            v50 = v74;
          }
          *(_BYTE *)(v49 + 88) = (_BYTE)Context;
          if ( v50 )
          {
            *(_BYTE *)(v49 + 88) = 1;
            break;
          }
          IndicateOffloadEventHandler = (void (__fastcall *)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int))*((_QWORD *)TcpOffloadReceiveCompleteHandler + 68);
          v47 = (struct _NET_BUFFER_LIST **)(v49 + 72);
          TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler
                                                                                              + 70);
          Offload = (void (*)(void))*((_QWORD *)v48 + 67);
          v59 = (void (__fastcall *)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int))*((_QWORD *)v48 + 68);
          Number = v58;
        }
        v53 = *v47;
        if ( *v47 )
        {
          *v47 = Context;
          do
          {
            v54 = (struct _NET_BUFFER_LIST *)v53->Scratch;
            v56 = v53->ChildRefCount;
            v53->ChildRefCount = (int)Context;
            ndisCallReceiveCompleteHandler(
              TcpOffloadReceiveCompleteHandler,
              Offload,
              IndicateOffloadEventHandler,
              v53,
              (unsigned int)Context,
              (unsigned int)Context,
              v56);
            IndicateOffloadEventHandler = v59;
            LODWORD(Context) = 0;
            v53 = v54;
          }
          while ( v54 );
        }
        goto LABEL_45;
      }
      if ( v11->Header.Type != 5 )
      {
LABEL_44:
        ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))Offload)(IndicateOffloadEventHandler, v10, v7);
      }
      else
      {
        v65 = v11[2].TcpOffloadReceiveCompleteHandler;
        v66 = IndicateOffloadEventHandler;
        v70 = 3LL;
        v67 = Offload;
        v68 = v10;
        v69 = (int)Context;
        v71 = v7;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, Context) < 0 )
          ndisQueueStackExpansionFallbackNbls(v11, v10, 0);
      }
LABEL_45:
      if ( (v62.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v62, 5u, 0x12uLL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_46:
  if ( v57 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v60);
  }
  else if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
  }
}
