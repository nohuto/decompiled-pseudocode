/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000EEFC
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x18000E280 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumera.c)
 * Callees:
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FEB8 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Get(
        __int64 a1,
        void **a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned int v6; // esi
  _DWORD *v7; // rax
  __int64 v8; // rbx
  HRESULT InterfaceAndReleaseStream; // eax
  IStream *v10; // rcx

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = (*(__int64 (__fastcall **)(__int64, GUID *, void **))(*(_QWORD *)v3 + 24LL))(
           v3,
           &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
           a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    return v4;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 24) )
    {
      *a2 = 0LL;
      v6 = -2147467259;
      v7 = *(_DWORD **)(a1 + 24);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 24);
        if ( v7[6] == 2 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
        else
          *(_QWORD *)(a1 + 24) = 0LL;
        *a2 = 0LL;
        if ( *(_DWORD *)(v8 + 24) == 2 )
        {
          InterfaceAndReleaseStream = AgileGitPtr::CopyLocal(
                                        (AgileGitPtr *)(v8 + 32),
                                        &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
                                        a2);
        }
        else
        {
          v10 = *(IStream **)(v8 + 16);
          *(_QWORD *)(v8 + 16) = 0LL;
          InterfaceAndReleaseStream = CoGetInterfaceAndReleaseStream(
                                        v10,
                                        &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
                                        a2);
        }
        v6 = InterfaceAndReleaseStream;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
    else
    {
      return 0;
    }
    return v6;
  }
}
