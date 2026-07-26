/*
 * XREFs of ndisReplaySendNbls @ 0x1C0070828
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006EAAC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0070F24 (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisMSendNBLToMiniportInternal @ 0x1C0016490 (ndisMSendNBLToMiniportInternal.c)
 */

void __fastcall ndisReplaySendNbls(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // rdi
  _SLIST_HEADER *v5; // r15
  struct _NET_BUFFER_LIST *Alignment; // rbx
  unsigned int Scratch; // ebp

  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  Alignment = a2;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 4104), 0x92u, 0);
  while ( Alignment )
  {
    Scratch = (unsigned int)Alignment->Scratch;
    if ( !v4 )
      goto LABEL_7;
    if ( Scratch != v3 )
    {
      v5->Alignment = 0LL;
      ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
      v4 = 0LL;
    }
    if ( !v4 )
    {
LABEL_7:
      v4 = (unsigned __int64)Alignment;
      v3 = Scratch;
    }
    v5 = (_SLIST_HEADER *)Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
  }
  ndisMSendNBLToMiniportInternal(a1, v4, v3, 0, a3);
}
