/*
 * XREFs of AlpcpLockForCachedReferenceBlob @ 0x140479F80
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x140436098 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x14043FA80 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x1404442D0 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x140446050 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x14044EE50 (AlpcpReleaseViewAttribute.c)
 *     AlpcReserveDestroyProcedure @ 0x140458F00 (AlpcReserveDestroyProcedure.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140470780 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpQueryRemoteView @ 0x140470DC0 (AlpcpQueryRemoteView.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSendCloseMessage @ 0x140473580 (AlpcpSendCloseMessage.c)
 *     AlpcpFlushQueue @ 0x140473D7C (AlpcpFlushQueue.c)
 *     AlpcpDisconnectPort @ 0x14047400C (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140474350 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAllocateMessage @ 0x140479EA0 (AlpcpAllocateMessage.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047A5CC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047A710 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140574B50 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x1406B18C0 (AlpcpForceUnlinkSecureView.c)
 *     AlpcpPortQueryServerInfo @ 0x1406B2164 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
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
