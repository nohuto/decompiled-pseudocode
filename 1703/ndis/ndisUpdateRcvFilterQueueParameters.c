/*
 * XREFs of ndisUpdateRcvFilterQueueParameters @ 0x1C003F188
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001741C (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisOidPostRcvFilterQueueParameters @ 0x1C003DC50 (ndisOidPostRcvFilterQueueParameters.c)
 * Callees:
 *     ndisFindReceiveQueueByQueueId @ 0x1C003D6F4 (ndisFindReceiveQueueByQueueId.c)
 */

char __fastcall ndisUpdateRcvFilterQueueParameters(__int64 a1, __int64 a2)
{
  KIRQL v4; // r10
  unsigned int v5; // edx
  __int64 *ReceiveQueueByQueueId; // rcx
  char v7; // bl
  int v8; // eax

  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2688412;
  v5 = *(_DWORD *)(a2 + 12);
  if ( v5 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(a1, v5);
  else
    ReceiveQueueByQueueId = *(__int64 **)(a1 + 4400);
  if ( ReceiveQueueByQueueId )
  {
    v8 = *(_DWORD *)(a2 + 4);
    if ( (v8 & 0x10000) != 0 )
      *((_DWORD *)ReceiveQueueByQueueId + 33) = (unsigned __int16)v8;
    if ( (*(_DWORD *)(a2 + 4) & 0x20000) != 0 )
    {
      *(_OWORD *)(ReceiveQueueByQueueId + 19) = *(_OWORD *)(a2 + 24);
      *((_DWORD *)ReceiveQueueByQueueId + 43) = *(_DWORD *)(a2 + 44);
    }
    if ( (*(_DWORD *)(a2 + 4) & 0x40000) != 0 )
      *((_DWORD *)ReceiveQueueByQueueId + 42) = *(_DWORD *)(a2 + 40);
    if ( *(_BYTE *)(a2 + 1) >= 2u && (*(_DWORD *)(a2 + 4) & 0x100000) != 0 )
      *((_DWORD *)ReceiveQueueByQueueId + 304) = *(_DWORD *)(a2 + 1088);
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
  return v7;
}
