/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C0009870
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00A4E40 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00D04F0 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001EF4C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001EFE0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7A8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

char __fastcall ndisReferenceMiniportByHandleForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char v4; // bp
  KIRQL v5; // al
  struct _NDIS_M_DRIVER_BLOCK *v6; // rsi
  KIRQL v7; // r15
  KIRQL v8; // di
  int v9; // ebx
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbx
  _WORD *v12; // rdx
  KIRQL v13; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r13
  unsigned __int8 v15; // r14
  unsigned __int8 v16; // si
  KIRQL v17; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbp
  KIRQL v19; // al
  ULONG_PTR v20; // r8
  KIRQL v21; // di
  __int64 v22; // rax
  unsigned __int8 v23; // r9
  unsigned __int8 v24; // dl
  bool v25; // zf
  unsigned __int16 v26; // bx
  char v28; // bp
  KIRQL v29; // r15
  struct _NDIS_REFCOUNT_BLOCK *v30; // rbx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v31; // rdx
  struct _NDIS_REFCOUNT_BLOCK *v32; // rbx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v33; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r9
  unsigned __int8 v36; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v37; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v38; // r10
  unsigned __int8 v39; // r9
  unsigned __int8 v40; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v41; // rcx
  unsigned __int8 v42; // dl
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // dl
  unsigned __int8 v45; // dl
  __int64 v46; // r10
  unsigned __int8 v47; // dl
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // r9
  unsigned __int8 v50; // r8
  _BYTE *v51; // rcx
  ULONG_PTR v52; // rbx
  unsigned int v53; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v55; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  char v60; // [rsp+30h] [rbp-48h]
  KIRQL NewIrql; // [rsp+31h] [rbp-47h]
  struct _NDIS_M_DRIVER_BLOCK *v62; // [rsp+38h] [rbp-40h]
  char v65; // [rsp+98h] [rbp+20h]

  v65 = 0;
  v4 = 0;
  v60 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v6 = ndisMiniDriverList;
  v7 = v5;
  v62 = ndisMiniDriverList;
  do
  {
    if ( !v6 )
      break;
    v8 = KeAcquireSpinLockRaiseToDpc(&v6->Ref.SpinLock);
    v9 = 1;
    if ( !v6->Ref.Closing )
    {
      ReferenceCount = v6->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v9 = 2;
      }
      else
      {
        RefCountTracker = v6->Ref.RefCountTracker;
        v6->Ref.ReferenceCount = ReferenceCount + 1;
        if ( RefCountTracker )
        {
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 114), 1u);
          }
          else
          {
            v12 = 0LL;
            if ( _bittestandset((signed __int32 *)RefCountTracker + 4, 7u) )
            {
              v46 = *((_QWORD *)RefCountTracker + 1);
              if ( !v46 )
                goto LABEL_142;
              v49 = *((_BYTE *)RefCountTracker + 3);
              v50 = 0;
              if ( !v49 )
                goto LABEL_142;
              do
              {
                v51 = (_BYTE *)(v46 + 2LL * v50);
                if ( *v51 == 7 )
                {
                  if ( v51[1] != 0xFF )
                  {
                    ++v51[1];
                    goto LABEL_8;
                  }
                }
                else if ( !v51[1] )
                {
                  v12 = (_WORD *)(v46 + 2LL * v50);
                }
                ++v50;
              }
              while ( v50 < v49 );
              if ( v12 )
              {
                *v12 = 263;
              }
              else
              {
LABEL_142:
                if ( !*((_BYTE *)RefCountTracker + 1) )
                {
                  v47 = *((_BYTE *)RefCountTracker + 3);
                  if ( v47 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                    *((_BYTE *)RefCountTracker + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v47 + 2 > 0xFF )
                      v48 = -1;
                    else
                      v48 = v47 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v48);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
              }
            }
          }
        }
