/*
 * XREFs of ndisReferenceTopMiniportByNameForNsi @ 0x1C00093E0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0006B60 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00075D0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00084A0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001EB44 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C00A5594 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C0009D78 (ndisDereferenceMiniportForNsi.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     memcmp @ 0x1C0028680 (memcmp.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceTopMiniportByNameForNsi(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  _NDIS_MINIPORT_BLOCK *v6; // r15
  __int64 v7; // rbp
  unsigned int v8; // r12d
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // r14
  KIRQL v11; // si
  _REFERENCE_EX *p_Ref; // r13
  int v13; // ebx
  KIRQL v14; // di
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbx
  _WORD *v17; // rcx
  KIRQL v18; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  _NDIS_MINIPORT_BLOCK *v20; // r13
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  KIRQL v24; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbp
  KIRQL v26; // al
  ULONG_PTR v27; // r8
  KIRQL v28; // di
  int v29; // ecx
  __int64 v30; // r10
  unsigned __int8 v31; // r9
  _BYTE *v32; // rdx
  bool v33; // zf
  char v34; // bl
  int v36; // eax
  char v37; // bp
  KIRQL v38; // r14
  struct _NDIS_REFCOUNT_BLOCK *v39; // rsi
  unsigned __int8 *p_Tag; // rcx
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rdi
  unsigned __int8 *v42; // rcx
  unsigned int *p_Number; // rax
  __int64 v44; // r9
  unsigned __int8 v45; // r10
  unsigned __int8 v46; // r8
  _BYTE *v47; // rdx
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // dl
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r9
  unsigned __int8 v52; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v53; // rdx
  unsigned __int8 v54; // dl
  unsigned __int8 v55; // dl
  _NDIS_REFCOUNT_TAGGED_ENTRY *v56; // r10
  unsigned __int8 v57; // r9
  unsigned __int8 v58; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v59; // rdx
  unsigned __int8 v60; // dl
  unsigned __int8 v61; // dl
  ULONG_PTR v62; // rbx
  unsigned int v63; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v65; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  _NDIS_MINIPORT_BLOCK *v70; // [rsp+30h] [rbp-68h]
  _NDIS_MINIPORT_BLOCK *v71; // [rsp+38h] [rbp-60h]
  struct _NDIS_M_DRIVER_BLOCK *v72; // [rsp+40h] [rbp-58h]
  _REFERENCE_EX *v73; // [rsp+48h] [rbp-50h]
  int v75; // [rsp+A8h] [rbp+10h]
  KIRQL v76; // [rsp+B0h] [rbp+18h]

  v6 = 0LL;
  v7 = a1;
  v71 = 0LL;
  v70 = 0LL;
  v8 = 1;
  v75 = ~a2;
  if ( !*(_QWORD *)(a1 + 3792) )
    return 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v11 = v9;
  v72 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_30;
  while ( 2 )
  {
    p_Ref = &v10->Ref;
    v73 = &v10->Ref;
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
        RefCountTracker = v10->Ref.RefCountTracker;
        v10->Ref.ReferenceCount = ReferenceCount + 1;
        if ( RefCountTracker )
        {
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 130), 1u);
          }
          else
          {
            v17 = 0LL;
            if ( _bittestandset((signed __int32 *)RefCountTracker + 4, 8u) )
            {
              v44 = *((_QWORD *)RefCountTracker + 1);
              if ( !v44 )
                goto LABEL_149;
              v45 = *((_BYTE *)RefCountTracker + 3);
              v46 = 0;
              if ( !v45 )
                goto LABEL_149;
              do
              {
                v47 = (_BYTE *)(v44 + 2LL * v46);
                if ( *v47 == 8 )
                {
                  if ( v47[1] != 0xFF )
                  {
                    ++v47[1];
                    goto LABEL_8;
                  }
                }
                else if ( !v47[1] )
                {
                  v17 = (_WORD *)(v44 + 2LL * v46);
                }
                ++v46;
              }
              while ( v46 < v45 );
              if ( v17 )
              {
                *v17 = 264;
              }
              else
              {
LABEL_149:
                if ( !*((_BYTE *)RefCountTracker + 1) )
                {
                  v48 = *((_BYTE *)RefCountTracker + 3);
                  if ( v48 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                    *((_BYTE *)RefCountTracker + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v48 + 2 > 0xFF )
                      v49 = -1;
                    else
                      v49 = v48 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v49);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
              }
            }
          }
        }
LABEL_8:
        v13 = 0;
      }
    }
    KeReleaseSpinLock(&v10->Ref.SpinLock, v14);
    if ( v13 )
    {
      NextDriver = v10->NextDriver;
      goto LABEL_28;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
    v18 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    MiniportQueue = v10->MiniportQueue;
    v76 = v18;
    if ( !MiniportQueue )
      goto LABEL_18;
    v20 = v71;
    do
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( !BindPaths )
        goto LABEL_16;
      if ( BindPaths->Number < v8 )
        goto LABEL_16;
      v22 = *(_QWORD *)(v7 + 3792);
      v23 = *(_WORD *)(v22 + 8);
      if ( v23 != BindPaths->Paths[0].Length || memcmp(*(const void **)(v22 + 16), BindPaths->Paths[0].Buffer, v23) )
        goto LABEL_16;
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      v36 = v75 & MiniportQueue->Flags;
      MiniportQueue->LockDbg = 71980;
      if ( (v36 & 0x80200020) == 0
        && (MiniportQueue->PnPFlags & 0x1084110) == 0
        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
        && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
      {
        v37 = 1;
        v38 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
        if ( !MiniportQueue->Ref.Closing )
        {
          v39 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
          if ( v39 )
          {
            if ( v39->Type )
            {
              if ( v39->Type == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v39->8 + a6, 1u);
            }
            else
            {
              p_Tag = 0LL;
              if ( _bittestandset((signed __int32 *)v39->TaggedRefCounts.RefMask, a6) )
              {
                Tags = v39->TaggedRefCounts.Tags;
                if ( !Tags )
                  goto LABEL_150;
                NumOverflowTaggedEntries = v39->NumOverflowTaggedEntries;
                v52 = 0;
                if ( !NumOverflowTaggedEntries )
                  goto LABEL_150;
                do
                {
                  v53 = &Tags[v52];
                  if ( v53->Tag == a6 )
                  {
                    if ( v53->RefCount != 0xFF )
                    {
                      ++v53->RefCount;
                      goto LABEL_41;
                    }
                  }
                  else if ( !v53->RefCount )
                  {
                    p_Tag = &Tags[v52].Tag;
                  }
                  ++v52;
                }
                while ( v52 < NumOverflowTaggedEntries );
                if ( p_Tag )
                {
                  *p_Tag = a6;
                  p_Tag[1] = 1;
                }
                else
                {
LABEL_150:
                  if ( !v39->Type )
                  {
                    v54 = v39->NumOverflowTaggedEntries;
                    if ( v54 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory(v39);
                      v39->Type = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v54 + 2 <= 0xFF )
                        v55 = v54 + 2;
                      else
                        v55 = -1;
                      ndisResizeRefCountBlockTagged(v39, v55);
                    }
                  }
                  NdisReferenceWithTag(v39);
                }
              }
            }
          }
LABEL_41:
          v33 = MiniportQueue->Ref.ReferenceCount++ == -1;
          if ( !v33 )
            goto LABEL_42;
          MiniportQueue->Ref.ReferenceCount = -1;
        }
        v37 = 0;
LABEL_42:
        if ( (unsigned __int8)byte_1C009261B >= 4u )
          WPP_SF_qD(
            12LL,
            &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids,
            MiniportQueue,
            MiniportQueue->Ref.ReferenceCount);
        KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v38);
        if ( v37 )
        {
          NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
          v70 = v20;
          if ( NsiRefCountTracker )
          {
            if ( NsiRefCountTracker->Type )
            {
              if ( NsiRefCountTracker->Type == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&NsiRefCountTracker->8 + a5, 1u);
            }
            else
            {
              v42 = 0LL;
              if ( _bittestandset((signed __int32 *)NsiRefCountTracker->TaggedRefCounts.RefMask, a5) )
              {
                v56 = NsiRefCountTracker->TaggedRefCounts.Tags;
                if ( !v56 )
                  goto LABEL_151;
                v57 = NsiRefCountTracker->NumOverflowTaggedEntries;
                v58 = 0;
                if ( !v57 )
                  goto LABEL_151;
                do
                {
                  v59 = &v56[v58];
                  if ( v59->Tag == a5 )
                  {
                    if ( v59->RefCount != 0xFF )
                    {
                      ++v59->RefCount;
                      goto LABEL_48;
                    }
                  }
                  else if ( !v59->RefCount )
                  {
                    v42 = &v56[v58].Tag;
                  }
                  ++v58;
                }
                while ( v58 < v57 );
                if ( v42 )
                {
                  *v42 = a5;
                  v42[1] = 1;
                }
                else
                {
LABEL_151:
                  if ( !NsiRefCountTracker->Type )
                  {
                    v60 = NsiRefCountTracker->NumOverflowTaggedEntries;
                    if ( v60 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory(NsiRefCountTracker);
                      NsiRefCountTracker->Type = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v60 + 2 <= 0xFF )
                        v61 = v60 + 2;
                      else
                        v61 = -1;
                      ndisResizeRefCountBlockTagged(NsiRefCountTracker, v61);
                    }
                  }
                  NdisReferenceWithTag(NsiRefCountTracker);
                }
              }
            }
          }
LABEL_48:
          p_Number = &MiniportQueue->BindPaths->Number;
          v20 = MiniportQueue;
          ++MiniportQueue->NsiOpenReferences;
          v8 = *p_Number;
        }
        v7 = a1;
      }
      MiniportQueue->MiniportThread = 0LL;
      MiniportQueue->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v70 )
      {
        ndisDereferenceMiniportForNsi(v70, a5, a6);
        v70 = 0LL;
      }
LABEL_16:
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    while ( MiniportQueue );
    v10 = v72;
    v18 = v76;
    v71 = v20;
    p_Ref = v73;
LABEL_18:
    KeReleaseSpinLock(&p_Ref->SpinLock, v18);
    v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v10->NextDriver;
    v11 = v24;
    v26 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v27 = (ULONG_PTR)p_Ref->RefCountTracker;
    v28 = v26;
    if ( v27 )
    {
      v29 = *(unsigned __int8 *)(v27 + 1);
      if ( *(_BYTE *)(v27 + 1) )
      {
        if ( v29 == 1 )
        {
          v62 = v27 + 520;
          v63 = *(_DWORD *)(v27 + 576);
          if ( v63 >> 17 < 0x3FFE && (unsigned __int16)v63 >> 1 == (v63 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 520));
            *(_DWORD *)(v62 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v63 & 0xFFFE) == 0 && (v63 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v27, 8uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 520), 0);
          }
        }
      }
      else
      {
        v30 = *(_QWORD *)(v27 + 8);
        if ( v30 && (v31 = *(_BYTE *)(v27 + 3)) != 0 )
        {
          while ( 1 )
          {
            v32 = (_BYTE *)(v30 + 2LL * (unsigned __int8)v29);
            if ( *v32 == 8 )
            {
              if ( v32[1] )
                break;
            }
            LOBYTE(v29) = v29 + 1;
            if ( (unsigned __int8)v29 >= v31 )
              goto LABEL_24;
          }
          --v32[1];
        }
        else
        {
LABEL_24:
          if ( !_bittestandreset((signed __int32 *)(v27 + 16), 8u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v27, 8uLL);
        }
      }
    }
    v33 = p_Ref->ReferenceCount-- == 1;
    if ( v33 )
    {
      v34 = 1;
      if ( !p_Ref->ZeroBased )
      {
        NdisFreeRefCount(p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = 0LL;
      }
    }
    else
    {
      v34 = 0;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v28);
    if ( v34 )
    {
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(23LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v10);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v65 = *p_NextDriver;
          if ( *p_NextDriver == v10 )
            break;
          p_NextDriver = &v65->NextDriver;
          if ( !v65->NextDriver )
            goto LABEL_134;
        }
        *p_NextDriver = v10->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_134:
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
        KeWaitForSingleObject(&v10->IMStartRemoveMutex, Executive, 0, 0, 0LL);
        PendingDeviceList = v10->PendingDeviceList;
        v10->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
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
        v10->IMStartRemoveMutexOwnerThread = 0LL;
        KeReleaseMutex(&v10->IMStartRemoveMutex, 0);
      }
      KeSetEvent(&v10->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(24LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v10);
    }
LABEL_28:
    v72 = NextDriver;
    v10 = NextDriver;
    if ( NextDriver )
    {
      v7 = a1;
      continue;
    }
    break;
  }
  v6 = v71;
LABEL_30:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  return v6;
}
