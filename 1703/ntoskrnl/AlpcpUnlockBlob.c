/*
 * XREFs of AlpcpUnlockBlob @ 0x14047D5A0
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x140436098 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x140436460 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x14043FA80 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x1404442D0 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x140446050 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x14044EE50 (AlpcpReleaseViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x140470DC0 (AlpcpQueryRemoteView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047A5CC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x14047A710 (AlpcpPrepareViewForDelivery.c)
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14047BB04 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x14047BD30 (AlpcpCreateView.c)
 *     AlpcpReceiveLegacyMessage @ 0x14047C970 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14047CFB0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x140574B50 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x1406B18C0 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v2; // cl
  int v3; // ebx
  unsigned __int64 result; // rax
  signed __int64 BugCheckParameter4; // rcx

  v2 = *(_BYTE *)(BugCheckParameter2 - 32);
  v3 = 0;
  if ( (v2 & 1) != 0 )
  {
    v3 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
    *(_WORD *)(BugCheckParameter2 - 30) = 0;
    *(_BYTE *)(BugCheckParameter2 - 32) = v2 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
  result = KeAbPostRelease(BugCheckParameter2 - 16);
  if ( v3 > 0 )
  {
    result = -v3;
    BugCheckParameter4 = result
                       + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), result);
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
      return AlpcpDestroyBlob(BugCheckParameter2);
    }
  }
  return result;
}
