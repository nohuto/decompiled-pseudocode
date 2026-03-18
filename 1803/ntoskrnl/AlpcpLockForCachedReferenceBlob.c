/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x14048BE1C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 *     AlpcSectionDeleteProcedure @ 0x1404D9F40 (AlpcSectionDeleteProcedure.c)
 *     AlpcpFlushQueue @ 0x1404DAE18 (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x1404DB034 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpSendCloseMessage @ 0x1404DB5D0 (AlpcpSendCloseMessage.c)
 *     AlpcpAllocateMessage @ 0x1404DCA4C (AlpcpAllocateMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReleaseViewAttribute @ 0x1404DFC44 (AlpcpReleaseViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1404DFC7C (AlpcpQueryRemoteView.c)
 *     AlpcpMapLegacyPortView @ 0x1405563C4 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x140556764 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x1405602F0 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x14056DF50 (AlpcRegionDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140578E48 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcReserveDestroyProcedure @ 0x14057F8E0 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E81D4 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpPortQueryServerInfo @ 0x140748D94 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
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
