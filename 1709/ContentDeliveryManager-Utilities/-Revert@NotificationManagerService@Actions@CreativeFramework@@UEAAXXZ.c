/*
 * XREFs of ?Revert@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004B110 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::NotificationManagerService::Revert(
        CreativeFramework::Actions::NotificationManagerService *this)
{
  int v2; // eax
  const WCHAR *v3; // rax
  const WCHAR *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // [rsp+28h] [rbp-19h] BYREF
  __int64 v10; // [rsp+30h] [rbp-11h] BYREF
  const WCHAR *v11; // [rsp+38h] [rbp-9h] BYREF
  const WCHAR *v12[2]; // [rsp+40h] [rbp-1h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp+Fh] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v12[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v10);
  v9 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 72LL))(v10, &v9);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (const WCHAR *)((char *)this + 80);
  if ( *((_QWORD *)this + 13) >= 8uLL )
    v3 = *(const WCHAR **)v3;
  v11 = v3;
  v4 = (const WCHAR *)((char *)this + 48);
  if ( *((_QWORD *)this + 9) >= 8uLL )
    v4 = *(const WCHAR **)v4;
  v12[0] = v4;
  v5 = v9;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v13, &v11);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v14, v12);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 64LL))(
         v5,
         *(_QWORD *)(v7 + 24),
         *(_QWORD *)(v6 + 24));
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
