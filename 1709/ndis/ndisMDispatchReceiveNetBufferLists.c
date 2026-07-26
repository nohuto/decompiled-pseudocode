/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C0069780
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0014FA0 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0015310 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0017140 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0024664 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z @ 0x1C0024688 (-ndisLastNblInNblChain@@YAPEAU_NET_BUFFER_LIST@@PEAU1@@Z.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateToPmodeOpens @ 0x1C0024998 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0024A58 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0024BF8 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  char v5; // si
  struct _NET_BUFFER_LIST *v6; // r12
  unsigned int v7; // r10d
  struct _NET_BUFFER_LIST *v9; // rbx
  struct _NDIS_FILTER_BLOCK *v10; // r14
  unsigned int Number; // r13d
  __int64 v12; // rdx
  __int64 v13; // r9
  char *PoolWithTag; // rdi
  _QWORD *XmitLinkSpeedIndicateUp; // r13
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned int v19; // ebx
  int v20; // r14d
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rcx
  struct _NET_BUFFER_LIST *v24; // rdx
  __int64 v25; // r15
  int v26; // r12d
  unsigned int v27; // r13d
  unsigned int v28; // r15d
  unsigned int i; // esi
  __int64 v30; // rax
  unsigned int v31; // r14d
  int v32; // r13d
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rcx
  struct _NET_BUFFER_LIST *v36; // rdx
  _NDIS_PCW_DATA_BLOCK *Myptr; // rax
  struct _NET_BUFFER_LIST *v38; // rcx
  __int64 CurrentIrql; // rax
  int v40; // r15d
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // rsi
  void (*Offload)(void); // r12
  void (__fastcall *IndicateOffloadEventHandler)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // r13
  struct _NET_BUFFER_LIST **v44; // r14
  void (__fastcall *v45)(void *, _NET_BUFFER_LIST *); // rdx
  __int64 v46; // r15
  char v47; // al
  struct _NET_BUFFER_LIST *v48; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v51; // r9
  unsigned int v52; // eax
  struct _NET_BUFFER_LIST *v53; // rbx
  char v54; // [rsp+48h] [rbp-61h]
  PVOID v55; // [rsp+4Ch] [rbp-5Dh]
  unsigned int v56; // [rsp+4Ch] [rbp-5Dh]
  struct NDIS_PCW_CONTEXT v57; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v58[3]; // [rsp+78h] [rbp-31h] BYREF
  char Parameter[8]; // [rsp+90h] [rbp-19h] BYREF
  void (__fastcall *v60)(void *, _NET_BUFFER_LIST *); // [rsp+98h] [rbp-11h]
  void (__fastcall *v61)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+A0h] [rbp-9h]
  void (*v62)(void); // [rsp+A8h] [rbp-1h]
  struct _NET_BUFFER_LIST *v63; // [rsp+B0h] [rbp+7h]
  int v64; // [rsp+B8h] [rbp+Fh]
  int v65; // [rsp+BCh] [rbp+13h]
  int v66; // [rsp+C0h] [rbp+17h]
  int v67; // [rsp+C4h] [rbp+1Bh]
  char v69; // [rsp+108h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+128h] [rbp+7Fh]

  v5 = NewIrql;
  v6 = 0LL;
  v54 = 0;
  v55 = (PVOID)(NewIrql & 1);
  v7 = a4;
  v9 = a2;
  v10 = a1;
  if ( (NewIrql & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = 2096LL * Number;
      HIDWORD(v55) = Number;
      v13 = *(unsigned int *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v12);
      if ( (unsigned int)v13 < 3 )
      {
        v54 = 1;
        PoolWithTag = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 696 * v13 + v12 + 8;
        *(_DWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v12) = v13 + 1;
LABEL_10:
        XmitLinkSpeedIndicateUp = (_QWORD *)v10->XmitLinkSpeedIndicateUp;
        PoolWithTag[692] = 0;
        Alignment = v9;
        if ( (NewIrql & 2) == 0 )
        {
          do
          {
            v6 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v17 = XmitLinkSpeedIndicateUp[41];
        if ( v17 && *(_BYTE *)(*(_QWORD *)(v17 + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v17, v9, a3, v7, NewIrql);
          *((_QWORD *)PoolWithTag + 8) = 0LL;
          *((_DWORD *)PoolWithTag + 20) = 0;
        }
        else
        {
          *((_QWORD *)PoolWithTag + 3) = v9;
          *((_QWORD *)PoolWithTag + 1) = XmitLinkSpeedIndicateUp;
          *((_DWORD *)PoolWithTag + 4) = NewIrql;
          *(_QWORD *)PoolWithTag = v10;
          *((_QWORD *)PoolWithTag + 4) = v6;
          *((_DWORD *)PoolWithTag + 10) = a3;
          *((_DWORD *)PoolWithTag + 11) = v7;
          ndisSortNetBufferLists((__int64 *)PoolWithTag);
          if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
          {
            if ( !*XmitLinkSpeedIndicateUp || a3 )
              PoolWithTag[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)PoolWithTag);
            if ( !v17 )
            {
              v18 = XmitLinkSpeedIndicateUp[1];
              if ( v18 )
              {
                v19 = *((_DWORD *)PoolWithTag + 172);
                v20 = *((_DWORD *)PoolWithTag + 4) | 2;
                do
                {
                  v21 = *(_QWORD *)(v18 + 424);
                  v22 = 0LL;
                  do
                  {
                    v23 = (unsigned int)v22;
                    v24 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v22 + 64];
                    v22 = (unsigned int)(v22 + 1);
                    if ( v24 )
                      ndisMIndicateNetBufferListsToOpen(
                        v18,
                        v24,
                        *((_DWORD *)PoolWithTag + 10),
                        *(_DWORD *)&PoolWithTag[40 * v23 + 80],
                        v20);
                  }
                  while ( (unsigned int)v22 <= v19 );
                  v18 = v21;
                }
                while ( v21 );
                v9 = a2;
                v10 = a1;
              }
              v25 = XmitLinkSpeedIndicateUp[2];
              if ( v25 )
              {
                if ( (NewIrql & 2) != 0 )
                {
                  v31 = *((_DWORD *)PoolWithTag + 172);
                  v32 = *((_DWORD *)PoolWithTag + 4) | 2;
                  do
                  {
                    v33 = *(_QWORD *)(v25 + 424);
                    v34 = 0LL;
                    do
                    {
                      v35 = (unsigned int)v34;
                      v36 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v34 + 64];
                      v34 = (unsigned int)(v34 + 1);
                      if ( v36 )
                        ndisMIndicateNetBufferListsToOpen(
                          v25,
                          v36,
                          *((_DWORD *)PoolWithTag + 10),
                          *(_DWORD *)&PoolWithTag[40 * v35 + 80],
                          v32);
                    }
                    while ( (unsigned int)v34 <= v31 );
                    v25 = v33;
                  }
                  while ( v33 );
                  v10 = a1;
                }
                else
                {
                  v26 = *((_DWORD *)PoolWithTag + 4);
                  v27 = *((_DWORD *)PoolWithTag + 10);
                  v28 = *((_DWORD *)PoolWithTag + 172);
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                    ndisIndicateToPmodeOpens((__int64)PoolWithTag);
                  for ( i = 1; i <= v28; ++i )
                  {
                    v30 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&PoolWithTag[40 * v30 + 56],
                      *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v30 + 64],
                      v27,
                      *(_DWORD *)&PoolWithTag[40 * v30 + 80],
                      v26);
                  }
                }
              }
            }
          }
        }
        v5 = NewIrql;
        goto LABEL_45;
      }
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  if ( PoolWithTag )
  {
    v7 = a4;
    goto LABEL_10;
  }
  if ( (unsigned __int8)byte_1C009874B >= 2u )
    WPP_SF_(0xAu, &WPP_78f76d0749fa341705457319fed97831_Traceguids);
