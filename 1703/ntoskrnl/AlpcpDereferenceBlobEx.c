/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x14047EE00
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140430600 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpMapLegacyPortView @ 0x140436098 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x140436258 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 *     NtAlpcCreatePortSection @ 0x1404366D8 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140436860 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x14043CDF4 (AlpcpCreateReserve.c)
 *     NtAlpcDeleteSecurityContext @ 0x14043D388 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpExposeViewAttribute @ 0x14043FA80 (AlpcpExposeViewAttribute.c)
 *     NtAlpcDeletePortSection @ 0x140442BA0 (NtAlpcDeletePortSection.c)
 *     NtAlpcDeleteSectionView @ 0x140442EE4 (NtAlpcDeleteSectionView.c)
 *     AlpcRegionDestroyProcedure @ 0x1404442D0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x14044EE50 (AlpcpReleaseViewAttribute.c)
 *     NtSecureConnectPort @ 0x140470F8C (NtSecureConnectPort.c)
 *     AlpcpDeletePort @ 0x1404736A0 (AlpcpDeletePort.c)
 *     AlpcpFlushResourcesPort @ 0x140473ABC (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x140473F48 (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseAttributes @ 0x140475E20 (AlpcpReleaseAttributes.c)
 *     NtAlpcCreateSecurityContext @ 0x14047A324 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047A5CC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047A710 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDeleteView @ 0x14047BCF4 (AlpcpDeleteView.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14047CDCC (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x14047EF00 (AlpcMessageDestroyProcedure.c)
 *     AlpcpCleanupProcessViews @ 0x140498C64 (AlpcpCleanupProcessViews.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140516F18 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x140523B90 (AlpcpExposeHandleAttribute.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     AlpcConnectionDestroyProcedure @ 0x140543EC0 (AlpcConnectionDestroyProcedure.c)
 *     AlpcpForceUnlinkSecureView @ 0x1406B18C0 (AlpcpForceUnlinkSecureView.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406B1970 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x1406B1C98 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 result; // rax

  result = -a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -a2);
  if ( result <= 0 )
  {
    if ( result )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, result);
    return AlpcpDestroyBlob(BugCheckParameter2);
  }
  return result;
}
