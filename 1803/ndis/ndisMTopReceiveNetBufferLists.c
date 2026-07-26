/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C0002D60
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

void __fastcall ndisMTopReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  struct _NET_BUFFER_LIST *v7; // r15
  __int64 v8; // r14
  struct _NET_BUFFER_LIST *v9; // rsi
  char v10; // r13
  unsigned int Number; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  unsigned int *PoolWithTag; // rbx
  _QWORD *v15; // r14
  struct _NET_BUFFER_LIST *Alignment; // rcx
  __int64 v17; // rdi
  __int64 v18; // rbp
  unsigned int v19; // esi
  int v20; // r13d
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned int v26; // esi
  unsigned int v27; // r14d
  unsigned int v28; // ebp
  unsigned int i; // edi
  __int64 v30; // rdx
  int v31; // r14d
  __int64 v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // edi
  struct _NET_BUFFER_LIST *v38; // rcx
  __int64 CurrentIrql; // rax
  void (*v40)(void); // rbp
  void *v41; // r14
  _QWORD *v42; // rsi
  struct _NET_BUFFER_LIST **v43; // r12
  bool v44; // zf
  _QWORD *v45; // r13
  __int64 v46; // r15
  char v47; // al
  struct _NET_BUFFER_LIST *v48; // r9
  struct _NET_BUFFER_LIST *Scratch; // rdi
  struct _NET_BUFFER_LIST *v50; // rdi
  KIRQL v51; // r11
  unsigned int ChildRefCount; // [rsp+30h] [rbp-C8h]
  unsigned int v53; // [rsp+30h] [rbp-C8h]
  char v54; // [rsp+40h] [rbp-B8h]
  int v55; // [rsp+44h] [rbp-B4h]
  unsigned int v56; // [rsp+44h] [rbp-B4h]
  unsigned int v57; // [rsp+48h] [rbp-B0h]
  struct NDIS_PCW_CONTEXT v58; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v59[3]; // [rsp+68h] [rbp-90h] BYREF
  char Parameter[8]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v61; // [rsp+88h] [rbp-70h]
  void *v62; // [rsp+90h] [rbp-68h]
  void (*v63)(void); // [rsp+98h] [rbp-60h]
  struct _NET_BUFFER_LIST *v64; // [rsp+A0h] [rbp-58h]
  int v65; // [rsp+A8h] [rbp-50h]
  __int64 v66; // [rsp+ACh] [rbp-4Ch]
  BOOL v67; // [rsp+B4h] [rbp-44h]
  char v69; // [rsp+100h] [rbp+8h]

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
  v54 = 0;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = 2096LL * Number;
      v57 = Number;
      v13 = *(unsigned int *)(v12 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
      if ( (unsigned int)v13 < 3 )
      {
        v54 = 1;
        PoolWithTag = (unsigned int *)(v12 + 696 * v13 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 8LL);
        *(_DWORD *)(v12 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) = v13 + 1;
LABEL_7:
        v15 = *(_QWORD **)(v8 + 400);
        *((_BYTE *)PoolWithTag + 692) = 0;
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
          PoolWithTag[20] = 0;
        }
        else
        {
          *(_QWORD *)PoolWithTag = a1;
          *((_QWORD *)PoolWithTag + 3) = v7;
          *((_QWORD *)PoolWithTag + 1) = v15;
          PoolWithTag[4] = a5;
          *((_QWORD *)PoolWithTag + 4) = v9;
          PoolWithTag[10] = a3;
          PoolWithTag[11] = a4;
          ndisSortNetBufferLists(PoolWithTag);
          if ( *((_QWORD *)PoolWithTag + 8) || PoolWithTag[172] )
          {
            if ( !*v15 || a3 )
              *((_BYTE *)PoolWithTag + 692) = 1;
            else
              ndisIndicateXlatedPacketsToNdis5Protocols(PoolWithTag);
            if ( !v17 )
            {
              v18 = v15[1];
              if ( v18 )
              {
                v19 = PoolWithTag[172];
                v20 = PoolWithTag[4] | 2;
                do
                {
                  v21 = *(_QWORD *)(v18 + 424);
                  v22 = 0LL;
                  do
                  {
                    v23 = (unsigned int)v22;
                    v24 = *(_QWORD *)&PoolWithTag[10 * v22 + 16];
                    v22 = (unsigned int)(v22 + 1);
                    if ( v24 )
                      ndisMIndicateNetBufferListsToOpen(v18, v24, PoolWithTag[10], PoolWithTag[10 * v23 + 20], v20);
                  }
                  while ( (unsigned int)v22 <= v19 );
                  v18 = v21;
                }
                while ( v21 );
                v10 = a5;
              }
              v25 = v15[2];
              if ( v25 )
              {
                v26 = PoolWithTag[172];
                v27 = PoolWithTag[4];
                if ( (a5 & 2) != 0 )
                {
                  v31 = v27 | 2;
                  do
                  {
                    v32 = *(_QWORD *)(v25 + 424);
                    v33 = 0LL;
                    do
                    {
                      v34 = (unsigned int)v33;
                      v35 = 5 * v33;
                      v33 = (unsigned int)(v33 + 1);
                      v36 = *(_QWORD *)&PoolWithTag[2 * v35 + 16];
                      if ( v36 )
                        ndisMIndicateNetBufferListsToOpen(v25, v36, PoolWithTag[10], PoolWithTag[10 * v34 + 20], v31);
                    }
                    while ( (unsigned int)v33 <= v26 );
                    v25 = v32;
                  }
                  while ( v32 );
                }
                else
                {
                  v28 = PoolWithTag[10];
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                    ndisIndicateToPmodeOpens(PoolWithTag);
                  for ( i = 1; i <= v26; ++i )
                  {
                    v30 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(_QWORD *)&PoolWithTag[10 * v30 + 14],
                      *(_QWORD *)&PoolWithTag[10 * v30 + 16],
                      v28,
                      PoolWithTag[10 * v30 + 20],
                      v27);
                  }
                }
              }
            }
          }
        }
        v8 = a1;
        goto LABEL_30;
      }
    }
  }
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  if ( PoolWithTag )
    goto LABEL_7;
  if ( (unsigned __int8)byte_1C009960B >= 2u )
    WPP_SF_(10LL, &WPP_e8cf7f9943953a778cb80ba8345e40cb_Traceguids);
