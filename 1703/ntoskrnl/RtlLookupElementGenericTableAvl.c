/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x14004C420
 * Callers:
 *     PiSwFindBusRelations @ 0x140451004 (PiSwFindBusRelations.c)
 *     PiDcHandleDeviceEvent @ 0x140468B78 (PiDcHandleDeviceEvent.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404854F0 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmLookupObject @ 0x140486DB8 (PiDmLookupObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiLookupInDDBCache @ 0x1404B3E70 (PiLookupInDDBCache.c)
 *     PiUpdateDriverDBCache @ 0x1404B6304 (PiUpdateDriverDBCache.c)
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PopSystemRequiredCallback @ 0x1404C6100 (PopSystemRequiredCallback.c)
 *     PopPowerRequestFindEntryById @ 0x1404C62A4 (PopPowerRequestFindEntryById.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404C71DC (PopPowerRequestDeleteEntryById.c)
 *     PopExecutionRequiredPowerRequest @ 0x1404C75C8 (PopExecutionRequiredPowerRequest.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PiSwFindSwDevice @ 0x140570D30 (PiSwFindSwDevice.c)
 *     IopCleanupFileObjectIosbRange @ 0x140688B20 (IopCleanupFileObjectIosbRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
    for ( i = Table->BalancedRoot.RightChild; ; i = i->LeftChild )
    {
      while ( 1 )
      {
        v6 = Table->CompareRoutine(Table, Buffer, &i[1]);
        if ( v6 == GenericLessThan )
          break;
        if ( v6 != GenericGreaterThan )
        {
          v7 = 1;
          goto LABEL_10;
        }
        if ( !i->RightChild )
        {
          v7 = 3;
          goto LABEL_10;
        }
        i = i->RightChild;
      }
      if ( !i->LeftChild )
        break;
    }
    v7 = 2;
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
