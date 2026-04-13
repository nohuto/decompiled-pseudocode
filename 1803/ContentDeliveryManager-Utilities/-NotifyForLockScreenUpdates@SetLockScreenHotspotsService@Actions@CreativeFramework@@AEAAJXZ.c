/*
 * XREFs of ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x18008FA8C
 * Callers:
 *     ?Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008F600 (-Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008F660 (-Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008F720 (-Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  __int64 v2; // rbx
  int v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  DWORD LengthSid; // eax
  int v12; // eax
  __int64 *v14; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v16[32]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v15[1] = -2LL;
  v14 = 0LL;
  v2 = *(_QWORD *)wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v15);
  v14 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v2 + 112LL))(v2, &v14);
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  if ( v3 < 0 )
  {
    v4 = (unsigned int)v3;
    v5 = 140LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)v4);
    goto LABEL_9;
  }
  v6 = v14;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v16, (const WCHAR **)off_1800EAAE0);
  v8 = (void *)*((_QWORD *)this + 1);
  v9 = *(_QWORD *)(v7 + 24);
  v10 = *v6;
  LengthSid = GetLengthSid(v8);
  v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, void *))(v10 + 48))(v6, v9, LengthSid, v8);
  v3 = v12;
  if ( v12 < 0 )
  {
    v4 = (unsigned int)v12;
    v5 = 141LL;
    goto LABEL_7;
  }
  v3 = 0;
LABEL_9:
  if ( v14 )
    (*(void (__fastcall **)(__int64 *))(*v14 + 16))(v14);
  return (unsigned int)v3;
}