LABEL_8:
        v9 = 0;
      }
    }
    KeReleaseSpinLock(&v6->Ref.SpinLock, v8);
    if ( v9 )
    {
      NextDriver = v6->NextDriver;
      goto LABEL_23;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
    v13 = KeAcquireSpinLockRaiseToDpc(&v6->Ref.SpinLock);
    MiniportQueue = v6->MiniportQueue;
    v15 = a2;
    v16 = a3;
    NewIrql = v13;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)a1 )
      {
        v4 = 1;
        v65 = 1;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v25 = (*(_DWORD *)(a1 + 120) & 0x80200020) == 0;
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 71838;
        if ( v25
          && (*(_DWORD *)(a1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(a1 + 1520) == 1
          && *(_DWORD *)(a1 + 3892) == 1 )
        {
          v28 = 1;
          v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
          if ( !*(_BYTE *)(a1 + 4476) )
          {
            v30 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920);
            if ( v30 )
            {
              if ( v30->Type )
              {
                if ( v30->Type == 1 )
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v30->8 + v16, 1u);
              }
              else
              {
                v31 = 0LL;
                if ( _bittestandset((signed __int32 *)v30->TaggedRefCounts.RefMask, v16) )
                {
                  Tags = v30->TaggedRefCounts.Tags;
                  if ( Tags )
                  {
                    NumOverflowTaggedEntries = v30->NumOverflowTaggedEntries;
                    v36 = 0;
                    if ( NumOverflowTaggedEntries )
                    {
                      do
                      {
                        v37 = &Tags[v36];
                        if ( v37->Tag == a3 )
                        {
                          if ( v37->RefCount != 0xFF )
                          {
                            ++v37->RefCount;
                            goto LABEL_60;
                          }
                        }
                        else if ( !v37->RefCount )
                        {
                          v31 = &Tags[v36];
                        }
                        ++v36;
                      }
                      while ( v36 < NumOverflowTaggedEntries );
                      if ( v31 )
                      {
                        v31->Tag = a3;
                        v31->RefCount = 1;
LABEL_60:
                        v16 = a3;
                        goto LABEL_33;
                      }
                      v16 = a3;
                    }
                  }
                  if ( !v30->Type )
                  {
                    v44 = v30->NumOverflowTaggedEntries;
                    if ( v44 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory(v30);
                      v30->Type = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v44 + 2 > 0xFF )
                        v45 = -1;
                      else
                        v45 = v44 + 2;
                      ndisResizeRefCountBlockTagged(v30, v45);
                    }
                  }
                  NdisReferenceWithTag(v30);
                }
              }
            }
LABEL_33:
            v25 = (*(_DWORD *)(a1 + 4472))++ == -1;
            if ( !v25 )
            {
LABEL_34:
              if ( (unsigned __int8)byte_1C009261B >= 4u )
                WPP_SF_qD(12LL, &WPP_1a1a0ae58f2132a5e47c5daabd3d204f_Traceguids, a1, *(unsigned int *)(a1 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v29);
              if ( v28 )
              {
                v32 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4928);
                if ( v32 )
                {
                  if ( v32->Type )
                  {
                    if ( v32->Type == 1 )
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v32->8 + v15, 1u);
                  }
                  else
                  {
                    v33 = 0LL;
                    if ( _bittestandset((signed __int32 *)v32->TaggedRefCounts.RefMask, a2) )
                    {
                      v38 = v32->TaggedRefCounts.Tags;
                      if ( !v38 )
                        goto LABEL_143;
                      v39 = v32->NumOverflowTaggedEntries;
                      v40 = 0;
                      if ( !v39 )
                        goto LABEL_143;
                      do
                      {
                        v41 = &v38[v40];
                        if ( v41->Tag == a2 )
                        {
                          if ( v41->RefCount != 0xFF )
                          {
                            ++v41->RefCount;
                            goto LABEL_40;
                          }
                        }
                        else if ( !v41->RefCount )
                        {
                          v33 = &v38[v40];
                        }
                        ++v40;
                      }
                      while ( v40 < v39 );
                      if ( v33 )
                      {
                        v33->Tag = a2;
                        v33->RefCount = 1;
                      }
                      else
                      {
LABEL_143:
                        if ( !v32->Type )
                        {
                          v42 = v32->NumOverflowTaggedEntries;
                          if ( v42 == 0xFF )
                          {
                            ndisFreeRefCountAuxiliaryMemory(v32);
                            v32->Type = 2;
                          }
                          else
                          {
                            if ( (unsigned int)v42 + 2 > 0xFF )
                              v43 = -1;
                            else
                              v43 = v42 + 2;
                            ndisResizeRefCountBlockTagged(v32, v43);
                          }
                        }
                        NdisReferenceWithTag(v32);
                      }
                    }
LABEL_40:
                    v15 = a2;
                  }
                }
                ++*(_DWORD *)(a1 + 3132);
                v4 = 1;
                v60 = 1;
              }
              else
              {
                v4 = 1;
              }
              goto LABEL_42;
            }
            *(_DWORD *)(a1 + 4472) = -1;
          }
          v28 = 0;
          goto LABEL_34;
        }
