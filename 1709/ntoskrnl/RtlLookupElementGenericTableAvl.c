/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x1400DF250
 * Callers:
 *     PopAvlFindOrMakeStatsForAudio @ 0x140451A8C (PopAvlFindOrMakeStatsForAudio.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404E6F04 (PopPowerRequestDeleteEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1404E7B74 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopPowerRequestFindEntryById @ 0x1404E7E28 (PopPowerRequestFindEntryById.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x1404E7EA8 (PopHandleConvergedPowerRequestUpdate.c)
 *     PiDmLookupObject @ 0x1405239E0 (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiLookupInDDBCache @ 0x140544758 (PiLookupInDDBCache.c)
 *     PiUpdateDriverDBCache @ 0x140544B48 (PiUpdateDriverDBCache.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiSwFindBusRelations @ 0x140553A48 (PiSwFindBusRelations.c)
 *     PiSwFindSwDevice @ 0x14055E74C (PiSwFindSwDevice.c)
 *     PiDcHandleDeviceEvent @ 0x14059F7EC (PiDcHandleDeviceEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1406B4B00 (IopCleanupFileObjectIosbRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlLookupElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  void *v2; // rsi
  _RTL_BALANCED_LINKS *i; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v6; // eax
  int v7; // eax
  _RTL_BALANCED_LINKS *v8; // rbx
  _RTL_BALANCED_LINKS *v10; // [rsp+30h] [rbp+8h]

  v2 = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( i = Table->BalancedRoot.RightChild; ; i = i->RightChild )
    {
      while ( 1 )
      {
        v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v6 )
          break;
        if ( !i->LeftChild )
        {
          v7 = 2;
          goto LABEL_10;
        }
        i = i->LeftChild;
      }
      if ( v6 != GenericGreaterThan )
      {
        v7 = 1;
        goto LABEL_10;
      }
      if ( !i->RightChild )
        break;
    }
    v7 = 3;
  }
  else
  {
    i = v10;
    v7 = 0;
  }
LABEL_10:
  v8 = i + 1;
  if ( v7 == 1 )
    return v8;
  return v2;
}
