/*
 * XREFs of WmipUnreferenceEntry @ 0x14051EF80
 * Callers:
 *     WmipQueryAllData @ 0x14051B564 (WmipQueryAllData.c)
 *     WmipGenerateRegistrationNotification @ 0x14051C120 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x14051C2C4 (WmipEnableCollectionForNewGuid.c)
 *     WmipDeleteMethod @ 0x14051EB00 (WmipDeleteMethod.c)
 *     WmipQuerySetExecuteSI @ 0x14051ECEC (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x14051F6C0 (WmipAddProviderIdToPIList.c)
 *     WmipAddDataSource @ 0x140545304 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140545978 (WmipDetermineInstanceBaseIndex.c)
 *     WmipMangleInstanceName @ 0x140545A40 (WmipMangleInstanceName.c)
 *     WmipProcessEvent @ 0x140567EA4 (WmipProcessEvent.c)
 *     WmipRemoveDS @ 0x14057F694 (WmipRemoveDS.c)
 *     WmipDSCleanup @ 0x1405905A0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140593B58 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipSendEnableRequest @ 0x14059B364 (WmipSendEnableRequest.c)
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 *     WmipSendEnableDisableRequest @ 0x1405D5EF0 (WmipSendEnableDisableRequest.c)
 *     WmipLegacyEtwWorker @ 0x1405E1EA0 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x140741814 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x140741BCC (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x140742C4C (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x140743190 (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x14074326C (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407435C4 (WmipUpdateModifyGuid.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v8 = (void **)*((_QWORD *)a2 + 1), *v8 != a2) )
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
