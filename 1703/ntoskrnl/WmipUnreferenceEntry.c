/*
 * XREFs of WmipUnreferenceEntry @ 0x1404BECD0
 * Callers:
 *     WmipDeleteMethod @ 0x140433520 (WmipDeleteMethod.c)
 *     WmipQueryAllData @ 0x1404BE8F4 (WmipQueryAllData.c)
 *     WmipAddProviderIdToPIList @ 0x1405551A0 (WmipAddProviderIdToPIList.c)
 *     WmipSendEnableRequest @ 0x1405577A8 (WmipSendEnableRequest.c)
 *     WmipQuerySetExecuteSI @ 0x1405807A8 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x140580A10 (WmipPrepareWnodeSI.c)
 *     WmipProcessEvent @ 0x140580EBC (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x140581C7C (WmipSendEnableDisableRequest.c)
 *     WmipDSCleanup @ 0x140595880 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140595CB0 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRemoveDS @ 0x1405996CC (WmipRemoveDS.c)
 *     WmipAddDataSource @ 0x1405A03B8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405A0A10 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x1405A0AD8 (WmipMangleInstanceName.c)
 *     WmipGenerateRegistrationNotification @ 0x1405A0CC8 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405A0E6C (WmipEnableCollectionForNewGuid.c)
 *     WmipAddMofResource @ 0x1405A12B0 (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x1405CC580 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwCallback @ 0x1405D8FA4 (WmipProcessLegacyEtwCallback.c)
 *     WmipDereferenceEvent @ 0x140707C28 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x140707FDC (WmipIncludeStaticNames.c)
 *     WmipUpdateAddGuid @ 0x140709170 (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x14070924C (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407095A4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  void (__fastcall *v7)(volatile signed __int64 *); // rax
  void **v8; // rcx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v4 = _InterlockedDecrement64(a2 + 3);
  if ( v4 )
  {
    if ( v4 < 0 )
      KeBugCheckEx(0x14Au, 2uLL, (ULONG_PTR)a2, 0LL, 0LL);
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    *((_DWORD *)a2 + 4) |= 0x20000000u;
    v6 = *a2;
    if ( *a2 && (a2[2] & 0x10000000) != 0 )
    {
      v8 = (void **)*((_QWORD *)a2 + 1);
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || *v8 != a2 )
        __fastfail(3u);
      *v8 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v8;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v7 = *(void (__fastcall **)(volatile signed __int64 *))(a1 + 16);
    if ( v7 )
      v7(a2);
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
