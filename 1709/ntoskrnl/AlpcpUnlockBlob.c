/*
 * XREFs of AlpcpUnlockBlob @ 0x14049FE60
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x140451F5C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpMapLegacyPortView @ 0x14045E120 (AlpcpMapLegacyPortView.c)
 *     AlpcSectionDeleteProcedure @ 0x140460D20 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCreateSectionView @ 0x1404610D4 (AlpcpCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140461390 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404614D4 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140461730 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     AlpcpReleaseViewAttribute @ 0x140468A24 (AlpcpReleaseViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x140468A5C (AlpcpQueryRemoteView.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x14049DAF0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 *     AlpcViewDestroyProcedure @ 0x140540240 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x14057F054 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x1405839B0 (AlpcRegionDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E8F94 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  char v3; // dl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v5; // rdi
  int (__fastcall *v6)(ULONG_PTR); // rax
  void (__fastcall **v7)(ULONG_PTR); // rcx
  void *v8; // rcx

  v2 = 0;
  v3 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v3 & 1) != 0 )
  {
    v2 = 0x10000 - *(__int16 *)(BugCheckParameter2 - 30);
    *(_WORD *)(BugCheckParameter2 - 30) = 0;
    *(_BYTE *)(BugCheckParameter2 - 32) = v3 & 0xFE;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
  KeAbPostRelease(BugCheckParameter2 - 16);
  if ( v2 > 0 )
  {
    BugCheckParameter4 = -v2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -v2);
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
      v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
      v6 = *(int (__fastcall **)(ULONG_PTR))(v5 + 32);
      if ( !v6 || v6(BugCheckParameter2) >= 0 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
        {
          v7 = &AlpcpLookasides[16 * (unsigned __int64)*(unsigned int *)(v5 + 8)];
          ++*((_DWORD *)v7 + 7);
          if ( *(_WORD *)v7 >= *((_WORD *)v7 + 8) )
          {
            ++*((_DWORD *)v7 + 8);
            v7[7](BugCheckParameter2 - 48);
          }
          else
          {
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)v7, (PSLIST_ENTRY)(BugCheckParameter2 - 48));
          }
        }
        else
        {
          v8 = (void *)(BugCheckParameter2 - 48);
          if ( *(_QWORD *)(v5 + 40) )
            AlpcpLookasides[16 * (unsigned __int64)*(unsigned int *)(v5 + 8) + 7]((ULONG_PTR)v8);
          else
            ExFreePoolWithTag(v8, *(_DWORD *)(v5 + 4));
        }
      }
    }
  }
}
