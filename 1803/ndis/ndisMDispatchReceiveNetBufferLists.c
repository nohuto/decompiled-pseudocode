/*
 * XREFs of ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 *     ndisSortNetBufferLists @ 0x1C0003550 (ndisSortNetBufferLists.c)
 *     ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00062C0 (-ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0025614 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisIndicateToPmodeOpens @ 0x1C00258A4 (ndisIndicateToPmodeOpens.c)
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0025964 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ndisReturnPeriodicReceives @ 0x1C0025B00 (ndisReturnPeriodicReceives.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMDispatchReceiveNetBufferLists(
        struct _NDIS_FILTER_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int NewIrql)
{
  unsigned __int64 CurrentIrql; // rax
  char v6; // r13
  struct _NET_BUFFER_LIST *v7; // r12
  unsigned int v8; // r14d
  unsigned int v9; // r10d
  struct _NET_BUFFER_LIST *v11; // rsi
  struct _NDIS_FILTER_BLOCK *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int *PoolWithTag; // rdi
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *XmitLinkSpeedIndicateUp; // r13
  __int64 v18; // r14
  __int64 v19; // r14
  unsigned int v20; // esi
  int v21; // ebx
  __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // rcx
  struct _NET_BUFFER_LIST *v25; // rdx
  __int64 v26; // r15
  unsigned int v27; // r13d
  int v28; // r12d
  unsigned int v29; // r15d
  unsigned int i; // r14d
  __int64 v31; // rax
  int v32; // r12d
  unsigned int v33; // ebx
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rcx
  struct _NET_BUFFER_LIST *v37; // rdx
  _NDIS_PCW_DATA_BLOCK *Myptr; // rax
  struct _NET_BUFFER_LIST *v39; // rcx
  unsigned __int64 v40; // rax
  void (__fastcall *TcpOffloadReceiveCompleteHandler)(void *, _NET_BUFFER_LIST *); // r14
  void (*Offload)(void); // r12
  void (__fastcall *IndicateOffloadEventHandler)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // r13
  __int64 v44; // r8
  struct _NET_BUFFER_LIST **v45; // r15
  bool v46; // zf
  void (__fastcall *v47)(void *, _NET_BUFFER_LIST *); // rdx
  __int64 v48; // rsi
  char v49; // al
  struct _NET_BUFFER_LIST *v50; // r9
  unsigned int ChildRefCount; // eax
  struct _NET_BUFFER_LIST *Scratch; // rbx
  unsigned int v53; // eax
  struct _NET_BUFFER_LIST *v54; // rbx
  char v55; // [rsp+48h] [rbp-61h]
  unsigned int v56; // [rsp+4Ch] [rbp-5Dh]
  unsigned int v57; // [rsp+50h] [rbp-59h]
  unsigned int v58; // [rsp+54h] [rbp-55h]
  struct NDIS_PCW_CONTEXT v59; // [rsp+60h] [rbp-49h] BYREF
  _QWORD v60[3]; // [rsp+78h] [rbp-31h] BYREF
  char Parameter[8]; // [rsp+90h] [rbp-19h] BYREF
  void (__fastcall *v62)(void *, _NET_BUFFER_LIST *); // [rsp+98h] [rbp-11h]
  void (__fastcall *v63)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int); // [rsp+A0h] [rbp-9h]
  void (*v64)(void); // [rsp+A8h] [rbp-1h]
  struct _NET_BUFFER_LIST *v65; // [rsp+B0h] [rbp+7h]
  int v66; // [rsp+B8h] [rbp+Fh]
  int v67; // [rsp+BCh] [rbp+13h]
  int v68; // [rsp+C0h] [rbp+17h]
  unsigned int v69; // [rsp+C4h] [rbp+1Bh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+57h] BYREF
  char v72; // [rsp+108h] [rbp+5Fh]
  KIRQL NewIrqla; // [rsp+128h] [rbp+7Fh]

  CurrentIrql = (unsigned __int64)&retaddr;
  v6 = NewIrql;
  v7 = 0LL;
  v58 = 0;
  v8 = NewIrql & 1;
  v55 = 0;
  v56 = v8;
  v9 = a4;
  v11 = a2;
  v12 = a1;
  if ( (NewIrql & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    {
      LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
      v13 = 2096 * CurrentIrql;
      v58 = CurrentIrql;
      v14 = *(unsigned int *)(2096 * CurrentIrql + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
      if ( (unsigned int)v14 < 3 )
      {
        v55 = 1;
        PoolWithTag = (unsigned int *)(v13 + 696 * v14 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 8LL);
        *(_DWORD *)(v13 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) = v14 + 1;
LABEL_10:
        Alignment = v11;
        XmitLinkSpeedIndicateUp = (_QWORD *)v12->XmitLinkSpeedIndicateUp;
        *((_BYTE *)PoolWithTag + 692) = 0;
        if ( (NewIrql & 2) == 0 )
        {
          do
          {
            v7 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v18 = XmitLinkSpeedIndicateUp[41];
        if ( v18 && *(_BYTE *)(*(_QWORD *)(v18 + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v18, v11, a3, v9, NewIrql);
          *((_QWORD *)PoolWithTag + 8) = 0LL;
          PoolWithTag[20] = 0;
        }
        else
        {
          *((_QWORD *)PoolWithTag + 3) = v11;
          *((_QWORD *)PoolWithTag + 1) = XmitLinkSpeedIndicateUp;
          PoolWithTag[4] = NewIrql;
          *(_QWORD *)PoolWithTag = v12;
          *((_QWORD *)PoolWithTag + 4) = v7;
          PoolWithTag[10] = a3;
          PoolWithTag[11] = v9;
          ndisSortNetBufferLists((__int64 *)PoolWithTag);
          if ( *((_QWORD *)PoolWithTag + 8) || PoolWithTag[172] )
          {
            if ( !*XmitLinkSpeedIndicateUp || a3 )
              *((_BYTE *)PoolWithTag + 692) = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols((__int64 *)PoolWithTag);
            if ( !v18 )
            {
              v19 = XmitLinkSpeedIndicateUp[1];
              if ( v19 )
              {
                v20 = PoolWithTag[172];
                v21 = PoolWithTag[4] | 2;
                do
                {
                  v22 = *(_QWORD *)(v19 + 424);
                  v23 = 0LL;
                  do
                  {
                    v24 = (unsigned int)v23;
                    v25 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v23 + 16];
                    v23 = (unsigned int)(v23 + 1);
                    if ( v25 )
                      ndisMIndicateNetBufferListsToOpen(v19, v25, PoolWithTag[10], PoolWithTag[10 * v24 + 20], v21);
                  }
                  while ( (unsigned int)v23 <= v20 );
                  v19 = v22;
                }
                while ( v22 );
                v11 = a2;
                v12 = a1;
              }
              v26 = XmitLinkSpeedIndicateUp[2];
              if ( v26 )
              {
                v27 = PoolWithTag[172];
                v28 = PoolWithTag[4];
                if ( (NewIrql & 2) != 0 )
                {
                  v32 = v28 | 2;
                  v33 = PoolWithTag[172];
                  do
                  {
                    v34 = *(_QWORD *)(v26 + 424);
                    v35 = 0LL;
                    do
                    {
                      v36 = (unsigned int)v35;
                      v37 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v35 + 16];
                      v35 = (unsigned int)(v35 + 1);
                      if ( v37 )
                        ndisMIndicateNetBufferListsToOpen(v26, v37, PoolWithTag[10], PoolWithTag[10 * v36 + 20], v32);
                    }
                    while ( (unsigned int)v35 <= v33 );
                    v26 = v34;
                  }
                  while ( v34 );
                  v12 = a1;
                }
                else
                {
                  v29 = PoolWithTag[10];
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                    ndisIndicateToPmodeOpens((__int64)PoolWithTag);
                  for ( i = 1; i <= v27; ++i )
                  {
                    v31 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&PoolWithTag[10 * v31 + 14],
                      *(struct _NET_BUFFER_LIST **)&PoolWithTag[10 * v31 + 16],
                      v29,
                      PoolWithTag[10 * v31 + 20],
                      v28);
                  }
                }
              }
            }
          }
        }
        v6 = NewIrql;
        v8 = NewIrql & 1;
        goto LABEL_45;
      }
    }
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  if ( PoolWithTag )
  {
    v9 = a4;
    goto LABEL_10;
  }
  if ( (unsigned __int8)byte_1C009960B >= 2u )
    WPP_SF_(0xAu, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids);
LABEL_45:
  if ( (v6 & 2) != 0 )
    goto LABEL_89;
  if ( PoolWithTag )
  {
    if ( !*((_BYTE *)PoolWithTag + 692) )
      goto LABEL_89;
    v11 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
  }
  if ( v11 )
  {
    Myptr = (_NDIS_PCW_DATA_BLOCK *)v12->FilterInstanceName._Myptr;
    v39 = v11;
    v59.CurrentCpu = -1;
    v59.PcwBlock = Myptr;
    v59.DatapathEventsMask = (unsigned int)v12->FilterFriendlyName;
    v59.DatapathCyclesMask = *(_DWORD *)&v12->Ref.ReferenceCount;
    NewIrqla = 2;
    do
    {
      v39->Flags = v39->Flags & 0xFFFFFFF4 | 8;
      v39 = (struct _NET_BUFFER_LIST *)v39->Link.Alignment;
    }
    while ( v39 );
    v40 = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      v40 = ndisMarkNetBufferListCorrelationIdsAsUsed(v11);
    if ( LODWORD(v12[3].NextSendNetBufferListsCompleteContext) )
    {
      v40 = (unsigned __int64)ndisReturnPeriodicReceives((__int64)v12, v11);
      v11 = (struct _NET_BUFFER_LIST *)v40;
    }
    if ( v11 )
    {
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v11,
          0LL,
          (unsigned __int64)v12[2].TcpOffloadSendCompleteHandler,
          135LL,
          v8);
      if ( (v59.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( !v8 )
          NewIrqla = KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v59, 5);
      }
      TcpOffloadReceiveCompleteHandler = v12[2].TcpOffloadReceiveCompleteHandler;
      Offload = (void (*)(void))v12[2].Offload;
      IndicateOffloadEventHandler = v12[2].IndicateOffloadEventHandler;
      if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler == 17 )
      {
        v44 = v56;
      }
      else
      {
        if ( !ndisIterativeDataPathDisabled )
        {
          if ( v56 || (v40 = KeGetCurrentIrql(), (_BYTE)v40 == 2) )
          {
            LODWORD(v40) = KeGetPcr()->Prcb.Number;
            v45 = (struct _NET_BUFFER_LIST **)v60;
            v11->ChildRefCount = v56;
            v11->Scratch = 0LL;
            v46 = *(_BYTE *)TcpOffloadReceiveCompleteHandler == 5;
            v57 = v40;
            v60[2] = 0LL;
            v60[0] = v11;
            v60[1] = v11;
            if ( v46 )
            {
              while ( *v45 )
              {
                v47 = TcpOffloadReceiveCompleteHandler;
                v48 = *((_QWORD *)TcpOffloadReceiveCompleteHandler + 54) + 96 * v40;
                v49 = *(_BYTE *)(v48 + 88);
                *(_BYTE *)(v48 + 88) = 1;
                v50 = *v45;
                *v45 = 0LL;
                v72 = v49;
                if ( v50 )
                {
                  do
                  {
                    ChildRefCount = v50->ChildRefCount;
                    Scratch = (struct _NET_BUFFER_LIST *)v50->Scratch;
                    v50->ChildRefCount = 0;
                    ndisCallReceiveCompleteHandler(
                      TcpOffloadReceiveCompleteHandler,
                      Offload,
                      IndicateOffloadEventHandler,
                      v50,
                      0,
                      0,
                      ChildRefCount);
                    v50 = Scratch;
                  }
                  while ( Scratch );
                  v49 = v72;
                  v47 = TcpOffloadReceiveCompleteHandler;
                }
                *(_BYTE *)(v48 + 88) = 0;
                if ( v49 )
                {
                  *(_BYTE *)(v48 + 88) = 1;
                  v11 = *v45;
                  goto LABEL_77;
                }
                TcpOffloadReceiveCompleteHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *))*((_QWORD *)TcpOffloadReceiveCompleteHandler + 70);
                v45 = (struct _NET_BUFFER_LIST **)(v48 + 72);
                Offload = (void (*)(void))*((_QWORD *)v47 + 67);
                IndicateOffloadEventHandler = (void (__fastcall *)(void *, _NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST *, unsigned int))*((_QWORD *)v47 + 68);
                v40 = v57;
                if ( *(_BYTE *)TcpOffloadReceiveCompleteHandler != 5 )
                {
                  v11 = *(struct _NET_BUFFER_LIST **)(v48 + 72);
                  goto LABEL_77;
                }
              }
            }
            else
            {
LABEL_77:
              if ( v11 )
              {
                *v45 = 0LL;
                do
                {
                  v53 = v11->ChildRefCount;
                  v54 = (struct _NET_BUFFER_LIST *)v11->Scratch;
                  v11->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(
                    TcpOffloadReceiveCompleteHandler,
                    Offload,
                    IndicateOffloadEventHandler,
                    v11,
                    0,
                    0,
                    v53);
                  v11 = v54;
                }
                while ( v54 );
              }
            }
            goto LABEL_86;
          }
        }
        if ( v12->Header.Type == 5 )
        {
          v68 = 0;
          v66 = 0;
          v69 = v56;
          v62 = TcpOffloadReceiveCompleteHandler;
          v63 = IndicateOffloadEventHandler;
          v67 = 3;
          v64 = Offload;
          v65 = v11;
          if ( KeExpandKernelStackAndCalloutEx(
                 (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
                 Parameter,
                 0x4CCCuLL,
                 0,
                 0LL) < 0 )
            ndisQueueStackExpansionFallbackNbls(v12, v11, 0);
          goto LABEL_86;
        }
        v44 = v56;
      }
      ((void (__fastcall *)(_QWORD, struct _NET_BUFFER_LIST *, __int64))v12[2].Offload)(
        v12[2].IndicateOffloadEventHandler,
        v11,
        v44);
LABEL_86:
      if ( (v59.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v59, 5, 18LL);
        if ( NewIrqla != 2 )
          KeLowerIrql(NewIrqla);
      }
    }
  }
LABEL_89:
  if ( v55 )
  {
    --*(_DWORD *)(2096LL * v58 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
