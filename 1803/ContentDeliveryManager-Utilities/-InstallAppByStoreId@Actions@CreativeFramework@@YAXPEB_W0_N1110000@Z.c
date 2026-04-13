/*
 * XREFs of ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x18007CF68
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007D730 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z @ 0x18007C588 (-ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x18007CC18 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  char v11; // r15
  int v12; // eax
  __int64 v13; // rbx
  HSTRING *v14; // r9
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  HSTRING string; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v27; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  const WCHAR *v30; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  const WCHAR *v32; // [rsp+88h] [rbp-80h] BYREF
  PCWSTR StringRawBuffer; // [rsp+90h] [rbp-78h] BYREF
  PCWSTR v34; // [rsp+98h] [rbp-70h] BYREF
  const WCHAR *v35; // [rsp+A0h] [rbp-68h] BYREF
  const WCHAR *v36; // [rsp+A8h] [rbp-60h] BYREF
  const WCHAR *v37[2]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v38[32]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v39[32]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v40[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v41[32]; // [rsp+120h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v37[1] = (const WCHAR *)-2LL;
  v11 = (char)a3;
  v30 = this;
  v37[0] = a2;
  v36 = a7;
  v35 = a8;
  v32 = a9;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v31);
  v28 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v28);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_14;
  }
  if ( a4 )
    goto LABEL_7;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, &v30);
  WindowsDeleteString(0LL);
  string = 0LL;
  WindowsDeleteString(0LL);
  v27 = 0LL;
  v15 = CreativeFramework::StoreHelpers::ParseStoreId(*(HSTRING *)(v13 + 24), &v27, &string, v14);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0xB5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v15);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0xC1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v34 = WindowsGetStringRawBuffer(v27, 0LL);
  v29 = v28;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  CreativeFramework::Actions::GetEntitlementForRecord(&v29, (WCHAR *)&v34, (WCHAR *)&StringRawBuffer, &v32, &a10, a5);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v27);
LABEL_7:
  v17 = v28;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v38, &v35);
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v39, &v36);
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v40, v37);
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v41, &v30);
  v22 = *(_QWORD *)(v18 + 24);
  LOBYTE(v22) = a6;
  LOBYTE(v23) = v11;
  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 112LL))(
          v17,
          *(_QWORD *)(v21 + 24),
          v23,
          v22,
          *(_QWORD *)(v20 + 24),
          *(_QWORD *)(v19 + 24),
          *(_QWORD *)(v18 + 24),
          0LL);
  v25 = retaddr;
  if ( v24 < 0 )
    goto LABEL_15;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
}
