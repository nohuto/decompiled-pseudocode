/*
 * XREFs of AlpcpReferenceBlob @ 0x1404A2210
 * Callers:
 *     AlpcpCreateSection @ 0x140460E08 (AlpcpCreateSection.c)
 *     AlpcpCreateRegion @ 0x1404611C8 (AlpcpCreateRegion.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404614D4 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1404616E8 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x140461E3C (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x140462188 (AlpcReferenceBlobByHandle.c)
 *     AlpcpFlushResourcesPort @ 0x1404646A0 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x140464950 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x140464F28 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 *     AlpcpReceiveMessagePort @ 0x14049EAE0 (AlpcpReceiveMessagePort.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     AlpcpCleanupProcessViews @ 0x1404FCCD4 (AlpcpCleanupProcessViews.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x14056161C (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 *     AlpcpCreateReserve @ 0x140571730 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x14057F054 (AlpcpExposeViewAttribute.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14058E9E4 (AlpcpFlushMessagesByRequestor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
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
