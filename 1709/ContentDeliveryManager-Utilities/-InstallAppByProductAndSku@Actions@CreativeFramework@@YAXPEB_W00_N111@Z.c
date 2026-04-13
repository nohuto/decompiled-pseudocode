/*
 * XREFs of ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N111@Z @ 0x18007291C
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180072D40 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004B110 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x180072450 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::InstallAppByProductAndSku(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        bool a5,
        char a6,
        bool a7)
{
  char v7; // r14
  int v8; // eax
  __int64 *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // eax
  __int64 *v15; // [rsp+40h] [rbp-81h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-79h] BYREF
  const WCHAR *v17; // [rsp+50h] [rbp-71h] BYREF
  const WCHAR *v18; // [rsp+58h] [rbp-69h] BYREF
  __int64 v19; // [rsp+60h] [rbp-61h] BYREF
  const WCHAR *v20[2]; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v21[32]; // [rsp+78h] [rbp-49h] BYREF
  _BYTE v22[32]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v23[32]; // [rsp+B8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v20[1] = (const WCHAR *)-2LL;
  v7 = (char)a4;
  v18 = this;
  v17 = a2;
  v20[0] = a3;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v19);
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v19 + 48LL))(v19, &v15);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xDC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  if ( !a5 )
  {
    v16 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64 *))(*v15 + 8))(v15);
    CreativeFramework::Actions::GetEntitlementForRecord(&v16, &v18, &v17, a6);
  }
  v9 = v15;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, v20);
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, &v17);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, &v18);
  LOBYTE(v13) = v7;
  v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64, bool, _QWORD, _QWORD))(*v9 + 128))(
          v9,
          *(_QWORD *)(v12 + 24),
          *(_QWORD *)(v11 + 24),
          v13,
          a7,
          *(_QWORD *)(v10 + 24),
          0LL);
  if ( v14 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
}
