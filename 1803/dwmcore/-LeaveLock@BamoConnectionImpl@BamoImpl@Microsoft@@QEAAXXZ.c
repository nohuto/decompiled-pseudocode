/*
 * XREFs of ?LeaveLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180153A74
 * Callers:
 *     ??0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152DC4 (--0ConditionalDropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x180153D20 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x180153D60 (-OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z.c)
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x180154050 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 *     ?OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z @ 0x1801541E0 (-OnPeerDisconnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIPEBX_N@Z.c)
 *     ?BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x180168640 (-BroadcastOnRegisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z @ 0x180168730 (-BroadcastOnUnregisterError@BamoDataProviderRegistrarPrincipal@@UEAAJI@Z.c)
 *     ?OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x180168A80 (-OnRegisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z @ 0x180168B90 (-OnUnregisterError@BamoDataProviderRegistrarStub@@UEAAJI@Z.c)
 *     ?Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x180169110 (-Release@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180169850 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ @ 0x180169960 (-OnAllReadersDisconnected@BamoDataProviderProxy@@UEAAJXZ.c)
 *     ?OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z @ 0x180169A70 (-OnReaderConnected@BamoDataProviderProxy@@UEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180169B80 (-OnRemoveDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 *     ?SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z @ 0x180169F50 (-SetNumberOfReaders@BamoDataProviderProxy@@UEAAXI@Z.c)
 *     ?GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ @ 0x18016B590 (-GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x18016B680 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 *     ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016C4D0 (-Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CurrentThreadHasLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180153644 (-CurrentThreadHasLock@BamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

void __fastcall Microsoft::BamoImpl::BamoConnectionImpl::LeaveLock(Microsoft::BamoImpl::BamoConnectionImpl *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !Microsoft::BamoImpl::BamoConnectionImpl::CurrentThreadHasLock(this) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x574,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      v2);
    __debugbreak();
  }
  *((_DWORD *)this + 34) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
}
