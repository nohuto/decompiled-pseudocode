/*
 * XREFs of ?GetFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180090954
 * Callers:
 *     ?CopyFavicon@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@Z @ 0x180090568 (-CopyFavicon@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180074EC4 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180075D48 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@W4CreationCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@$$QEAW4856@@Z @ 0x180090BA8 (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionO.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@wil@@YAJAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x180090F14 (--$AdaptFixedSizeToAllocatedResult@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x18009F8E8 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
CallerIdentity *__fastcall CreativeFramework::Actions::PinnedWebsiteManager::GetFaviconCache(
        CallerIdentity *a1,
        __int64 a2,
        void **a3)
{
  int StateHandle; // eax
  const WCHAR *v5; // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  const WCHAR *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // r8d
  __int64 *v14; // rax
  __int64 v15; // rcx
  const WCHAR *v16; // rcx
  const WCHAR *v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int16 v22[8]; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+68h] [rbp-A0h]
  _QWORD v24[14]; // [rsp+70h] [rbp-98h] BYREF
  void *v25[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-18h]
  unsigned __int64 v27; // [rsp+F8h] [rbp-10h]
  _BYTE v28[24]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v29; // [rsp+118h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v23 = -2LL;
  v21 = 0LL;
  StateHandle = CallerIdentity::GetStateHandle(a1, (const unsigned __int16 *)&v21, a3);
  if ( StateHandle < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)StateHandle);
    goto LABEL_19;
  }
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  LODWORD(v19) = 1;
  v5 = v21;
  v18 = v21;
  *(_QWORD *)v22 = &v18;
  *(_QWORD *)&v22[4] = &v19;
  v24[0] = off_1800DB800;
  *(_OWORD *)&v24[1] = *(_OWORD *)v22;
  v24[13] = v24;
  v6 = wil::AdaptFixedSizeToAllocatedResult<std::wstring,260>(v25, v24);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x51,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180090BA4LL);
  }
  v8 = (const WCHAR *)v25;
  if ( v27 >= 8 )
    v8 = (const WCHAR *)v25[0];
  v18 = v8;
  v18 = *(const WCHAR **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v28, &v18) + 24);
  v9 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>((const WCHAR *)&v20);
  v10 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
                     (__int64)&v19,
                     *v9,
                     (__int64 (__fastcall *)(__int64, _QWORD, __int64 *)) Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}},
                     &v18);
  v11 = *v10;
  *v10 = 0LL;
  *(_QWORD *)v22 = v11;
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  LODWORD(v19) = 3;
  v20 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      (__int64)v28,
                      (const WCHAR **)&off_1800EAAE8)
                  + 24);
  v14 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
                     (unsigned int)&v18,
                     v11,
                     v13,
                     (unsigned int)&v20,
                     (__int64)&v19);
  v15 = *v14;
  *v14 = 0LL;
  *(_QWORD *)a1 = v15;
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v29 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v27 >= 8 )
    operator delete(v25[0]);
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  if ( v5 )
    CloseState(v5);
  return a1;
}
