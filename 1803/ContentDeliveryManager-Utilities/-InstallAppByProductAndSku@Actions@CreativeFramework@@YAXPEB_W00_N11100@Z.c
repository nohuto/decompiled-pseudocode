/*
 * XREFs of ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x18007D204
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007D730 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x18007CC18 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::InstallAppByProductAndSku(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        bool a5,
        char a6,
        bool a7,
        const WCHAR *a8,
        const wchar_t *a9)
{
  char v9; // r14
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // [rsp+20h] [rbp-C1h]
  __int64 v19; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v20; // [rsp+48h] [rbp-99h] BYREF
  const WCHAR *v21; // [rsp+50h] [rbp-91h] BYREF
  const WCHAR *v22; // [rsp+58h] [rbp-89h] BYREF
  __int64 v23; // [rsp+60h] [rbp-81h] BYREF
  const WCHAR *v24; // [rsp+68h] [rbp-79h] BYREF
  const WCHAR *v25[2]; // [rsp+70h] [rbp-71h] BYREF
  _BYTE v26[32]; // [rsp+80h] [rbp-61h] BYREF
  _BYTE v27[32]; // [rsp+A0h] [rbp-41h] BYREF
  _BYTE v28[32]; // [rsp+C0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+37h]

  v25[1] = (const WCHAR *)-2LL;
  v9 = (char)a4;
  v22 = this;
  v21 = a2;
  v25[0] = a3;
  v24 = a8;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v23);
  v19 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 48LL))(v23, &v19);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_13;
  }
  if ( !a5 )
  {
    v20 = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    CreativeFramework::Actions::GetEntitlementForRecord(&v20, (WCHAR *)&v22, (WCHAR *)&v21, &v24, &a9, a6);
  }
  v11 = v19;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v26, v25);
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v27, &v21);
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v28, &v22);
  LOBYTE(v18) = a7;
  LOBYTE(v15) = v9;
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD, _QWORD))(*(_QWORD *)v11 + 128LL))(
          v11,
          *(_QWORD *)(v14 + 24),
          *(_QWORD *)(v13 + 24),
          v15,
          v18,
          *(_QWORD *)(v12 + 24),
          0LL);
  v17 = retaddr;
  if ( v16 < 0 )
  {
LABEL_13:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0xD4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x18007D3A9LL);
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
}
