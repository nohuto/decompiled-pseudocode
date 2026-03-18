/*
 * XREFs of AlpcpReferenceBlob @ 0x1404D0478
 * Callers:
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 *     AlpcReferenceBlobByHandle @ 0x1404D03B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpViewSearchCallbackFunction @ 0x1404D9E44 (AlpcpViewSearchCallbackFunction.c)
 *     AlpcpFlushResourcesPort @ 0x1404DAB68 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushQueue @ 0x1404DAE18 (AlpcpFlushQueue.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404DB380 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 *     AlpcpCleanupProcessViews @ 0x140511AB4 (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpCreateRegion @ 0x140556858 (AlpcpCreateRegion.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 *     AlpcpExposeViewAttribute @ 0x1405602F0 (AlpcpExposeViewAttribute.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140578E48 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpReferenceMessageByWaitingThreadPortQueue @ 0x140748B50 (AlpcpReferenceMessageByWaitingThreadPortQueue.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpReferenceBlob(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int64 v2; // r8

  _m_prefetchw((const void *)(BugCheckParameter2 - 24));
  result = *(_QWORD *)(BugCheckParameter2 - 24);
  while ( result > 0 )
  {
    v2 = result;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 - 24), result + 1, result);
    if ( result == v2 )
      return ++result;
  }
  if ( result )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x20uLL, result);
  return result;
}
