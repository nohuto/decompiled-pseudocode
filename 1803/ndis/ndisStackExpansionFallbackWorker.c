/*
 * XREFs of ndisStackExpansionFallbackWorker @ 0x1C005ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C0006D10 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1C0008000 (NdisFReturnNetBufferLists.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000BD50 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ndisDereferenceFilter @ 0x1C0011E1C (ndisDereferenceFilter.c)
 *     ndisFIndicateStatusInternal @ 0x1C00172BC (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C0059780 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00B0CE0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisFNetPnPEventInternal @ 0x1C00B0F20 (ndisFNetPnPEventInternal.c)
 */

__int64 __fastcall ndisStackExpansionFallbackWorker(KSPIN_LOCK *P)
{
  KSPIN_LOCK *v1; // r15
  KIRQL v3; // al
  __int128 v4; // xmm0
  KIRQL v5; // bl
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _NET_BUFFER_LIST *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // r14
  struct _KEVENT *v14; // rdi
  __int64 v15; // rdx
  KIRQL v16; // al
  __int64 v17; // r14
  __int64 v18; // rbx
  struct _KEVENT *v19; // rdi
  PNET_BUFFER_LIST v20; // rdi
  char *v21; // rax
  struct _KEVENT *v22; // rbx
  PNET_BUFFER_LIST NetBufferList[2]; // [rsp+58h] [rbp-9h]
  struct _NET_BUFFER_LIST *NetBufferLists; // [rsp+68h] [rbp+7h]
  _QWORD Parameter[3]; // [rsp+70h] [rbp+Fh] BYREF
  PNET_BUFFER_LIST v27; // [rsp+88h] [rbp+27h]

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
    ndisFDoOidRequestInternal((char *)P, v7, v8, v9);
  if ( BYTE1(v4) )
    ndisFOidRequestCompleteInternal(P);
  v10 = (struct _NET_BUFFER_LIST *)*((_QWORD *)&v4 + 1);
  while ( v10 )
  {
    v27 = v10;
    v10 = (struct _NET_BUFFER_LIST *)v10->ProtocolReserved[1];
    ndisFDirectOidRequestCompleteInternal(Parameter);
  }
  v11 = v6;
  while ( v11 )
  {
    v12 = v11 + 80;
    v13 = (void *)v11;
    v14 = *(struct _KEVENT **)(v11 + 88);
    v15 = v11;
    v11 = *(_QWORD *)(v11 + 80);
    *(_QWORD *)(v12 + 8) = 0LL;
    ndisFIndicateStatusInternal((__int64)P, v15);
    if ( v14 )
    {
      KeSetEvent(v14, 0, 0);
    }
    else
    {
      ndisDereferenceRef(P + 40, 1u);
      ExFreePoolWithTag(v13, 0);
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc(v1);
  P[19] = (KSPIN_LOCK)KeGetCurrentThread();
  *((_DWORD *)P + 40) = 2099000;
  if ( !P[32] )
    *((_BYTE *)P + 296) = 0;
  P[19] = 0LL;
  *((_DWORD *)P + 40) = 0;
  KeReleaseSpinLock(v1, v16);
  v17 = *((_QWORD *)&v6 + 1);
  while ( v17 )
  {
    v18 = v17 + 32;
    v27 = (PNET_BUFFER_LIST)v17;
    v19 = *(struct _KEVENT **)(v17 + 32);
    v17 = *(_QWORD *)(v17 + 56);
    *(_QWORD *)v18 = 0LL;
    ndisFNetPnPEventInternal(Parameter);
    *(_DWORD *)(v18 + 8) = Parameter[0];
    KeSetEvent(v19, 0, 0);
  }
  v20 = NetBufferList[0];
  while ( v20 )
  {
    v21 = (char *)&v20->ParentNetBufferList + 4;
    v27 = v20;
    v22 = *(struct _KEVENT **)((char *)&v20->NdisPoolHandle + 4);
    v20 = *(_NET_BUFFER_LIST **)((char *)&v20->ParentNetBufferList + 4);
    *((_QWORD *)v21 + 1) = 0LL;
    ndisFDevicePnPEventNotifyInternal(Parameter);
    KeSetEvent(v22, 0, 0);
  }
  if ( NetBufferList[1] )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList[1],
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        P[100],
        145LL,
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
        139LL,
        0);
    NdisFReturnNetBufferLists(P, NetBufferLists, 0);
  }
  return ndisDereferenceFilter(P);
}
