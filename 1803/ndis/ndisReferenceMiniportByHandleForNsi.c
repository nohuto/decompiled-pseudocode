/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C000C080
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00AD91C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00DCA24 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006E628 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006E6D4 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(__int64 a1)
{
  char v2; // r12
  KIRQL v3; // al
  struct _NDIS_M_DRIVER_BLOCK *v4; // r15
  KIRQL v5; // bp
  int v6; // ebx
  KIRQL v7; // si
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v10; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // r14
  int v17; // ecx
  __int64 v18; // r10
  unsigned __int8 v19; // r9
  _BYTE *v20; // rdx
  char v22; // bl
  __int64 v23; // r9
  int v25; // eax
  char v26; // bp
  KIRQL v27; // r14
  struct _NDIS_REFCOUNT_BLOCK *v28; // rcx
  int v29; // ecx
  ULONG_PTR v30; // rbx
  unsigned int v31; // edx
  int v32; // ecx
  char v33; // al
  struct _NDIS_M_DRIVER_BLOCK *v34; // rax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int64 v40; // r9
  KIRQL v41; // [rsp+20h] [rbp-58h]
  struct _NDIS_M_DRIVER_BLOCK *v42; // [rsp+28h] [rbp-50h]
  KSPIN_LOCK *p_SpinLock; // [rsp+30h] [rbp-48h]
  unsigned __int8 v44; // [rsp+98h] [rbp+20h]

  v2 = 0;
  v44 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v4 = ndisMiniDriverList;
  v5 = v3;
  v42 = ndisMiniDriverList;
  do
  {
    if ( !v4 )
      break;
    p_SpinLock = &v4->Ref.SpinLock;
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
      goto LABEL_23;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    v10 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    MiniportQueue = v4->MiniportQueue;
    v41 = v10;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)a1 )
      {
        v2 = 1;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        v25 = *(_DWORD *)(a1 + 120);
        *(_DWORD *)(a1 + 1856) = 71193;
        if ( (v25 & 0x80200020) == 0
          && (*(_DWORD *)(a1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(a1 + 1520) == 1
          && *(_DWORD *)(a1 + 3892) == 1 )
        {
          v26 = 1;
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4464));
          if ( !*(_BYTE *)(a1 + 4476) )
          {
            v28 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920);
            if ( v28 )
              NdisReferenceWithTag(v28);
            v29 = *(_DWORD *)(a1 + 4472);
            *(_DWORD *)(a1 + 4472) = v29 + 1;
            if ( v29 != -1 )
            {
LABEL_33:
              if ( (unsigned __int8)byte_1C009961B >= 4u )
                WPP_SF_qD(12LL, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a1, *(unsigned int *)(a1 + 4472));
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4464), v27);
              if ( v26 )
              {
                NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4928));
                ++*(_DWORD *)(a1 + 3132);
                v44 = 1;
              }
              goto LABEL_37;
            }
            *(_DWORD *)(a1 + 4472) = -1;
          }
          v26 = 0;
          goto LABEL_33;
        }
LABEL_37:
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v2 )
        break;
    }
    KeReleaseSpinLock(p_SpinLock, v41);
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v42->NextDriver;
    v5 = v12;
    v14 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
    v15 = (ULONG_PTR)v4->Ref.RefCountTracker;
    v16 = v14;
    if ( v15 - 2 > 1 )
    {
      if ( v15 < 2 )
        ndisBugCheckEx(0x1EuLL, 3uLL, v15, 0LL);
      if ( *(_BYTE *)(v15 + 2) <= 7u )
        ndisBugCheckEx(0x1EuLL, 2uLL, v15, 7uLL);
      v17 = *(unsigned __int8 *)(v15 + 1);
      if ( *(_BYTE *)(v15 + 1) )
      {
        if ( v17 == 1 )
        {
          v30 = v15 + 456;
          v31 = *(_DWORD *)(v15 + 512);
          v32 = (unsigned __int16)v31 >> 1;
          if ( v31 >> 17 < 0x3FFE && v32 == (v31 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 456));
            *(_DWORD *)(v30 + 56) &= 0x10001u;
          }
          else
          {
            if ( v32 == 0 && (v31 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v15, 7uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 456), 0);
          }
        }
      }
      else
      {
        v18 = *(_QWORD *)(v15 + 8);
        if ( v18 && (v19 = *(_BYTE *)(v15 + 3)) != 0 )
        {
          while ( 1 )
          {
            v20 = (_BYTE *)(v18 + 2LL * (unsigned __int8)v17);
            if ( *v20 == 7 )
            {
              v33 = v20[1];
              if ( v33 )
                break;
            }
            LOBYTE(v17) = v17 + 1;
            if ( (unsigned __int8)v17 >= v19 )
              goto LABEL_19;
          }
          v20[1] = v33 - 1;
        }
        else
        {
LABEL_19:
          if ( !_bittestandreset((signed __int32 *)(v15 + 16), 7u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, 7uLL);
        }
      }
    }
    if ( v4->Ref.ReferenceCount-- == 1 )
    {
      v22 = 1;
      if ( !v4->Ref.ZeroBased )
      {
        NdisFreeRefCount((ULONG_PTR)v4->Ref.RefCountTracker);
        v4->Ref.RefCountTracker = (NDIS_REFCOUNT_HANDLE__ *)1;
      }
    }
    else
    {
      v22 = 0;
    }
    KeReleaseSpinLock(p_SpinLock, v16);
    if ( v22 )
    {
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(23LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v42, v23);
      v34 = ndisMiniDriverList;
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( v34 != v42 )
        {
          p_NextDriver = &v34->NextDriver;
          v34 = v34->NextDriver;
          if ( !v34 )
            goto LABEL_58;
        }
        *p_NextDriver = v42->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_58:
      Buffer = v42->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v42->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v42->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v42->NdisDriverInfo = 0LL;
      }
      if ( (v42->Flags & 1) != 0 )
      {
        PendingDeviceList = v42->PendingDeviceList;
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
      KeSetEvent(&v42->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C009961B >= 4u )
        WPP_SF_q(24LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, v42, v40);
    }
LABEL_23:
    v42 = NextDriver;
    v4 = NextDriver;
  }
  while ( !v2 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
  return v44;
}
