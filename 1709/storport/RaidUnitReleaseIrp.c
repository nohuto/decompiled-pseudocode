/*
 * XREFs of RaidUnitReleaseIrp @ 0x1C0009D88
 * Callers:
 *     RaUnitStartIo @ 0x1C0008160 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C000B8F8 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000EE34 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartResetIo @ 0x1C003CE38 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C003E190 (RaidUnitCompleteResetRequest.c)
 * Callees:
 *     RaidXrbDeallocateResources @ 0x1C0009E54 (RaidXrbDeallocateResources.c)
 *     StorUnmapSenseInfo @ 0x1C000B350 (StorUnmapSenseInfo.c)
 *     RaUnitRemoveFromPendingList @ 0x1C000BAB0 (RaUnitRemoveFromPendingList.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C001EA34 (RaidSrbExGetBidirectionalData.c)
 *     RaidAdapterReleaseCryptoKeyResources @ 0x1C002DC98 (RaidAdapterReleaseCryptoKeyResources.c)
 *     TranslateResultToScsiRequestBlock @ 0x1C0039AD0 (TranslateResultToScsiRequestBlock.c)
 */

LONG __fastcall RaidUnitReleaseIrp(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  LONG result; // eax
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 BidirectionalData; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL);
  if ( *(_BYTE *)(v2 + 2) == 40 )
    v3 = *(_QWORD *)(v2 + 96);
  else
    v3 = *(_QWORD *)(v2 + 48);
  v4 = *(_QWORD *)(v3 + 224);
  RaUnitRemoveFromPendingList(v4, a1);
  StorUnmapSenseInfo(v3, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL));
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_QWORD *)(v5 + 5696) )
    RaidAdapterReleaseCryptoKeyResources(v5, v3);
  if ( *(_BYTE *)(v2 + 2) == 40 )
  {
    if ( (*(_BYTE *)(v3 + 16) & 0x40) != 0 )
    {
      TranslateResultToScsiRequestBlock(*(_QWORD *)(v3 + 752), v2);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 48LL) = *(_QWORD *)(v3 + 176);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 24LL) = *(_QWORD *)(v3 + 184);
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(v3 + 752) + 40LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL) = *(_QWORD *)(v3 + 752);
      *(_BYTE *)(v3 + 16) &= ~0x40u;
      *(_QWORD *)(v3 + 752) = 0LL;
    }
    else
    {
      *(_QWORD *)(v2 + 96) = 0LL;
      v8 = *(_QWORD *)(v3 + 184);
      *(_QWORD *)(v2 + 104) = 0LL;
      *(_QWORD *)(v2 + 64) = v8;
      v9 = *(_QWORD *)(v3 + 192);
      if ( v9 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v2);
        if ( BidirectionalData )
          *(_QWORD *)(BidirectionalData + 16) = v9;
      }
    }
  }
  else
  {
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v3 + 176);
    v6 = *(_QWORD *)(v3 + 184);
    *(_QWORD *)(v2 + 56) = 0LL;
    *(_QWORD *)(v2 + 40) = 0LL;
    *(_QWORD *)(v2 + 24) = v6;
  }
  RaidXrbDeallocateResources(v3, 1LL);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 680), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(v4 + 168), 0, 0);
  return result;
}
