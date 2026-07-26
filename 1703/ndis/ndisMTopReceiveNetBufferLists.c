/*
 * XREFs of ndisMTopReceiveNetBufferLists @ 0x1C0002930
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

void __fastcall ndisMTopReceiveNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, int a3, int a4, int a5)
{
  struct _NET_BUFFER_LIST *v7; // r15
  __int64 v8; // r14
  struct _NET_BUFFER_LIST *v9; // rsi
  char v10; // r13
  unsigned int Number; // edi
  __int64 v12; // r8
  __int64 v13; // rdx
  char *PoolWithTag; // rbx
  _QWORD *v15; // r14
  struct _NET_BUFFER_LIST *Alignment; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rbp
  unsigned int v19; // esi
  int v20; // r13d
  _QWORD *v21; // r12
  __int64 v22; // rdi
  struct _NET_BUFFER_LIST *v23; // rdx
  _QWORD *v24; // rdi
  int v25; // ebp
  unsigned int v26; // esi
  unsigned int i; // edi
  __int64 v28; // rdx
  unsigned int v29; // r14d
  int v30; // r12d
  _QWORD *v31; // rbp
  __int64 v32; // rsi
  struct _NET_BUFFER_LIST *v33; // rdx
  unsigned int v34; // edi
  struct _NET_BUFFER_LIST *v35; // rcx
  void (*v36)(void); // rbp
  void *v37; // r14
  _QWORD *v38; // rsi
  unsigned int v39; // ecx
  struct _NET_BUFFER_LIST **v40; // r12
  _QWORD *v41; // r13
  __int64 v42; // r15
  char v43; // al
  struct _NET_BUFFER_LIST *v44; // r9
  struct _NET_BUFFER_LIST *Scratch; // rdi
  struct _NET_BUFFER_LIST *v46; // r9
  struct _NET_BUFFER_LIST *v47; // rdi
  KIRQL v48; // r11
  unsigned int ChildRefCount; // [rsp+30h] [rbp-C8h]
  unsigned int v50; // [rsp+30h] [rbp-C8h]
  char v51; // [rsp+40h] [rbp-B8h]
  int v52; // [rsp+44h] [rbp-B4h]
  unsigned int v53; // [rsp+44h] [rbp-B4h]
  unsigned int v54; // [rsp+48h] [rbp-B0h]
  struct NDIS_PCW_CONTEXT v55; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v56[3]; // [rsp+68h] [rbp-90h] BYREF
  char Parameter[8]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v58; // [rsp+88h] [rbp-70h]
  void *v59; // [rsp+90h] [rbp-68h]
  void (*v60)(void); // [rsp+98h] [rbp-60h]
  struct _NET_BUFFER_LIST *v61; // [rsp+A0h] [rbp-58h]
  int v62; // [rsp+A8h] [rbp-50h]
  __int64 v63; // [rsp+ACh] [rbp-4Ch]
  BOOL v64; // [rsp+B4h] [rbp-44h]
  char v66; // [rsp+100h] [rbp+8h]

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
  v54 = 0;
  v51 = 0;
  if ( (a5 & 1) != 0 || KeGetCurrentIrql() == 2 )
  {
    if ( ndisPerProcRcvTrackers )
    {
      Number = KeGetPcr()->Prcb.Number;
      v12 = 2096LL * Number;
      v54 = Number;
      v13 = *(unsigned int *)((char *)ndisPerProcRcvTrackers + v12);
      if ( (unsigned int)v13 < 3 )
      {
        v51 = 1;
        PoolWithTag = (char *)ndisPerProcRcvTrackers + 696 * v13 + v12 + 8;
        *(_DWORD *)((char *)ndisPerProcRcvTrackers + v12) = v13 + 1;
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
        v17 = (_QWORD *)v15[41];
        if ( v17 && *(_BYTE *)(v17[3] + 56LL) >= 6u )
        {
          ndisMIndicateNetBufferListsToOpen(v17, v7, a5);
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
              v18 = (_QWORD *)v15[1];
              if ( v18 )
              {
                v19 = *((_DWORD *)PoolWithTag + 172);
                v20 = *((_DWORD *)PoolWithTag + 4) | 2;
                do
                {
                  v21 = (_QWORD *)v18[53];
                  v22 = 0LL;
                  do
                  {
                    v23 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v22 + 64];
                    v22 = (unsigned int)(v22 + 1);
                    if ( v23 )
                      ndisMIndicateNetBufferListsToOpen(v18, v23, v20);
                  }
                  while ( (unsigned int)v22 <= v19 );
                  v18 = v21;
                }
                while ( v21 );
                v10 = a5;
              }
              v24 = (_QWORD *)v15[2];
              if ( v24 )
              {
                if ( (a5 & 2) != 0 )
                {
                  v29 = *((_DWORD *)PoolWithTag + 172);
                  v30 = *((_DWORD *)PoolWithTag + 4) | 2;
                  do
                  {
                    v31 = (_QWORD *)v24[53];
                    v32 = 0LL;
                    do
                    {
                      v33 = *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v32 + 64];
                      v32 = (unsigned int)(v32 + 1);
                      if ( v33 )
                        ndisMIndicateNetBufferListsToOpen(v24, v33, v30);
                    }
                    while ( (unsigned int)v32 <= v29 );
                    v24 = v31;
                  }
                  while ( v31 );
                }
                else
                {
                  v25 = *((_DWORD *)PoolWithTag + 4);
                  v26 = *((_DWORD *)PoolWithTag + 172);
                  if ( *(_DWORD *)(*(_QWORD *)PoolWithTag + 2252LL) )
                    ndisIndicateToPmodeOpens((__int64)PoolWithTag);
                  for ( i = 1; i <= v26; ++i )
                  {
                    v28 = i;
                    ndisMIndicateNetBufferListsToOpen(
                      *(NDIS_HANDLE *)&PoolWithTag[40 * v28 + 56],
                      *(struct _NET_BUFFER_LIST **)&PoolWithTag[40 * v28 + 64],
                      v25);
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
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2B8uLL, 0x2020444Eu);
  if ( PoolWithTag )
    goto LABEL_7;
  if ( (unsigned __int8)byte_1C009260B >= 2u )
    WPP_SF_(10LL, &WPP_b73f8523fdf5311d444d9d2d2cf99027_Traceguids);
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
      v52 = a5 & 1;
      v34 = v52 != 0;
      v55.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v8 + 40);
      v35 = v7;
      v55.DatapathEventsMask = *(_DWORD *)(v8 + 48);
      v55.DatapathCyclesMask = *(_DWORD *)(v8 + 80);
      v55.CurrentCpu = -1;
      do
      {
        v35->Flags = v35->Flags & 0xFFFFFFF4 | 8;
        v35 = (struct _NET_BUFFER_LIST *)v35->Link.Alignment;
      }
      while ( v35 );
      if ( Microsoft_Windows_Networking_CorrelationEnabled )
        ndisMarkNetBufferListCorrelationIdsAsUsed(v7);
      if ( *(_DWORD *)(v8 + 3240) )
        v7 = (struct _NET_BUFFER_LIST *)ndisReturnPeriodicReceives(v8, v7);
      if ( !v7 )
        goto LABEL_35;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v7,
          0LL,
          *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v8 + 2544),
          NdisNblTrackerEvent_ProtocolReturned,
          v34);
      if ( (v55.DatapathCyclesMask & 0x20) != 0 )
      {
        if ( (a5 & 1) == 0 )
          KfRaiseIrql(2u);
        ndisPcwStartCycleCounter(&v55, 5u);
      }
      v36 = *(void (**)(void))(v8 + 2648);
      v37 = *(void **)(v8 + 2536);
      v38 = *(_QWORD **)(a1 + 2552);
      if ( *(_BYTE *)v38 == 17 )
        goto LABEL_56;
      if ( !ndisIterativeDataPathDisabled && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2) )
      {
        v39 = KeGetPcr()->Prcb.Number;
        v40 = (struct _NET_BUFFER_LIST **)v56;
        v53 = v39;
        v56[2] = 0LL;
        v56[0] = v7;
        v56[1] = v7;
        v7->Scratch = 0LL;
        v7->ChildRefCount = v34;
        if ( *(_BYTE *)v38 == 5 )
        {
          while ( *v40 )
          {
            v41 = v38;
            v42 = v38[54] + 96LL * v39;
            v43 = *(_BYTE *)(v42 + 88);
            *(_BYTE *)(v42 + 88) = 1;
            v44 = *v40;
            v66 = v43;
            *v40 = 0LL;
            if ( v44 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v44->Scratch;
                ChildRefCount = v44->ChildRefCount;
                v44->ChildRefCount = 0;
                ndisCallReceiveCompleteHandler(v38, v36, v37, v44, 0, 0, ChildRefCount);
                v44 = Scratch;
              }
              while ( Scratch );
              v43 = v66;
            }
            *(_BYTE *)(v42 + 88) = 0;
            if ( v43 )
            {
              *(_BYTE *)(v42 + 88) = 1;
              goto LABEL_84;
            }
            v38 = (_QWORD *)v38[70];
            v40 = (struct _NET_BUFFER_LIST **)(v42 + 72);
            v36 = (void (*)(void))v41[67];
            v37 = (void *)v41[68];
            v39 = v53;
            if ( *(_BYTE *)v38 != 5 )
              goto LABEL_84;
          }
        }
        else
        {
LABEL_84:
          v46 = *v40;
          if ( *v40 )
          {
            *v40 = 0LL;
            do
            {
              v47 = (struct _NET_BUFFER_LIST *)v46->Scratch;
              v50 = v46->ChildRefCount;
              v46->ChildRefCount = 0;
              ndisCallReceiveCompleteHandler(v38, v36, v37, v46, 0, 0, v50);
              v46 = v47;
            }
            while ( v47 );
          }
        }
        goto LABEL_57;
      }
      if ( *(_BYTE *)a1 != 5 )
      {
LABEL_56:
        ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, bool))v36)(v37, v7, v52 != 0);
      }
      else
      {
        v58 = *(_QWORD *)(a1 + 2552);
        v59 = v37;
        v63 = 3LL;
        v60 = v36;
        v61 = v7;
        v62 = 0;
        v64 = v52 != 0;
        if ( KeExpandKernelStackAndCalloutEx(ndisDataPathExpandStackCallback, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
          ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)a1, v7, 0);
      }
LABEL_57:
      if ( (v55.DatapathCyclesMask & 0x20) != 0 )
      {
        ndisPcwEndCycleCounter(&v55, 5u, 0x12uLL);
        if ( v48 != 2 )
          KeLowerIrql(v48);
      }
    }
  }
LABEL_35:
  if ( v51 )
  {
    --*((_DWORD *)ndisPerProcRcvTrackers + 524 * v54);
  }
  else if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
  }
}
