/*
 * XREFs of ndisReturnNblWithPowerQueue @ 0x1C0006300
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C0070730 (ndisClearBusy.c)
 *     ndisSetBusyAsync @ 0x1C0071BD4 (ndisSetBusyAsync.c)
 */

void __fastcall ndisReturnNblWithPowerQueue(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  char v3; // r13
  unsigned int v4; // r15d
  char v8; // bp
  KIRQL v9; // r14
  KSPIN_LOCK *v10; // rcx
  KSPIN_LOCK *v11; // rcx
  KSPIN_LOCK *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  _SLIST_HEADER *Alignment; // rax
  _SLIST_HEADER *v15; // rax
  _SLIST_HEADER *v16; // rcx

  v3 = 0;
  v4 = 0;
  if ( !*(_QWORD *)(a1 + 4480) )
    goto LABEL_2;
  Alignment = (_SLIST_HEADER *)a2;
  if ( a2 )
  {
    do
    {
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
      ++v4;
    }
    while ( Alignment );
  }
  if ( (unsigned __int8)ndisSetBusyAsync(a1, v4, 54, (_DWORD)a2, 0) )
  {
    v3 = 1;
LABEL_2:
    if ( *(int *)(a1 + 1872) < 0 && LODWORD(WPP_MAIN_CB.DeviceExtension) )
    {
      v8 = a3 & 1;
      v9 = 0;
      v10 = (KSPIN_LOCK *)(a1 + 3896);
      if ( (a3 & 1) != 0 )
        KeAcquireSpinLockAtDpcLevel(v10);
      else
        v9 = KeAcquireSpinLockRaiseToDpc(v10);
      if ( (unsigned int)(*(_DWORD *)(a1 + 3904) - 2) > 2 || *(_BYTE *)(a1 + 3924) )
      {
        ++*(_DWORD *)(a1 + 3920);
        v11 = (KSPIN_LOCK *)(a1 + 3896);
        if ( v8 )
          KeReleaseSpinLockFromDpcLevel(v11);
        else
          KeReleaseSpinLock(v11, v9);
        (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3784) + 192LL))(
          *(_QWORD *)(a1 + 24),
          a2,
          a3);
        v12 = (KSPIN_LOCK *)(a1 + 3896);
        if ( v8 )
          KeAcquireSpinLockAtDpcLevel(v12);
        else
          v9 = KeAcquireSpinLockRaiseToDpc(v12);
        --*(_DWORD *)(a1 + 3920);
      }
      else
      {
        if ( ndisNblTrackerMode )
          ndisNblTrackerTransferOwnershipInternal(a2, 0LL, *(_QWORD *)(a1 + 3928), 1LL, 1u);
        v15 = (_SLIST_HEADER *)a2->Link.Alignment;
        v16 = (_SLIST_HEADER *)a2;
        while ( v15 )
        {
          v16 = v15;
          v15 = (_SLIST_HEADER *)v15->Alignment;
        }
        v16->Alignment = *(_QWORD *)(a1 + 3912);
        *(_QWORD *)(a1 + 3912) = a2;
      }
      v13 = (KSPIN_LOCK *)(a1 + 3896);
      if ( v8 )
        KeReleaseSpinLockFromDpcLevel(v13);
      else
        KeReleaseSpinLock(v13, v9);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, struct _NET_BUFFER_LIST *, _QWORD))(*(_QWORD *)(a1 + 3784) + 192LL))(
        *(_QWORD *)(a1 + 24),
        a2,
        a3);
    }
    if ( v3 )
      ndisClearBusy(a1, v4, 54LL);
  }
}
