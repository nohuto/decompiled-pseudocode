/*
 * XREFs of ?CopyFavicon@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@Z @ 0x180090568
 * Callers:
 *     ?PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z @ 0x180090C4C (-PinWebsite@PinnedWebsiteManager@Actions@CreativeFramework@@YAXPEB_W00@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180070F6C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFileStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x180074F48 (--$CallAndWaitForCompletion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsync.c)
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@P8456@EAAJPEAUIStorageFolder@56@PEAUHSTRING__@@W4NameCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU756@$$QEAPEAU8@$$QEAW4956@@Z @ 0x180074FCC (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 *     ??$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180075E80 (--$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorageFi.c)
 *     ?GetFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180090954 (-GetFaviconCache@PinnedWebsiteManager@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIStorageFolde.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
_QWORD *__fastcall CreativeFramework::Actions::PinnedWebsiteManager::CopyFavicon(_QWORD *a1, __int64 a2)
{
  const WCHAR *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  char *StringRawBuffer; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  const WCHAR *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 *v19; // rax
  __int64 v20; // r13
  const WCHAR *v21; // rcx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  const WCHAR *v24; // rdi
  int v25; // eax
  wil::details::in1diag3 *v26; // rcx
  char *v27; // rax
  const WCHAR *v29; // [rsp+38h] [rbp-79h] BYREF
  __int64 v30; // [rsp+40h] [rbp-71h] BYREF
  HSTRING v31; // [rsp+48h] [rbp-69h] BYREF
  HSTRING string; // [rsp+50h] [rbp-61h] BYREF
  const WCHAR *v33; // [rsp+58h] [rbp-59h] BYREF
  __int64 v34; // [rsp+60h] [rbp-51h] BYREF
  _QWORD v35[4]; // [rsp+68h] [rbp-49h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v37; // [rsp+98h] [rbp-19h]
  unsigned __int64 v38; // [rsp+A0h] [rbp-11h]
  _BYTE v39[32]; // [rsp+A8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v35[1] = -2LL;
  v35[3] = a2;
  CreativeFramework::Actions::PinnedWebsiteManager::GetFaviconCache(v35);
  if ( *(_QWORD *)(a2 + 24) < 8uLL )
    v4 = (const WCHAR *)a2;
  else
    v4 = *(const WCHAR **)a2;
  v29 = v4;
  v29 = *(const WCHAR **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, &v29) + 24);
  v5 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFileStatics>((const WCHAR *)&v33);
  v6 = (__int64 *)___CallAndWaitForCompletion_UIStorageFileStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFileStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
                    (__int64)&v30,
                    *v5,
                    (__int64 (__fastcall *)(__int64, _QWORD, __int64 *)) Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}},
                    &v29);
  v7 = *v6;
  *v6 = 0LL;
  v35[2] = v7;
  v8 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v33 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v33 + 16LL))(v33);
  string = 0LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
         v7,
         &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
         &v30);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    goto LABEL_35;
  }
  v10 = v30;
  WindowsDeleteString(string);
  string = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 88LL))(v10, &string);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x163B,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v22);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v26,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v25);
    __debugbreak();
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
  v38 = 7LL;
  v37 = 0LL;
  LOWORD(Src[0]) = 0;
  v14 = -1LL;
  if ( *(_WORD *)StringRawBuffer )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)&StringRawBuffer[2 * v15] );
  }
  else
  {
    v15 = 0LL;
  }
  std::wstring::assign(Src, StringRawBuffer, v15);
  std::wstring::append(Src, (char *)L".png", aPng[0] != 0 ? 4 : 0);
  LODWORD(v30) = 1;
  v16 = (const WCHAR *)Src;
  if ( v38 >= 8 )
    v16 = (const WCHAR *)Src[0];
  v33 = v16;
  v33 = *(const WCHAR **)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, &v33) + 24);
  v17 = v35[0];
  v34 = v35[0];
  v19 = (__int64 *)___CallAndWaitForCompletion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFile_Storage_Windows__P8456_EAAJPEAUIStorageFolder_56_PEAUHSTRING____W4NameCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU756___QEAPEAU8___QEAW4956__Z(
                     (__int64)&v29,
                     v7,
                     v18,
                     &v34,
                     &v33,
                     (unsigned int *)&v30);
  v20 = *v19;
  *v19 = 0LL;
  v34 = v20;
  v21 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v31 = 0LL;
  v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, const WCHAR **))v20)(
          v20,
          &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
          &v29);
  v23 = retaddr;
  if ( v22 < 0 )
    goto LABEL_36;
  v24 = v29;
  WindowsDeleteString(v31);
  v31 = 0LL;
  v25 = (*(__int64 (__fastcall **)(const WCHAR *, HSTRING *))(*(_QWORD *)v24 + 96LL))(v24, &v31);
  v26 = retaddr;
  if ( v25 < 0 )
    goto LABEL_37;
  if ( v29 )
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v29 + 16LL))(v29);
  v27 = (char *)WindowsGetStringRawBuffer(v31, 0LL);
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( *(_WORD *)v27 )
  {
    do
      ++v14;
    while ( *(_WORD *)&v27[2 * v14] );
  }
  else
  {
    v14 = 0LL;
  }
  std::wstring::assign(a1, v27, v14);
  WindowsDeleteString(v31);
  v31 = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v38 >= 8 )
    operator delete(Src[0]);
  v38 = 7LL;
  v37 = 0LL;
  LOWORD(Src[0]) = 0;
  WindowsDeleteString(string);
  string = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    operator delete(*(void **)a2);
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  return a1;
}
