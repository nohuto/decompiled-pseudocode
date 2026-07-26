/*
 * XREFs of ndisStackExpansionFallbackWorker @ 0x1C005A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceFilter @ 0x1C0001278 (ndisDereferenceFilter.c)
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     ndisFIndicateStatusInternal @ 0x1C00064EC (ndisFIndicateStatusInternal.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000A160 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000C1D0 (ndisFDoOidRequestInternal.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFReturnNetBufferLists @ 0x1C0016840 (NdisFReturnNetBufferLists.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C00172C0 (NdisFSendNetBufferListsComplete.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059080 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisFNetPnPEventInternal @ 0x1C00C4270 (ndisFNetPnPEventInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00C6B30 (ndisFDevicePnPEventNotifyInternal.c)
 */

__int64 __fastcall ndisStackExpansionFallbackWorker(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // r15
  KIRQL v3; // al
  __int128 v4; // xmm0
  KIRQL v5; // bl
  __int128 v6; // xmm1
  struct _NET_BUFFER_LIST *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // r14
  struct _KEVENT *v11; // rdi
  __int64 v12; // rdx
  KIRQL v13; // al
  __int64 v14; // r14
  __int64 v15; // rbx
  struct _KEVENT *v16; // rdi
  PNET_BUFFER_LIST v17; // rdi
  char *v18; // rax
  struct _KEVENT *v19; // rbx
  PNET_BUFFER_LIST NetBufferList[2]; // [rsp+58h] [rbp-9h]
  struct _NET_BUFFER_LIST *NetBufferLists; // [rsp+68h] [rbp+7h]
  _QWORD Parameter[3]; // [rsp+70h] [rbp+Fh] BYREF
  PNET_BUFFER_LIST v24; // [rsp+88h] [rbp+27h]

  v1 = P + 18;
  v3 = KeAcquireSpinLockRaiseToDpc(P + 18);
  v4 = *((_OWORD *)P + 15);
  v5 = v3;
  v6 = *((_OWORD *)P + 16);
  *((_BYTE *)P + 232) = 0;
  *(_OWORD *)NetBufferList = *((_OWORD *)P + 17);
  NetBufferLists = (struct _NET_BUFFER_LIST *)P[36];
  memset(P + 30, 0, 0x38uLL);
  P[19] = 0LL;
  *((_DWORD *)P + 40) = 0;
  KeReleaseSpinLock(v1, v5);
  Parameter[1] = P;
  if ( (_BYTE)v4 )
    ndisFDoOidRequestInternal((char *)P);
  if ( BYTE1(v4) )
    ndisFOidRequestCompleteInternal((char *)P);
  v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)&v4 + 1);
  while ( v7 )
  {
    v24 = v7;
    v7 = (struct _NET_BUFFER_LIST *)v7->ProtocolReserved[1];
    ndisFDirectOidRequestCompleteInternal(Parameter);
  }
  v8 = v6;
  while ( v8 )
  {
    v9 = v8 + 80;
    v10 = (void *)v8;
    v11 = *(struct _KEVENT **)(v8 + 88);
    v12 = v8;
    v8 = *(_QWORD *)(v8 + 80);
    *(_QWORD *)(v9 + 8) = 0LL;
    ndisFIndicateStatusInternal((__int64)P, v12);
    if ( v11 )
    {
      KeSetEvent(v11, 0, 0);
    }
    else
    {
      ndisDereferenceRef(P + 40);
      ExFreePoolWithTag(v10, 0);
    }
  }
  v13 = KeAcquireSpinLockRaiseToDpc(v1);
  P[19] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_DWORD *)P + 40) = 2099000;
  if ( !P[32] )
    *((_BYTE *)P + 296) = 0;
  P[19] = 0LL;
  *((_DWORD *)P + 40) = 0;
  KeReleaseSpinLock(v1, v13);
  v14 = *((_QWORD *)&v6 + 1);
  while ( v14 )
  {
    v15 = v14 + 32;
    v24 = (PNET_BUFFER_LIST)v14;
    v16 = *(struct _KEVENT **)(v14 + 32);
    v14 = *(_QWORD *)(v14 + 56);
    *(_QWORD *)v15 = 0LL;
    ndisFNetPnPEventInternal(Parameter);
    *(_DWORD *)(v15 + 8) = Parameter[0];
    KeSetEvent(v16, 0, 0);
  }
  v17 = NetBufferList[0];
  while ( v17 )
  {
    v18 = (char *)&v17->ParentNetBufferList + 4;
    v24 = v17;
    v19 = *(struct _KEVENT **)((char *)&v17->NdisPoolHandle + 4);
    v17 = *(_NET_BUFFER_LIST **)((char *)&v17->ParentNetBufferList + 4);
    *((_QWORD *)v18 + 1) = 0LL;
    ndisFDevicePnPEventNotifyInternal(Parameter);
    KeSetEvent(v19, 0, 0);
  }
  if ( NetBufferList[1] )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList[1],
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        P[100],
        0x91u,
        0);
    NdisFSendNetBufferListsComplete(P, NetBufferList[1], 0);
  }
  if ( NetBufferLists )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        P[100],
        0x8Bu,
        0);
    NdisFReturnNetBufferLists(P, NetBufferLists, 0);
  }
  return ndisDereferenceFilter(P);
}
