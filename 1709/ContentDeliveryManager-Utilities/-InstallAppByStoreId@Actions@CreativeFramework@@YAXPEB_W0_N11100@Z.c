/*
 * XREFs of ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N11100@Z @ 0x1800726A4
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180072D40 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004B110 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z @ 0x180071DE8 (-ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x180072450 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::Actions::InstallAppByStoreId(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        char a4,
        char a5,
        bool a6,
        const WCHAR *a7,
        const wchar_t *a8)
{
  char v9; // r15
  int v10; // eax
  __int64 v11; // rbx
  HSTRING *v12; // r9
  int v13; // eax
  __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // eax
  HSTRING string; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v25; // [rsp+70h] [rbp-98h] BYREF
  const WCHAR *v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  PCWSTR StringRawBuffer; // [rsp+88h] [rbp-80h] BYREF
  PCWSTR v29; // [rsp+90h] [rbp-78h] BYREF
  const WCHAR *v30; // [rsp+98h] [rbp-70h] BYREF
  const WCHAR *v31; // [rsp+A0h] [rbp-68h] BYREF
  const WCHAR *v32[2]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v33[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v34[32]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v35[32]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v36[32]; // [rsp+118h] [rbp+10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v32[1] = (const WCHAR *)-2LL;
  v9 = (char)a3;
  v26 = this;
  v32[0] = a2;
  v31 = a7;
  v30 = a8;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v27);
  v24 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v27 + 48LL))(v27, &v24);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xC4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  if ( !a4 )
  {
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v33, &v26);
    WindowsDeleteString(0LL);
    string = 0LL;
    WindowsDeleteString(0LL);
    v23 = 0LL;
    v13 = CreativeFramework::StoreHelpers::ParseStoreId(*(HSTRING *)(v11 + 24), &v23, &string, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xC9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v13);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v29 = WindowsGetStringRawBuffer(v23, 0LL);
    v25 = v24;
    if ( v24 )
      (*(void (__fastcall **)(__int64 *))(*v24 + 8))(v24);
    CreativeFramework::Actions::GetEntitlementForRecord(&v25, &v29, &StringRawBuffer, a5);
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v23);
  }
  v14 = v24;
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v33, &v30);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v34, &v31);
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v35, v32);
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v36, &v26);
  v19 = *(_QWORD *)(v15 + 24);
  LOBYTE(v19) = a6;
  LOBYTE(v20) = v9;
  v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*v14 + 112))(
          v14,
          *(_QWORD *)(v18 + 24),
          v20,
          v19,
          *(_QWORD *)(v17 + 24),
          *(_QWORD *)(v16 + 24),
          *(_QWORD *)(v15 + 24),
          0LL);
  if ( v21 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v21);
  if ( v24 )
    (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
}
