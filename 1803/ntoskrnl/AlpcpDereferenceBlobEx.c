/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1404CF1A0
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x14048BE1C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1404CA8B0 (AlpcpExposeHandleAttribute.c)
 *     AlpcMessageDestroyProcedure @ 0x1404CC100 (AlpcMessageDestroyProcedure.c)
 *     AlpcMessageCleanupProcedure @ 0x1404CC1C0 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404D02B4 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateSecurityContext @ 0x1404D2E50 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     NtAlpcDeleteSecurityContext @ 0x1404D99B8 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeleteView @ 0x1404D9E8C (AlpcpDeleteView.c)
 *     AlpcpFlushResourcesPort @ 0x1404DAB68 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x1404DAF70 (AlpcpFlushCancelQueue.c)
 *     AlpcpReleaseAttributes @ 0x1404DC4C0 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1404DF1B4 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 *     AlpcpReleaseViewAttribute @ 0x1404DFC44 (AlpcpReleaseViewAttribute.c)
 *     AlpcpCleanupProcessViews @ 0x140511AB4 (AlpcpCleanupProcessViews.c)
 *     AlpcpCreateReserve @ 0x140556174 (AlpcpCreateReserve.c)
 *     AlpcpMapLegacyPortView @ 0x1405563C4 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x140556558 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x140556764 (AlpcpCreateSectionView.c)
 *     NtAlpcCreatePortSection @ 0x1405569D4 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140556B5C (AlpcpCreateSection.c)
 *     NtAlpcCreateSecurityContext @ 0x14055D9AC (NtAlpcCreateSecurityContext.c)
 *     AlpcpDeletePort @ 0x14055F430 (AlpcpDeletePort.c)
 *     AlpcpExposeViewAttribute @ 0x1405602F0 (AlpcpExposeViewAttribute.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140560554 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x140569170 (AlpcConnectionDestroyProcedure.c)
 *     NtAlpcDeleteSectionView @ 0x1405692DC (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x14056A2AC (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x14056DF50 (AlpcRegionDestroyProcedure.c)
 *     AlpcCreateSecurityContext @ 0x140747310 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1407476C8 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x140748204 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 BugCheckParameter4; // rax
  __int64 v4; // rdi
  void *v5; // rcx

  BugCheckParameter4 = -a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -a2);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    (*(void (**)(void))(v4 + 24))();
    if ( (*(int (__fastcall **)(ULONG_PTR))(v4 + 40))(BugCheckParameter2) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(
          (PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v4 + 8),
          (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v5 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v4 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v4 + 8) + 7))(v5);
        else
          ExFreePoolWithTag(v5, *(_DWORD *)(v4 + 4));
      }
    }
  }
}
