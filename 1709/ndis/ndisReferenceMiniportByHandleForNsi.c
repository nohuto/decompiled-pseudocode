/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C0009C2C
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00B81A8 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DAE84 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006DDD8 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006DE84 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

char __fastcall ndisReferenceMiniportByHandleForNsi(__int64 a1)
{
  char v2; // r13
  KIRQL v3; // al
  struct _NDIS_M_DRIVER_BLOCK *v4; // rdi
  KIRQL v5; // r12
  int v6; // ebp
  KIRQL v7; // r14
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v10; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // r14
  char v12; // r15
  int v13; // eax
  KIRQL v14; // r13
  struct _NDIS_REFCOUNT_BLOCK *v15; // rcx
  bool v16; // zf
  KIRQL v17; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r15
  KIRQL v19; // al
  ULONG_PTR v20; // r8
  KIRQL v21; // r14
  __int64 v22; // rcx
  unsigned __int8 v23; // r10
  unsigned __int8 v24; // dl
  unsigned __int16 v25; // bp
  char v27; // al
  ULONG_PTR v28; // rbp
  unsigned int v29; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v31; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  char v36; // [rsp+20h] [rbp-48h]
  KIRQL v37; // [rsp+21h] [rbp-47h]
  struct _NDIS_M_DRIVER_BLOCK *v38; // [rsp+28h] [rbp-40h]

  v36 = 0;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v4 = ndisMiniDriverList;
  v5 = v3;
  v38 = ndisMiniDriverList;
  do
  {
    if ( !v4 )
      break;
    v6 = 1;
    v7 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    if ( !v4->Ref.Closing )
    {
      ReferenceCount = v4->Ref.ReferenceCount;
      if ( ReferenceCount >= 0xFFEBu )
      {
        ndisRefCountReferenceCountOverflow = 1;
        v6 = 2;
      }
      else
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v4->Ref.RefCountTracker;
        v4->Ref.ReferenceCount = ReferenceCount + 1;
        NdisReferenceWithTag(RefCountTracker);
        v6 = 0;
      }
    }
    KeReleaseSpinLock(&v4->Ref.SpinLock, v7);
    if ( v6 )
    {
      NextDriver = v4->NextDriver;
      goto LABEL_33;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    v10 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    MiniportQueue = v4->MiniportQueue;
    v37 = v10;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)a1 )
      {
        v12 = 1;
        v2 = 1;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        v13 = *(_DWORD *)(a1 + 120);
        *(_DWORD *)(a1 + 1856) = 71623;
        if ( (v13 & 0x80200020) == 0
          && (*(_DWORD *)(a1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(a1 + 1520) == 1
          && *(_DWORD *)(a1 + 3892) == 1 )
        {
          v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
          if ( !*(_BYTE *)(a1 + 4476) )
          {
            v15 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920);
            if ( v15 )
              NdisReferenceWithTag(v15);
            v16 = (*(_DWORD *)(a1 + 4472))++ == -1;
            if ( !v16 )
            {
LABEL_18:
              if ( (unsigned __int8)byte_1C009875B >= 4u )
                WPP_SF_qD(12LL, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, *(unsigned int *)(a1 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v14);
              if ( v12 )
              {
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4928));
                ++*(_DWORD *)(a1 + 3132);
                v2 = 1;
                v36 = 1;
              }
              else
              {
                v2 = 1;
              }
              goto LABEL_22;
            }
            *(_DWORD *)(a1 + 4472) = -1;
          }
          v12 = 0;
          goto LABEL_18;
        }
LABEL_22:
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v2 )
        break;
    }
    KeReleaseSpinLock(&v38->Ref.SpinLock, v37);
    v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v38->NextDriver;
    v5 = v17;
    v19 = KeAcquireSpinLockRaiseToDpc(&v38->Ref.SpinLock);
    v20 = (ULONG_PTR)v38->Ref.RefCountTracker;
    v21 = v19;
    if ( v20 )
    {
      if ( *(_BYTE *)(v20 + 1) )
      {
        if ( *(_BYTE *)(v20 + 1) == 1 )
        {
          v28 = v20 + 456;
          v29 = *(_DWORD *)(v20 + 512);
          if ( v29 >> 17 < 0x3FFE && (unsigned __int16)v29 >> 1 == (v29 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v20 + 456));
            *(_DWORD *)(v28 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v29 & 0xFFFE) == 0 && (v29 & 1) == 0 )
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
          while ( 1 )
          {
            if ( *(_BYTE *)(v22 + 2LL * v24) == 7 )
            {
              v27 = *(_BYTE *)(v22 + 2LL * v24 + 1);
              if ( v27 )
                break;
            }
            if ( ++v24 >= v23 )
              goto LABEL_30;
          }
          *(_BYTE *)(v22 + 2LL * v24 + 1) = v27 - 1;
        }
        else
        {
LABEL_30:
          if ( !_bittestandreset((signed __int32 *)(v20 + 16), 7u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v20, 7uLL);
        }
      }
    }
    v16 = v38->Ref.ReferenceCount-- == 1;
    v25 = v38->Ref.ReferenceCount;
    if ( v16 && !v38->Ref.ZeroBased )
    {
      NdisFreeRefCount((struct _NDIS_REFCOUNT_BLOCK *)v38->Ref.RefCountTracker);
      v38->Ref.RefCountTracker = 0LL;
    }
    KeReleaseSpinLock(&v38->Ref.SpinLock, v21);
    if ( !v25 )
    {
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(23LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v38);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v31 = *p_NextDriver;
          if ( *p_NextDriver == v38 )
            break;
          p_NextDriver = &v31->NextDriver;
          if ( !v31->NextDriver )
            goto LABEL_56;
        }
        *p_NextDriver = v38->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_56:
      Buffer = v38->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v38->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v38->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v38->NdisDriverInfo = 0LL;
      }
      if ( (v38->Flags & 1) != 0 )
      {
        PendingDeviceList = v38->PendingDeviceList;
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
      KeSetEvent(&v38->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C009875B >= 4u )
        WPP_SF_q(24LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, v38);
    }
LABEL_33:
    v38 = NextDriver;
    v4 = NextDriver;
  }
  while ( !v2 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
  return v36;
}
