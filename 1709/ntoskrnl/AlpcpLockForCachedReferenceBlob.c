/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1404664F0
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x140451F5C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpMapLegacyPortView @ 0x14045E120 (AlpcpMapLegacyPortView.c)
 *     AlpcSectionDeleteProcedure @ 0x140460D20 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCreateSectionView @ 0x1404610D4 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140461390 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404614D4 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     AlpcpSendCloseMessage @ 0x140463CE0 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140464950 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x140464BE0 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAllocateMessage @ 0x140466410 (AlpcpAllocateMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReleaseViewAttribute @ 0x140468A24 (AlpcpReleaseViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x140468A5C (AlpcpQueryRemoteView.c)
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     AlpcViewDestroyProcedure @ 0x140540240 (AlpcViewDestroyProcedure.c)
 *     AlpcpPortQueryServerInfo @ 0x1405611F4 (AlpcpPortQueryServerInfo.c)
 *     AlpcpExposeViewAttribute @ 0x14057F054 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x1405839B0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14058E9E4 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x140596100 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E8F94 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpLockForCachedReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx(BugCheckParameter2 - 16, 0LL);
  *(_BYTE *)(BugCheckParameter2 - 32) |= 1u;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), 0x10000uLL) + 0x10000;
  if ( result <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x26uLL, result);
  return result;
}
