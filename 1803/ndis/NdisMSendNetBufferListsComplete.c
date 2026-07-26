/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C0001980
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0025638 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisClearBusy @ 0x1C0070730 (ndisClearBusy.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  unsigned int *v5; // rbx
  unsigned int v6; // esi
  KIRQL v7; // r14
  __int64 CurrentIrql; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  void (__fastcall *v11)(__int64, PNET_BUFFER_LIST, __int64); // r12
  PNET_BUFFER_LIST *v12; // rdi
  bool v13; // zf
  PNET_BUFFER_LIST v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r14
  char v17; // al
  PNET_BUFFER_LIST v18; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v19; // rax
  __int64 ChildRefCount; // r8
  struct _NET_BUFFER_LIST *Scratch; // rbp
  struct _VF_NDIS_DISPATCH_TABLE *v22; // rax
  __int64 v23; // r8
  struct _NET_BUFFER_LIST *v24; // rdi
  PNET_BUFFER_LIST Alignment; // rax
  __int64 i; // rdx
  char v27; // [rsp+30h] [rbp-B8h]
  __int64 v28; // [rsp+38h] [rbp-B0h]
  unsigned int v29; // [rsp+40h] [rbp-A8h]
  struct NDIS_PCW_CONTEXT v30; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v31[3]; // [rsp+60h] [rbp-88h] BYREF
  char Parameter[8]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v33; // [rsp+80h] [rbp-68h]
  __int64 v34; // [rsp+88h] [rbp-60h]
  void (__fastcall *v35)(__int64, PNET_BUFFER_LIST, __int64); // [rsp+90h] [rbp-58h]
  PNET_BUFFER_LIST v36; // [rsp+98h] [rbp-50h]
  int v37; // [rsp+A0h] [rbp-48h]
  __int64 v38; // [rsp+A4h] [rbp-44h]
  ULONG v39; // [rsp+ACh] [rbp-3Ch]
  char v41; // [rsp+108h] [rbp+20h]

  v5 = (unsigned int *)MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(60LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, MiniportAdapterHandle, NetBufferList);
  if ( *((_QWORD *)v5 + 560) )
  {
    Alignment = NetBufferList;
    for ( i = 0LL; Alignment; i = (unsigned int)(i + 1) )
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
    ndisClearBusy(v5, i, 52LL);
  }
  v6 = v5[20];
  v7 = 2;
  v30.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v5 + 5);
  CurrentIrql = v5[12];
  v30.DatapathEventsMask = v5[12];
  v30.DatapathCyclesMask = v6;
  v30.CurrentCpu = -1;
  v41 = 2;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferList,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 513),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 324),
      NdisNblTrackerEvent_MiniportSendCompleted,
      (SendCompleteFlags & 1) != 0);
  if ( (v6 & 0x100) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
    {
      v7 = KfRaiseIrql(2u);
      v41 = v7;
    }
    ndisPcwStartCycleCounter(&v30, 8u);
  }
  v9 = *((_QWORD *)v5 + 325);
  v10 = *((_QWORD *)v5 + 323);
  v11 = (void (__fastcall *)(__int64, PNET_BUFFER_LIST, __int64))*((_QWORD *)v5 + 328);
  v28 = v10;
  if ( *(_BYTE *)v9 == 17 )
    goto LABEL_38;
  if ( !ndisIterativeDataPathDisabled
    && ((SendCompleteFlags & 1) != 0 || (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql == 2)) )
  {
    LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
    v12 = (PNET_BUFFER_LIST *)v31;
    NetBufferList->Scratch = 0LL;
    NetBufferList->ChildRefCount = SendCompleteFlags;
    v13 = *(_BYTE *)v9 == 5;
    v31[2] = 0LL;
    v14 = NetBufferList;
    v29 = CurrentIrql;
    v31[0] = NetBufferList;
    v31[1] = NetBufferList;
    if ( v13 )
    {
      while ( 1 )
      {
        if ( !*v12 )
          goto LABEL_46;
        v15 = v9;
        v16 = 96 * CurrentIrql + *(_QWORD *)(v9 + 432) + 24LL;
        v17 = *(_BYTE *)(v16 + 16);
        *(_BYTE *)(v16 + 16) = 1;
        v18 = *v12;
        v27 = v17;
        *v12 = 0LL;
        if ( v18 )
        {
          do
          {
            v19 = ndisVerifierNdisDispatch;
            ChildRefCount = (unsigned int)v18->ChildRefCount;
            Scratch = (struct _NET_BUFFER_LIST *)v18->Scratch;
            v18->ChildRefCount = 0;
            if ( v19 && *(_BYTE *)v9 == 5 && *(_QWORD *)(v9 + 912) )
              ((void (__fastcall *)(__int64, PNET_BUFFER_LIST, _QWORD))v19->NdisFilterSendNetBufferListsCompleteHandler)(
                v28,
                v18,
                0LL);
            else
              v11(v28, v18, ChildRefCount);
            v18 = Scratch;
          }
          while ( Scratch );
          v5 = (unsigned int *)MiniportAdapterHandle;
          v17 = v27;
        }
        *(_BYTE *)(v16 + 16) = 0;
        if ( v17 )
          break;
        v9 = *(_QWORD *)(v9 + 496);
        v12 = (PNET_BUFFER_LIST *)v16;
        v10 = *(_QWORD *)(v15 + 480);
        v11 = *(void (__fastcall **)(__int64, PNET_BUFFER_LIST, __int64))(v15 + 472);
        CurrentIrql = v29;
        v28 = v10;
        if ( *(_BYTE *)v9 != 5 )
        {
          v14 = *(PNET_BUFFER_LIST *)v16;
LABEL_20:
          v7 = v41;
          goto LABEL_21;
        }
      }
      v10 = v28;
      *(_BYTE *)(v16 + 16) = 1;
      v14 = *v12;
      goto LABEL_20;
    }
LABEL_21:
    if ( v14 )
    {
      *v12 = 0LL;
      do
      {
        v22 = ndisVerifierNdisDispatch;
        v23 = (unsigned int)v14->ChildRefCount;
        v24 = (struct _NET_BUFFER_LIST *)v14->Scratch;
        v14->ChildRefCount = 0;
        if ( v22 && *(_BYTE *)v9 == 5 && *(_QWORD *)(v9 + 912) )
          ((void (__fastcall *)(__int64, PNET_BUFFER_LIST, _QWORD))v22->NdisFilterSendNetBufferListsCompleteHandler)(
            v10,
            v14,
            0LL);
        else
          v11(v10, v14, v23);
        v10 = v28;
        v14 = v24;
      }
      while ( v24 );
    }
    else
    {
LABEL_46:
      v7 = v41;
    }
  }
  else
  {
    if ( *(_BYTE *)v5 != 5 )
    {
LABEL_38:
      v11(v10, NetBufferList, SendCompleteFlags);
      goto LABEL_26;
    }
    v34 = *((_QWORD *)v5 + 323);
    v37 = 0;
    v33 = v9;
    v38 = 1LL;
    v35 = v11;
    v36 = NetBufferList;
    v39 = SendCompleteFlags;
    if ( KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
           Parameter,
           0x4CCCuLL,
           0,
           0LL) < 0 )
      ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, NetBufferList, 1u);
  }
LABEL_26:
  if ( (v30.DatapathCyclesMask & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v30, 8u, 0x15uLL);
    if ( v7 != 2 )
      KeLowerIrql(v7);
  }
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(61LL, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, v5, NetBufferList);
}
