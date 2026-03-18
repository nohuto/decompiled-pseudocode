/*
 * XREFs of WmipReferenceEntry @ 0x14055536C
 * Callers:
 *     WmipPrepareForWnodeAD @ 0x140555088 (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x140555288 (WmipFindGEByGuid.c)
 *     WmipSendEnableRequest @ 0x1405577A8 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     WmipFindISinGEbyName @ 0x1405A0BD0 (WmipFindISinGEbyName.c)
 *     WmipGenerateRegistrationNotification @ 0x1405A0CC8 (WmipGenerateRegistrationNotification.c)
 *     WmipInsertMofResource @ 0x1405A1470 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1405A14F4 (WmipFindMRByNames.c)
 *     WmipRegisterEtwProvider @ 0x1405A15B4 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1405A17D0 (WmipQueueLegacyEtwWork.c)
 *     WmipLegacyEtwWorker @ 0x1405CC580 (WmipLegacyEtwWorker.c)
 *     WmipLegacyEtwCallback @ 0x1405D9150 (WmipLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x140707C28 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 *     WmipFindISInDSByGuid @ 0x140708EAC (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x14070924C (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
