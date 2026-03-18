/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14049D674
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x140451F5C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpMapLegacyPortView @ 0x14045E120 (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeletePortSection @ 0x1404601B0 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreatePortSection @ 0x140460298 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteSectionView @ 0x140460970 (NtAlpcDeleteSectionView.c)
 *     NtAlpcCreateSectionView @ 0x140460B14 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSection @ 0x140460E08 (AlpcpCreateSection.c)
 *     AlpcpCreateSectionView @ 0x1404610D4 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140461390 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404614D4 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDeleteView @ 0x1404618AC (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140461B78 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcCreateSecurityContext @ 0x140461C6C (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x140461E3C (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140462094 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140462A78 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpDeletePort @ 0x140463E00 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x1404646A0 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x140464B1C (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseAttributes @ 0x140465C84 (AlpcpReleaseAttributes.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 *     AlpcpReleaseViewAttribute @ 0x140468A24 (AlpcpReleaseViewAttribute.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x14049F8D4 (AlpcpExposeHandleAttribute.c)
 *     AlpcMessageDestroyProcedure @ 0x14049FFA0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     AlpcpCleanupProcessViews @ 0x1404FCCD4 (AlpcpCleanupProcessViews.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140506768 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x14053D810 (AlpcConnectionDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x140540240 (AlpcViewDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x140571730 (AlpcpCreateReserve.c)
 *     AlpcpExposeViewAttribute @ 0x14057F054 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x1405839B0 (AlpcRegionDestroyProcedure.c)
 *     AlpcCreateSecurityContext @ 0x1406DC6A0 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1406DC9A8 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406DD4E4 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x14049DF24 (AlpcpDestroyBlob.c)
 */

unsigned __int64 __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rdx

  result = -a2;
  BugCheckParameter4 = result + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    return AlpcpDestroyBlob();
  }
  return result;
}