LABEL_45:
  if ( (v5 & 2) != 0 )
    goto LABEL_88;
  if ( PoolWithTag )
  {
    if ( !PoolWithTag[692] )
      goto LABEL_88;
    v9 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
  }
  if ( v9 )
  {
    Myptr = (_NDIS_PCW_DATA_BLOCK *)v10->FilterInstanceName._Myptr;
    v38 = v9;
    v57.CurrentCpu = -1;
    v57.PcwBlock = Myptr;
    v57.DatapathEventsMask = (unsigned int)v10->FilterFriendlyName;
    v57.DatapathCyclesMask = *(_DWORD *)&v10->Ref.ReferenceCount;
    NewIrqla = 2;
    do
    {
      v38->Flags = v38->Flags & 0xFFFFFFF4 | 8;
      v38 = (struct _NET_BUFFER_LIST *)v38->Link.Alignment;
    }
    while ( v38 );
    CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v9);
    if ( LODWORD(v10[3].NextSendNetBufferListsCompleteContext) )
    {
      CurrentIrql = (__int64)ndisReturnPeriodicReceives((__int64)v10, v9);
      v9 = (struct _NET_BUFFER_LIST *)CurrentIrql;
    }
    if ( v9 )
    {
      v40 = (int)v55;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v9,
          0LL,
          (unsigned __int64)v10[2].TcpOffloadSendCompleteHandler,
          0x87u,
          (unsigned int)v55);
      if ( (v57.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !(_DWORD)v55 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v57, 5);
      }
      TcpOffloadReceiveCompleteHandler = v10[2].TcpOffloadReceiveCompleteHandler;
      Offload = (void (*)(void))v10[2].Offload;
      IndicateOffloadEventHandler = v10[2].IndicateOffloadEventHandler;
      if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
        goto LABEL_82;
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( (_DWORD)v55 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v44 = (struct _NET_BUFFER_LIST **)v58;
          v56 = CurrentIrql;
          v58[2] = 0LL;
          v58[0] = v9;
          v9->Scratch = 0LL;
          v58[1] = v9;
          v9->ChildRefCount = v40;
          while ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5 )
          {
            if ( !*v44 )
              goto LABEL_85;
            v45 = TcpOffloadReceiveCompleteHandler;
            v46 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96 * CurrentIrql;
            v47 = *(_BYTE *)(v46 + 88);
            *(_BYTE *)(v46 + 88) = 1;
            v48 = *v44;
            *v44 = 0LL;
            v69 = v47;
            if ( v48 )
            {
              do
              {
                ChildRefCount = v48->ChildRefCount;
                Scratch = (struct _NET_BUFFER_LIST *)v48->Scratch;
                v48->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(
                  TcpOffloadReceiveCompleteHandler,
                  Offload,
                  IndicateOffloadEventHandler,
                  v48,
                  0,
                  0,
                  ChildRefCount);
                v48 = Scratch;
              }
              while ( Scratch );
              v47 = v69;
              v45 = TcpOffloadReceiveCompleteHandler;
            }
            *(_BYTE *)(v46 + 88) = 0;
            if ( v47 )
            {
              *(_BYTE *)(v46 + 88) = 1;
              break;
            }
            TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler
                                                                                                + 70);
            v44 = (struct _NET_BUFFER_LIST **)(v46 + 72);
            Offload = (void (*)(void))*((_QWORD *)v45 + 67);
            IndicateOffloadEventHandler = (void (__fastcall *)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int))*((_QWORD *)v45 + 68);
            CurrentIrql = v56;
          }
          v51 = *v44;
          if ( *v44 )
          {
            *v44 = 0LL;
            do
            {
              v52 = v51->ChildRefCount;
              v53 = (struct _NET_BUFFER_LIST *)v51->Scratch;
              v51->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(
                TcpOffloadReceiveCompleteHandler,
                Offload,
                IndicateOffloadEventHandler,
                v51,
                0,
                0,
                v52);
              v51 = v53;
            }
            while ( v53 );
          }
          goto LABEL_85;
        }
      }
      if ( v10->Header.Type == 5 )
      {
        v66 = 0;
        v64 = 0;
        v60 = TcpOffloadReceiveCompleteHandler;
        v61 = IndicateOffloadEventHandler;
        v65 = 3;
        v62 = Offload;
        v63 = v9;
        v67 = (int)v55;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls(v10, v9, 0);
      }
      else
      {
LABEL_82:
        ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))v10[2].Offload)(
          v10[2].IndicateOffloadEventHandler,
          v9,
          (unsigned int)v55);
      }
LABEL_85:
      if ( (v57.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v57, 5, 18LL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_88:
  if ( v54 )
  {
    --*((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 524 * HIDWORD(v55));
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
