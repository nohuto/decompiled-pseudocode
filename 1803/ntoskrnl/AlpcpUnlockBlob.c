/*
 * XREFs of AlpcpUnlockBlob @ 0x1404CBF90
 * Callers:
 *     AlpcpForceUnlinkSecureView @ 0x14048BE1C (AlpcpForceUnlinkSecureView.c)
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1404CED50 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404D0660 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1404D513C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x1404D6CD0 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 *     AlpcSectionDeleteProcedure @ 0x1404D9F40 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x1404DFC44 (AlpcpReleaseViewAttribute.c)
 *     AlpcpQueryRemoteView @ 0x1404DFC7C (AlpcpQueryRemoteView.c)
 *     AlpcpMapLegacyPortView @ 0x1405563C4 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x140556764 (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttribute @ 0x1405602F0 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x14056DF50 (AlpcRegionDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x1405E81D4 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v6; // eax
  signed __int64 BugCheckParameter4; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _SLIST_HEADER *v12; // rcx
  void *v13; // rcx

  v4 = *(unsigned __int8 *)(BugCheckParameter2 - 32);
  if ( (v4 & 1) != 0
    && (v6 = *(__int16 *)(BugCheckParameter2 - 30),
        LOBYTE(v4) = v4 & 0xFE,
        *(_BYTE *)(BugCheckParameter2 - 32) = v4,
        a2 = (unsigned int)(0x10000 - v6),
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        (int)a2 > 0)
    && (a2 = (unsigned int)(v6 - 0x10000),
        BugCheckParameter4 = (int)a2
                           + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), (int)a2),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v8 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    (*(void (__fastcall **)(ULONG_PTR))(v8 + 24))(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16), v9, v10, v11);
    KeAbPostRelease(BugCheckParameter2 - 16);
    if ( (*(int (__fastcall **)(ULONG_PTR))(v8 + 40))(BugCheckParameter2) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        v12 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v8 + 8);
        ++*((_DWORD *)&v12[1].HeaderX64 + 3);
        if ( LOWORD(v12->Alignment) >= LOWORD(v12[1].Alignment) )
        {
          ++LODWORD(v12[2].Alignment);
          ((void (__fastcall *)(ULONG_PTR))v12[3].Region)(BugCheckParameter2 - 48);
        }
        else
        {
          RtlpInterlockedPushEntrySList(v12, (PSLIST_ENTRY)(BugCheckParameter2 - 48));
        }
      }
      else
      {
        v13 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v8 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v8 + 8) + 7))(v13);
        else
          ExFreePoolWithTag(v13, *(_DWORD *)(v8 + 4));
      }
    }
  }
  else if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16), a2, v4, a4);
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
