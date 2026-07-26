/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C00136F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00246A4 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisClearBusy @ 0x1C006FEDC (ndisClearBusy.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  NDIS_HANDLE v5; // rbx
  KIRQL v6; // si
  __int64 v7; // rdi
  __int64 v8; // r15
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD); // r12
  unsigned int Number; // ecx
  __int64 *v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rbp
  char v14; // al
  __int64 v15; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r15
  __int64 v19; // rdx
  struct _VF_NDIS_DISPATCH_TABLE *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rsi
  PNET_BUFFER_LIST Alignment; // rax
  __int64 i; // rdx
  char v25; // [rsp+30h] [rbp-B8h]
  unsigned int v26; // [rsp+34h] [rbp-B4h]
  __int64 v27; // [rsp+38h] [rbp-B0h]
  struct NDIS_PCW_CONTEXT v28; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v29[3]; // [rsp+58h] [rbp-90h] BYREF
  _BYTE Parameter[8]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v31; // [rsp+78h] [rbp-70h]
  __int64 v32; // [rsp+80h] [rbp-68h]
  void (__fastcall *v33)(_QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp-60h]
  PNET_BUFFER_LIST v34; // [rsp+90h] [rbp-58h]
  int v35; // [rsp+98h] [rbp-50h]
  __int64 v36; // [rsp+9Ch] [rbp-4Ch]
  ULONG v37; // [rsp+A4h] [rbp-44h]
  char v39; // [rsp+108h] [rbp+20h]

  v5 = MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(60LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, MiniportAdapterHandle, NetBufferList);
  if ( *((_QWORD *)v5 + 560) )
  {
    Alignment = NetBufferList;
    for ( i = 0LL; Alignment; i = (unsigned int)(i + 1) )
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
    ndisClearBusy(v5, i, 52LL);
  }
  v6 = 2;
  v28.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v5 + 5);
  v28.DatapathEventsMask = *((_DWORD *)v5 + 12);
  v28.DatapathCyclesMask = *((_DWORD *)v5 + 20);
  v28.CurrentCpu = -1;
  v39 = 2;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferList,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 513),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 324),
      NdisNblTrackerEvent_MiniportSendCompleted,
      (SendCompleteFlags & 1) != 0);
  if ( (v28.DatapathCyclesMask & 0x100) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
    {
      v6 = KfRaiseIrql(2u);
      v39 = v6;
    }
    ndisPcwStartCycleCounter(&v28, 8u);
  }
  v7 = *((_QWORD *)v5 + 325);
  v8 = *((_QWORD *)v5 + 323);
  v9 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))*((_QWORD *)v5 + 328);
  v27 = v8;
  if ( *(_BYTE *)v7 == 17 )
    goto LABEL_45;
  if ( ndisIterativeDataPathDisabled || (SendCompleteFlags & 1) == 0 && KeGetCurrentIrql() != 2 )
  {
    if ( *(_BYTE *)v5 == 5 )
    {
      v35 = 0;
      v31 = v7;
      v32 = v8;
      v36 = 1LL;
      v33 = v9;
      v34 = NetBufferList;
      v37 = SendCompleteFlags;
      if ( KeExpandKernelStackAndCalloutEx(
             (PEXPAND_STACK_CALLOUT)ndisDataPathExpandStackCallback,
             Parameter,
             0x4CCCuLL,
             0,
             0LL) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, NetBufferList, 1u);
      goto LABEL_25;
    }
LABEL_45:
    v9(v8, NetBufferList, SendCompleteFlags);
    goto LABEL_25;
  }
  Number = KeGetPcr()->Prcb.Number;
  v11 = v29;
  v26 = Number;
  v29[2] = 0LL;
  v29[0] = NetBufferList;
  v29[1] = NetBufferList;
  NetBufferList->Scratch = 0LL;
  NetBufferList->ChildRefCount = SendCompleteFlags;
  if ( *(_BYTE *)v7 == 5 )
  {
    while ( *v11 )
    {
      v12 = v7;
      v13 = *(_QWORD *)(v7 + 432) + 96LL * Number;
      v14 = *(_BYTE *)(v13 + 40);
      *(_BYTE *)(v13 + 40) = 1;
      v15 = *v11;
      v25 = v14;
      *v11 = 0LL;
      if ( v15 )
      {
        do
        {
          v16 = ndisVerifierNdisDispatch;
          v17 = *(unsigned int *)(v15 + 132);
          v18 = *(_QWORD *)(v15 + 112);
          *(_DWORD *)(v15 + 132) = 0;
          if ( v16 && *(_BYTE *)v7 == 5 && *(_QWORD *)(v7 + 912) )
            ((void (__fastcall *)(__int64, __int64, _QWORD))v16->NdisFilterSendNetBufferListsCompleteHandler)(
              v27,
              v15,
              0LL);
          else
            v9(v27, v15, v17);
          v15 = v18;
        }
        while ( v18 );
        v5 = MiniportAdapterHandle;
        v8 = v27;
        v14 = v25;
      }
      *(_BYTE *)(v13 + 40) = 0;
      if ( v14 )
      {
        *(_BYTE *)(v13 + 40) = 1;
        goto LABEL_19;
      }
      v7 = *(_QWORD *)(v7 + 496);
      v11 = (__int64 *)(v13 + 24);
      v8 = *(_QWORD *)(v12 + 480);
      v9 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v12 + 472);
      Number = v26;
      v27 = v8;
      if ( *(_BYTE *)v7 != 5 )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v19 = *v11;
    if ( *v11 )
    {
      *v11 = 0LL;
      do
      {
        v20 = ndisVerifierNdisDispatch;
        v21 = *(unsigned int *)(v19 + 132);
        v22 = *(_QWORD *)(v19 + 112);
        *(_DWORD *)(v19 + 132) = 0;
        if ( v20 && *(_BYTE *)v7 == 5 && *(_QWORD *)(v7 + 912) )
          ((void (__fastcall *)(__int64, __int64, _QWORD))v20->NdisFilterSendNetBufferListsCompleteHandler)(
            v8,
            v19,
            0LL);
        else
          v9(v8, v19, v21);
        v19 = v22;
      }
      while ( v22 );
    }
  }
  v6 = v39;
LABEL_25:
  if ( (v28.DatapathCyclesMask & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v28, 8u, 0x15uLL);
    if ( v6 != 2 )
      KeLowerIrql(v6);
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_qq(61LL, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, v5, NetBufferList);
}
