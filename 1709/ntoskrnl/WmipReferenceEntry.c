/*
 * XREFs of WmipReferenceEntry @ 0x14051F7B4
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x14051C120 (WmipGenerateRegistrationNotification.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     WmipFindGEByGuid @ 0x14051FFE0 (WmipFindGEByGuid.c)
 *     WmipFindISinGEbyName @ 0x140545B38 (WmipFindISinGEbyName.c)
 *     WmipPrepareForWnodeAD @ 0x140588B24 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x14059B364 (WmipSendEnableRequest.c)
 *     WmipInsertMofResource @ 0x1405C800C (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1405C808C (WmipFindMRByNames.c)
 *     WmipSendEnableDisableRequest @ 0x1405D5EF0 (WmipSendEnableDisableRequest.c)
 *     WmipLegacyEtwWorker @ 0x1405E1EA0 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1405E5A38 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1405E5AC8 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x140741814 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x140741BCC (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x140742AF0 (WmipLegacyEtwCallback.c)
 *     WmipFindISInDSByGuid @ 0x140742ED0 (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x14074326C (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