LABEL_42:
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v4 )
        break;
    }
    KeReleaseSpinLock(&v62->Ref.SpinLock, NewIrql);
    v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v62->NextDriver;
    v7 = v17;
    v19 = KeAcquireSpinLockRaiseToDpc(&v62->Ref.SpinLock);
    v20 = (ULONG_PTR)v62->Ref.RefCountTracker;
    v21 = v19;
    if ( v20 )
    {
      if ( *(_BYTE *)(v20 + 1) )
      {
        if ( *(_BYTE *)(v20 + 1) == 1 )
        {
          v52 = v20 + 456;
          v53 = *(_DWORD *)(v20 + 512);
          if ( v53 >> 17 < 0x3FFE && (unsigned __int16)v53 >> 1 == (v53 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v20 + 456));
            *(_DWORD *)(v52 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v53 & 0xFFFE) == 0 && (v53 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v20, 7uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v20 + 456), 0);
          }
        }
      }
      else
      {
        v22 = *(_QWORD *)(v20 + 8);
        if ( v22 && (v23 = *(_BYTE *)(v20 + 3), v24 = 0, v23) )
        {
          while ( *(_BYTE *)(v22 + 2LL * v24) != 7 || !*(_BYTE *)(v22 + 2LL * v24 + 1) )
          {
            if ( ++v24 >= v23 )
              goto LABEL_20;
          }
          --*(_BYTE *)(v22 + 2LL * v24 + 1);
        }
        else
        {
LABEL_20:
          if ( !_bittestandreset((signed __int32 *)(v20 + 16), 7u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v20, 7uLL);
        }
      }
    }
    v25 = v62->Ref.ReferenceCount-- == 1;
    v26 = v62->Ref.ReferenceCount;
    if ( v25 && !v62->Ref.ZeroBased )
    {
      NdisFreeRefCount(v62->Ref.RefCountTracker);
      v62->Ref.RefCountTracker = 0LL;
    }
    KeReleaseSpinLock(&v62->Ref.SpinLock, v21);
    if ( !v26 )
    {
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(23LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v62);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v55 = *p_NextDriver;
          if ( *p_NextDriver == v62 )
            break;
          p_NextDriver = &v55->NextDriver;
          if ( !v55->NextDriver )
            goto LABEL_127;
        }
        *p_NextDriver = v62->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_127:
      Buffer = v62->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v62->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v62->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v62->NdisDriverInfo = 0LL;
      }
      if ( (v62->Flags & 1) != 0 )
      {
        KeWaitForSingleObject(&v62->IMStartRemoveMutex, Executive, 0, 0, 0LL);
        PendingDeviceList = v62->PendingDeviceList;
        v62->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
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
        v62->IMStartRemoveMutexOwnerThread = 0LL;
        KeReleaseMutex(&v62->IMStartRemoveMutex, 0);
      }
      KeSetEvent(&v62->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C009261B >= 4u )
        WPP_SF_q(24LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, v62);
    }
LABEL_23:
    v6 = NextDriver;
    v62 = NextDriver;
    v4 = v65;
  }
  while ( !v65 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v7);
  return v60;
}
