/*
 * XREFs of WmipUnreferenceEntry @ 0x14051B374
 * Callers:
 *     WmipQueryAllData @ 0x14051A7B0 (WmipQueryAllData.c)
 *     WmipDeleteMethod @ 0x14051B000 (WmipDeleteMethod.c)
 *     WmipQuerySetExecuteSI @ 0x14051B0F8 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x14051B6F4 (WmipAddProviderIdToPIList.c)
 *     WmipSendEnableRequest @ 0x14056A1B8 (WmipSendEnableRequest.c)
 *     WmipAddDataSource @ 0x1405FE7D0 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x1405FEF7C (WmipDetermineInstanceBaseIndex.c)
 *     WmipGenerateRegistrationNotification @ 0x1405FF044 (WmipGenerateRegistrationNotification.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405FF1F0 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x1405FF418 (WmipProcessEvent.c)
 *     WmipMangleInstanceName @ 0x1405FF820 (WmipMangleInstanceName.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14060002C (WmipDisableCollectionForRemovedGuid.c)
 *     WmipRemoveDS @ 0x140600D04 (WmipRemoveDS.c)
 *     WmipSendEnableDisableRequest @ 0x140602608 (WmipSendEnableDisableRequest.c)
 *     WmipDSCleanup @ 0x140604960 (WmipDSCleanup.c)
 *     WmipAddMofResource @ 0x140620EBC (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x1406493E0 (WmipLegacyEtwWorker.c)
 *     WmipDereferenceEvent @ 0x1407A38F0 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1407A3C9C (WmipIncludeStaticNames.c)
 *     WmipProcessLegacyEtwCallback @ 0x1407A4BD0 (WmipProcessLegacyEtwCallback.c)
 *     WmipUpdateAddGuid @ 0x1407A4DC4 (WmipUpdateAddGuid.c)
 *     WmipUpdateDataSource @ 0x1407A4EA0 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1407A51EC (WmipUpdateModifyGuid.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WmipUnreferenceEntry(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v4; // rdi
  volatile signed __int64 v6; // rax
  int v7; // ecx
  void (__fastcall *v8)(volatile signed __int64 *); // rax
  void **v9; // rcx

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
    v6 = *a2;
    v7 = *((_DWORD *)a2 + 4) | 0x20000000;
    *((_DWORD *)a2 + 4) = v7;
    if ( v6 && (v7 & 0x10000000) != 0 )
    {
      if ( *(volatile signed __int64 **)(v6 + 8) != a2 || (v9 = (void **)*((_QWORD *)a2 + 1), *v9 != a2) )
        __fastfail(3u);
      *v9 = (void *)v6;
      *(_QWORD *)(v6 + 8) = v9;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    v8 = *(void (__fastcall **)(volatile signed __int64 *))(a1 + 16);
    if ( v8 )
      v8(a2);
    ExFreeToNPagedLookasideList(*(PNPAGED_LOOKASIDE_LIST *)a1, (PVOID)a2);
  }
  return v4;
}
