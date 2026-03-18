/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x14006DE30
 * Callers:
 *     PiDmLookupObject @ 0x140507574 (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14051D51C (PopHandleConvergedPowerRequestUpdate.c)
 *     PopPowerRequestDeleteEntryById @ 0x140524B88 (PopPowerRequestDeleteEntryById.c)
 *     PopPowerRequestFindEntryById @ 0x140524BC0 (PopPowerRequestFindEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x140524BE4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PiSwFindSwDevice @ 0x1405C8F4C (PiSwFindSwDevice.c)
 *     PiSwFindBusRelations @ 0x1405CDC48 (PiSwFindBusRelations.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1405E90A0 (PopAvlFindOrMakeStatsForAudio.c)
 *     PiDcHandleDeviceEvent @ 0x1405EA00C (PiDcHandleDeviceEvent.c)
 *     PiLookupInDDBCache @ 0x1405FBB38 (PiLookupInDDBCache.c)
 *     PiUpdateDriverDBCache @ 0x1405FBFC4 (PiUpdateDriverDBCache.c)
 *     IopCleanupFileObjectIosbRange @ 0x1407197B8 (IopCleanupFileObjectIosbRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
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
