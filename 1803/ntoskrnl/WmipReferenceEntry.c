/*
 * XREFs of WmipReferenceEntry @ 0x14051B7F0
 * Callers:
 *     WmipFindGEByGuid @ 0x140501D60 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x14051AB9C (WmipPrepareForWnodeAD.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     WmipSendEnableRequest @ 0x14056A1B8 (WmipSendEnableRequest.c)
 *     WmipGenerateRegistrationNotification @ 0x1405FF044 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x1405FF918 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x140602608 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x140621074 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1406210F4 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x1406493E0 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x14064B6F4 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x14064B784 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1407A38F0 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1407A3C9C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1407A4A70 (WmipLegacyEtwCallback.c)
 *     WmipFindISInDSByGuid @ 0x1407A4CBC (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x1407A4EA0 (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
