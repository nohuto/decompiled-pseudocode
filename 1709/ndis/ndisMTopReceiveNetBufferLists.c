/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C0014B80
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

void __fastcall ndisMTopReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        int a5)
{
  struct _NET_BUFFER_LIST *v7; // r12
  __int64 v8; // r13
  struct _NET_BUFFER_LIST *v9; // rbx
  char v10; // r15
  unsigned int Number; // esi
  __int64 v12; // r8
  __int64 v13; // rdx
  char *PoolWithTag; // rdi
  _QWORD *v15; // r13
  struct _NET_BUFFER_LIST *Alignment; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  unsigned int v22; // esi
  int v23; // r15d
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // ebp
  unsigned int v29; // r14d
  unsigned int v30; // esi
  unsigned int i; // ebx
  __int64 v32; // rdx
  unsigned int v33; // r14d
  int v34; // r15d
  __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rcx
  unsigned int v38; // ebx
  struct _NET_BUFFER_LIST *v39; // rcx
  __int64 CurrentIrql; // rax
  _QWORD *v41; // rsi
  void (*v42)(void); // rbp
  void *v43; // r14
  struct _NET_BUFFER_LIST **v44; // r15
  _QWORD *v45; // r12
  __int64 v46; // r13
  char v47; // al
  struct _NET_BUFFER_LIST *v48; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v50; // r9
  struct _NET_BUFFER_LIST *v51; // rbx
  KIRQL v52; // r11
  unsigned int ChildRefCount; // [rsp+30h] [rbp-C8h]
  unsigned int v54; // [rsp+30h] [rbp-C8h]
  char v55; // [rsp+40h] [rbp-B8h]
  unsigned int v56; // [rsp+44h] [rbp-B4h]
  unsigned int v57; // [rsp+48h] [rbp-B0h]
  int v58; // [rsp+4Ch] [rbp-ACh]
  struct NDIS_PCW_CONTEXT v59; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v60[3]; // [rsp+68h] [rbp-90h] BYREF
  char Parameter[8]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v62; // [rsp+88h] [rbp-70h]
  void *v63; // [rsp+90h] [rbp-68h]
  void (*v64)(void); // [rsp+98h] [rbp-60h]
  struct _NET_BUFFER_LIST *v65; // [rsp+A0h] [rbp-58h]
  int v66; // [rsp+A8h] [rbp-50h]
  __int64 v67; // [rsp+ACh] [rbp-4Ch]
  BOOL v68; // [rsp+B4h] [rbp-44h]
  char v70; // [rsp+108h] [rbp+10h]

  v7 = a2;
  v8 = a1;
  if ( (a2->NblFlags & 0x8000) != 0 )
  {
    (*(void (__fastcall **)(__int64, struct _NET_BUFFER_LIST *))(a1 + 2152))(a1, a2);
    return;
  }
  if ( !*(_BYTE *)(a1 + 2673) )
  {
    (*(void (__fastcall **)(__int64))(a1 + 2144))(a1);
    return;
  }
  v9 = 0LL;
  v10 = a5;
  v57 = 0;
  v70 = 0;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = 2096LL * Number;
      v57 = Number;
      v13 = *(unsigned int *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v12);
      if ( (unsigned int)v13 < 3 )
      {
        v70 = 1;
        PoolWithTag = (char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 696 * v13 + v12 + 8;
        *(_DWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v12) = v13 + 1;
LABEL_7:
        v15 = *(_QWORD **)(v8 + 400);
        PoolWithTag[692] = 0;
        Alignment = v7;
        if ( (a5 & 2) == 0 )
        {
          do
          {
            v9 = Alignment;
            Alignment->Flags = Alignment->Flags & 0xFFFFFFF0 | 4;
            Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
          }
          while ( Alignment );
        }
        v17 = v15[41];
        if ( v17 && *(_BYTE *)(*(_QWORD *)(v17 + 24) + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v17, v7, a3, a4, a5);
          *((_QWORD *)PoolWithTag + 8) = 0LL;
          *((_DWORD *)PoolWithTag + 20) = 0;
        }
        else
        {
          *(_QWORD *)PoolWithTag = a1;
          *((_QWORD *)PoolWithTag + 3) = v7;
          *((_QWORD *)PoolWithTag + 1) = v15;
          *((_DWORD *)PoolWithTag + 4) = a5;
          *((_QWORD *)PoolWithTag + 4) = v9;
          *((_DWORD *)PoolWithTag + 10) = a3;
          *((_DWORD *)PoolWithTag + 11) = a4;
          ndisSortNetBufferLists(PoolWithTag);
          if ( *((_QWORD *)PoolWithTag + 8) || *((_DWORD *)PoolWithTag + 172) )
          {
            if ( !*v15 || a3 )
              PoolWithTag[692] = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
            if ( !v17 )
            {
              v21 = v15[1];
              if ( v21 )
              {
                v22 = *((_DWORD *)PoolWithTag + 172);
                v23 = *((_DWORD *)PoolWithTag + 4) | 2;
                do
                {
                  v24 = *(_QWORD *)(v21 + 424);
                  v25 = 0LL;
                  do
                  {
                    v26 = (unsigned int)v25;
                    v18 = *(_QWORD *)&PoolWithTag[40 * v25 + 64];
                    v25 = (unsigned int)(v25 + 1);
                    if ( v18 )
                      ndisMIndicateNetBufferListsToOpen(
                        v21,
                        v18,
                        *((unsigned int *)PoolWithTag + 10),
                        *(unsigned int *)&PoolWithTag[40 * v26 + 80],
                        v23);
                  }
                  while ( (unsigned int)v25 <= v22 );
                  v21 = v24;
                }
                while ( v24 );
              }
              v27 = v15[2];
              if ( v27 )
              {
                if ( (a5 & 2) != 0 )
                {
                  v33 = *((_DWORD *)PoolWithTag + 172);
                  v34 = *((_DWORD *)PoolWithTag + 4) | 2;
                  do
                  {
                    v35 = *(_QWORD *)(v27 + 424);
                    v36 = 0LL;
                    do
                    {
                      v37 = (unsigned int)v36;
                      v18 = *(_QWORD *)&PoolWithTag[40 * v36 + 64];
                      v36 = (unsigned int)(v36 + 1);
                      if ( v18 )
                        ndisMIndicateNetBufferListsToOpen(
                          v27,
                          v18,
                          *((unsigned int *)PoolWithTag + 10),
                          *(unsigned int *)&PoolWithTag[40 * v37 + 80],
                          v34);
                    }
                    while ( (unsigned int)v36 <= v33 );
                    v27 = v35;
                  }
                  while ( v35 );
                }
                else
                {
                  v28 = *((_DWORD *)PoolWithTag + 4);
                  v29 = *((_DWORD *)PoolWithTag + 10);
                  v30 = *((_DWORD *)PoolWithTag + 172);
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                    ndisIndicateToPmodeOpens(PoolWithTag);
                  for ( i = 1; i <= v30; ++i )
                  {
                    v32 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&PoolWithTag[40 * v32 + 56],
                      *(_QWORD *)&PoolWithTag[40 * v32 + 64],
                      v29,
                      *(unsigned int *)&PoolWithTag[40 * v32 + 80],
                      v28);
                  }
                }
              }
              v10 = a5;
            }
          }
        }
        v8 = a1;
        goto LABEL_30;
      }
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  if ( PoolWithTag )
    goto LABEL_7;
  if ( (unsigned __int8)byte_1C009874B >= 2u )
    WPP_SF_(10LL, &WPP_78f76d0749fa341705457319fed97831_Traceguids);
LABEL_30:
  if ( (v10 & 2) == 0 )
  {
    if ( !PoolWithTag )
      goto LABEL_34;
    if ( PoolWithTag[692] )
    {
      v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
LABEL_34:
      if ( !v7 )
        goto LABEL_35;
      v58 = a5 & 1;
      v38 = v58 != 0;
      v59.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
      v39 = v7;
      v59.DatapathEventsMask = *(_DWORD *)(v8 + 48);
      v59.DatapathCyclesMask = *(_DWORD *)(v8 + 80);
      v59.CurrentCpu = -1;
      do
      {
        v39->Flags = v39->Flags & 0xFFFFFFF4 | 8;
        v39 = (struct _NET_BUFFER_LIST *)v39->Link.Alignment;
      }
      while ( v39 );
      CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v7, v18, v19, v20);
      if ( *(_DWORD *)(v8 + 3240) )
      {
        CurrentIrql = ndisReturnPeriodicReceives(v8, v7);
        v7 = (struct _NET_BUFFER_LIST *)CurrentIrql;
      }
      if ( !v7 )
        goto LABEL_35;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(v7, 0LL, *(_QWORD *)(v8 + 2544), 0x87u, v38);
      if ( (v59.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( (a5 & 1) == 0 )
          KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v59, 5u);
      }
      v41 = *(_QWORD **)(v8 + 2552);
      v42 = *(void (**)(void))(v8 + 2648);
      v43 = *(void **)(v8 + 2536);
      if ( *(_BYTE *)v41 == 17 )
        goto LABEL_56;
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( (a5 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v44 = (struct _NET_BUFFER_LIST **)v60;
          v56 = CurrentIrql;
          v60[2] = 0LL;
          v60[0] = v7;
          v60[1] = v7;
          v7->Scratch = 0LL;
          v7->ChildRefCount = v38;
          if ( *(_BYTE *)v41 == 5 )
          {
            while ( *v44 )
            {
              v45 = v41;
              v46 = v41[54] + 96 * CurrentIrql;
              v47 = *(_BYTE *)(v46 + 88);
              *(_BYTE *)(v46 + 88) = 1;
              v48 = *v44;
              v55 = v47;
              *v44 = 0LL;
              if ( v48 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v48->Scratch;
                  ChildRefCount = v48->ChildRefCount;
                  v48->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(v41, v42, v43, v48, 0, 0, ChildRefCount);
                  v48 = Scratch;
                }
                while ( Scratch );
                v47 = v55;
              }
              *(_BYTE *)(v46 + 88) = 0;
              if ( v47 )
              {
                *(_BYTE *)(v46 + 88) = 1;
                goto LABEL_84;
              }
              v41 = (_QWORD *)v41[70];
              v44 = (struct _NET_BUFFER_LIST **)(v46 + 72);
              v42 = (void (*)(void))v45[67];
              v43 = (void *)v45[68];
              CurrentIrql = v56;
              if ( *(_BYTE *)v41 != 5 )
                goto LABEL_84;
            }
          }
          else
          {
LABEL_84:
            v50 = *v44;
            if ( *v44 )
            {
              *v44 = 0LL;
              do
              {
                v51 = (struct _NET_BUFFER_LIST *)v50->Scratch;
                v54 = v50->ChildRefCount;
                v50->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v41, v42, v43, v50, 0, 0, v54);
                v50 = v51;
              }
              while ( v51 );
            }
          }
          goto LABEL_57;
        }
      }
      if ( *(_BYTE *)v8 != 5 )
      {
LABEL_56:
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, bool))(v8 + 2648))(
          *(_QWORD *)(v8 + 2536),
          v7,
          v58 != 0);
      }
      else
      {
        v62 = *(_QWORD *)(v8 + 2552);
        v63 = v43;
        v67 = 3LL;
        v64 = v42;
        v65 = v7;
        v66 = 0;
        v68 = v58 != 0;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v8, v7, 0);
      }
LABEL_57:
      if ( (v59.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v59, 5u, 0x12uLL);
        if ( v52 != 2 )
          KeLowerIrql(v52);
      }
    }
  }
LABEL_35:
  if ( v70 )
  {
    --*((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 524 * v57);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
