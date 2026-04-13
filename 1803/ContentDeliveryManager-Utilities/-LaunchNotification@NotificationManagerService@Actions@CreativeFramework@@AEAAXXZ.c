/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008AE80
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008AD30 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004ED0C (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x18007E288 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_18007E288.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x180086484 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180091760 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(const WCHAR **this)
{
  int v2; // eax
  bool v3; // r15
  const WCHAR *v4; // rax
  const WCHAR *v5; // rax
  __int64 ToastContentXML; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  const WCHAR *v11; // r9
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // [rsp+48h] [rbp-89h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-81h] BYREF
  __int64 v16; // [rsp+58h] [rbp-79h] BYREF
  const WCHAR *v17; // [rsp+60h] [rbp-71h] BYREF
  const WCHAR *v18[2]; // [rsp+68h] [rbp-69h] BYREF
  void *v19[3]; // [rsp+78h] [rbp-59h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp-41h]
  _BYTE v21[24]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-21h]
  _BYTE v23[24]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-1h]
  _BYTE v25[24]; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v26; // [rsp+F0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v18[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v16);
  v14 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 72LL))(v16, &v14);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_22;
  }
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  std::wstring::assign(v19, (char *)L"isGhost", aIsghost[0] != 0 ? 7 : 0);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    (__int64)(this + 15),
    &v15,
    v19);
  if ( v20 >= 8 )
    operator delete(v19[0]);
  v3 = v15 != this[15] && std::operator==<wchar_t>((_QWORD *)v15 + 8, L"true");
  v4 = (const WCHAR *)(this + 10);
  if ( (unsigned __int64)this[13] >= 8 )
    v4 = *(const WCHAR **)v4;
  v15 = v4;
  v5 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v5 = *(const WCHAR **)v5;
  v17 = v5;
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[17], v19);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v18[0] = (const WCHAR *)ToastContentXML;
  v7 = v14;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v25, &v15);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, &v17);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v21, v18);
  v11 = this[14];
  LOBYTE(v11) = v3;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const WCHAR *, const WCHAR *, _QWORD))(*(_QWORD *)v7 + 56LL))(
          v7,
          *(_QWORD *)(v10 + 24),
          *(_QWORD *)(v9 + 24),
          v11,
          this[14],
          *(_QWORD *)(v8 + 24));
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18008B0B1LL);
  }
  v22 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  if ( v20 >= 8 )
    operator delete(v19[0]);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
}
