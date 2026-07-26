/*
 * XREFs of ndisReferenceTopMiniportByNameForNsi @ 0x1C000BC90
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0007254 (ndisIndicateStatusInternal.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000A970 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000D6B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E3F0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00B74EC (ndisDeviceControlHandler.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000985C (ndisDereferenceMiniportForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     memcmp @ 0x1C0024E20 (memcmp.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceTopMiniportByNameForNsi(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v6; // r12
  unsigned int v7; // r14d
  __int64 v8; // rbp
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // r13
  KIRQL v11; // si
  _REFERENCE_EX *p_Ref; // r15
  int v13; // ebx
  KIRQL v14; // di
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v17; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v19; // r12
  __int64 v20; // r12
  __int64 v21; // r13
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  KIRQL v25; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rdi
  KIRQL v27; // al
  ULONG_PTR v28; // r10
  KIRQL v29; // bp
  int v30; // ecx
  __int64 v31; // r9
  unsigned __int8 v32; // r8
  _BYTE *v33; // rdx
  bool v34; // zf
  char v35; // bl
  char v37; // al
  int v38; // eax
  char v39; // si
  KIRQL v40; // bp
  struct _NDIS_REFCOUNT_BLOCK *v41; // rcx
  int *v42; // rax
  ULONG_PTR v43; // rbx
  unsigned int v44; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v46; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  int v51; // [rsp+20h] [rbp-68h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  __int64 v53; // [rsp+30h] [rbp-58h]
  struct _NDIS_M_DRIVER_BLOCK *v54; // [rsp+38h] [rbp-50h]
  int v56; // [rsp+98h] [rbp+10h]
  KIRQL v57; // [rsp+A0h] [rbp+18h]

  v6 = 0LL;
  v7 = 1;
  v8 = a1;
  v56 = ~a2;
  v53 = 0LL;
  v52 = 0LL;
  v51 = 1;
  if ( !*(_QWORD *)(a1 + 3792) )
    return 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v11 = v9;
  v54 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_28;
  do
  {
    p_Ref = &v10->Ref;
    v13 = 1;
    v14 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    if ( !v10->Ref.Closing )
    {
      ReferenceCount = v10->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v13 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v10->Ref.RefCountTracker;
        v10->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker);
        v13 = 0;
      }
    }
    KeReleaseSpinLock(&v10->Ref.SpinLock, v14);
    if ( v13 )
    {
      NextDriver = v10->NextDriver;
      goto LABEL_26;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
    v17 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    MiniportQueue = v10->MiniportQueue;
    v19 = v17;
    v57 = v17;
    if ( !MiniportQueue )
      goto LABEL_15;
    v20 = v53;
    v21 = v52;
    do
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( !BindPaths )
        goto LABEL_13;
      if ( BindPaths->Number < v7 )
        goto LABEL_13;
      v23 = *(_QWORD *)(v8 + 3792);
      v24 = *(_WORD *)(v23 + 8);
      if ( v24 != BindPaths->Paths[0].Length || memcmp(*(const void **)(v23 + 16), BindPaths->Paths[0].Buffer, v24) )
        goto LABEL_13;
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      v38 = v56 & MiniportQueue->Flags;
      MiniportQueue->LockDbg = 71765;
      if ( (v38 & 0x80200020) == 0
        && (MiniportQueue->PnPFlags & 0x1084110) == 0
        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
        && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
      {
        v39 = 1;
        v40 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
        if ( !MiniportQueue->Ref.Closing )
        {
          v41 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
          if ( v41 )
            NdisReferenceWithTag(v41);
          v34 = MiniportQueue->Ref.ReferenceCount++ == -1;
          if ( !v34 )
            goto LABEL_39;
          MiniportQueue->Ref.ReferenceCount = -1;
        }
        v39 = 0;
LABEL_39:
        if ( (unsigned __int8)byte_1C009875B >= 4u )
          WPP_SF_qD(
            12LL,
            &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids,
            MiniportQueue,
            MiniportQueue->Ref.ReferenceCount);
        KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v40);
        if ( v39 )
        {
          v21 = v20;
          NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker);
          v42 = (int *)MiniportQueue->BindPaths;
          v20 = (__int64)MiniportQueue;
          ++MiniportQueue->NsiOpenReferences;
          v51 = *v42;
        }
        v8 = a1;
      }
      MiniportQueue->MiniportThread = 0LL;
      MiniportQueue->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v21 )
      {
        ndisDereferenceMiniportForNsi(v21, a5, a6);
        v21 = 0LL;
      }
      v7 = v51;
LABEL_13:
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    while ( MiniportQueue );
    v52 = v21;
    v10 = v54;
    v53 = v20;
    v19 = v57;
    p_Ref = &v54->Ref;
LABEL_15:
    KeReleaseSpinLock(&p_Ref->SpinLock, v19);
    v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v10->NextDriver;
    v11 = v25;
    v27 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v28 = (ULONG_PTR)p_Ref->RefCountTracker;
    v29 = v27;
    if ( v28 )
    {
      v30 = *(unsigned __int8 *)(v28 + 1);
      if ( *(_BYTE *)(v28 + 1) )
      {
        if ( v30 == 1 )
        {
          v43 = v28 + 520;
          v44 = *(_DWORD *)(v28 + 576);
          if ( v44 >> 17 < 0x3FFE && (unsigned __int16)v44 >> 1 == (v44 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 520));
            *(_DWORD *)(v43 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v44 & 0xFFFE) == 0 && (v44 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)p_Ref->RefCountTracker, 8uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 520), 0);
          }
        }
      }
      else
      {
        v31 = *(_QWORD *)(v28 + 8);
        if ( v31 && (v32 = *(_BYTE *)(v28 + 3)) != 0 )
        {
          while ( 1 )
          {
            v33 = (_BYTE *)(v31 + 2LL * (unsigned __int8)v30);
            if ( *v33 == 8 )
            {
              v37 = v33[1];
              if ( v37 )
                break;
            }
            LOBYTE(v30) = v30 + 1;
            if ( (unsigned __int8)v30 >= v32 )
              goto LABEL_21;
          }
          v33[1] = v37 - 1;
        }
        else
        {
LABEL_21:
          if ( !_bittestandreset((signed __int32 *)(v28 + 16), 8u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v28, 8uLL);
        }
      }
    }
    v34 = p_Ref->ReferenceCount-- == 1;
    if ( v34 )
    {
      v35 = 1;
      if ( !p_Ref->ZeroBased )
      {
        NdisFreeRefCount((struct _NDIS_REFCOUNT_BLOCK *)p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = 0LL;
      }
    }
    else
    {
      v35 = 0;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v29);
    if ( v35 )
    {
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(23LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v10);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v46 = *p_NextDriver;
          if ( *p_NextDriver == v10 )
            break;
          p_NextDriver = &v46->NextDriver;
          if ( !v46->NextDriver )
            goto LABEL_68;
        }
        *p_NextDriver = v10->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_68:
      Buffer = v10->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v10->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v10->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v10->NdisDriverInfo = 0LL;
      }
      if ( (v10->Flags & 1) != 0 )
      {
        PendingDeviceList = v10->PendingDeviceList;
        if ( PendingDeviceList )
        {
          do
          {
            Next = PendingDeviceList->Next;
            ExFreePoolWithTag(PendingDeviceList, 0);
            PendingDeviceList = Next;
          }
          while ( Next );
        }
      }
      KeSetEvent(&v10->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(24LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v10);
    }
    v8 = a1;
LABEL_26:
    v54 = NextDriver;
    v10 = NextDriver;
  }
  while ( NextDriver );
  v6 = v53;
LABEL_28:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  return v6;
}