LABEL_30:
  if ( (v10 & 2) == 0 )
  {
    if ( !PoolWithTag )
      goto LABEL_34;
    if ( *((_BYTE *)PoolWithTag + 692) )
    {
      v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)PoolWithTag + 8);
LABEL_34:
      if ( !v7 )
        goto LABEL_35;
      v55 = a5 & 1;
      v37 = v55 != 0;
      v58.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
      v38 = v7;
      v58.DatapathEventsMask = *(_DWORD *)(v8 + 48);
      v58.DatapathCyclesMask = *(_DWORD *)(v8 + 80);
      v58.CurrentCpu = -1;
      do
      {
        v38->Flags = v38->Flags & 0xFFFFFFF4 | 8;
        v38 = (struct _NET_BUFFER_LIST *)v38->Link.Alignment;
      }
      while ( v38 );
      CurrentIrql = (unsigned int)Microsoft_Windows_Networking_CorrelationEnabled;
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        CurrentIrql = ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
      if ( *(_DWORD *)(v8 + 3240) )
      {
        CurrentIrql = ndisReturnPeriodicReceives(v8, v7);
        v7 = (struct _NET_BUFFER_LIST *)CurrentIrql;
      }
      if ( !v7 )
        goto LABEL_35;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(v7, 0LL, *(_QWORD *)(v8 + 2544), 135LL, v37);
      if ( (v58.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( (a5 & 1) == 0 )
          KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v58, 5u);
      }
      v40 = *(void (**)(void))(v8 + 2648);
      v41 = *(void **)(v8 + 2536);
      v42 = *(_QWORD **)(a1 + 2552);
      if ( *(_BYTE *)v42 == 17 )
        goto LABEL_56;
      if ( !ndisIterativeDataPathDisabled )
      {
        if ( (a5 & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2) )
        {
          LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
          v43 = (struct _NET_BUFFER_LIST **)v59;
          v7->ChildRefCount = v37;
          v7->Scratch = 0LL;
          v44 = *(_BYTE *)v42 == 5;
          v56 = CurrentIrql;
          v59[2] = 0LL;
          v59[0] = v7;
          v59[1] = v7;
          if ( v44 )
          {
            while ( *v43 )
            {
              v45 = v42;
              v46 = v42[54] + 96 * CurrentIrql;
              v47 = *(_BYTE *)(v46 + 88);
              *(_BYTE *)(v46 + 88) = 1;
              v48 = *v43;
              v69 = v47;
              *v43 = 0LL;
              if ( v48 )
              {
                do
                {
                  Scratch = (struct _NET_BUFFER_LIST *)v48->Scratch;
                  ChildRefCount = v48->ChildRefCount;
                  v48->ChildRefCount = 0;
                  ndisCallReceiveCompleteHandler(v42, v40, v41, v48, 0, 0, ChildRefCount);
                  v48 = Scratch;
                }
                while ( Scratch );
                v47 = v69;
              }
              *(_BYTE *)(v46 + 88) = 0;
              if ( v47 )
              {
                *(_BYTE *)(v46 + 88) = 1;
                v7 = *v43;
                goto LABEL_84;
              }
              v42 = (_QWORD *)v42[70];
              v43 = (struct _NET_BUFFER_LIST **)(v46 + 72);
              v40 = (void (*)(void))v45[67];
              v41 = (void *)v45[68];
              CurrentIrql = v56;
              if ( *(_BYTE *)v42 != 5 )
              {
                v7 = *(struct _NET_BUFFER_LIST **)(v46 + 72);
                goto LABEL_84;
              }
            }
          }
          else
          {
LABEL_84:
            if ( v7 )
            {
              *v43 = 0LL;
              do
              {
                v50 = (struct _NET_BUFFER_LIST *)v7->Scratch;
                v53 = v7->ChildRefCount;
                v7->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v42, v40, v41, v7, 0, 0, v53);
                v7 = v50;
              }
              while ( v50 );
            }
          }
          goto LABEL_57;
        }
      }
      if ( *(_BYTE *)a1 != 5 )
      {
LABEL_56:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, bool))v40)(v41, v7, v55 != 0);
      }
      else
      {
        v61 = *(_QWORD *)(a1 + 2552);
        v62 = v41;
        v66 = 3LL;
        v63 = v40;
        v64 = v7;
        v65 = 0;
        v67 = v55 != 0;
        if ( KeExpandKernelStackAndCalloutEx(
               (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
               Parameter,
               0x4CCCuLL,
               0,
               0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)a1, v7, 0);
      }
LABEL_57:
      if ( (v58.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v58, 5u, 0x12uLL);
        if ( v51 != 2 )
          KeLowerIrql(v51);
      }
    }
  }
LABEL_35:
  if ( v54 )
  {
    --*(_DWORD *)(2096LL * v57 + *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
