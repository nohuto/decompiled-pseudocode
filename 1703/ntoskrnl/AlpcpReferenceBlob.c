/*
 * XREFs of AlpcpReferenceBlob @ 0x14047D550
 * Callers:
 *     AlpcpCreateRegion @ 0x140436554 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x14043FA80 (AlpcpExposeViewAttribute.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140470780 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFlushResourcesPort @ 0x140473ABC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x140473D7C (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140474350 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFormatConnectionRequest @ 0x140474A80 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047A710 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpViewSearchCallbackFunction @ 0x14047A930 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CEE0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcpCleanupProcessViews @ 0x140498C64 (AlpcpCleanupProcessViews.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x1406B2054 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  signed __int64 BugCheckParameter4; // rax
  bool v2; // zf
  signed __int64 v3; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  BugCheckParameter4 = *(_QWORD *)(BugCheckParameter2 - 24);
  v2 = BugCheckParameter4 == 0;
  if ( BugCheckParameter4 > 0 )
  {
    do
    {
      v3 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(BugCheckParameter2 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
      if ( BugCheckParameter4 == v3 )
        return BugCheckParameter4 + 1;
    }
    while ( BugCheckParameter4 > 0 );
    v2 = BugCheckParameter4 == 0;
  }
  if ( !v2 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, BugCheckParameter4);
  return 0LL;
}
