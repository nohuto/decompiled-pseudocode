/*
 * XREFs of ?Invoke@LaunchAppByIdService@Actions@CreativeFramework@@UEAAXXZ @ 0x180084E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::LaunchAppByIdService::Invoke(
        CreativeFramework::Actions::LaunchAppByIdService *this)
{
  int v2; // eax
  const WCHAR *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h] BYREF
  const WCHAR *v10[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v10[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v9);
  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 88LL))(v9, &v8);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_11;
  }
  v3 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v3 = *(const WCHAR **)v3;
  v10[0] = v3;
  v4 = v8;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v11, v10);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 64LL))(v4, *(_QWORD *)(v5 + 24));
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_11:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0xAE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180084F86LL);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
