/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18007F4FC
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007F3B0 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004B110 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x1800737D4 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHPEB_W@Z @ 0x180077C28 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHPEB_W@Z.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180084EB4 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(__int64 **this)
{
  int v2; // eax
  bool v3; // r15
  __int64 *v4; // rax
  const WCHAR *v5; // rax
  __int64 ToastContentXML; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // [rsp+48h] [rbp-89h] BYREF
  __int64 *v14; // [rsp+50h] [rbp-81h] BYREF
  __int64 v15; // [rsp+58h] [rbp-79h] BYREF
  const WCHAR *v16; // [rsp+60h] [rbp-71h] BYREF
  const WCHAR *v17[2]; // [rsp+68h] [rbp-69h] BYREF
  void *v18[3]; // [rsp+78h] [rbp-59h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp-41h]
  _BYTE v20[24]; // [rsp+98h] [rbp-39h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-21h]
  _BYTE v22[24]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-1h]
  _BYTE v24[24]; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v25; // [rsp+F0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v17[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v15);
  v13 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 72LL))(v15, &v13);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v19 = 7LL;
  v18[2] = 0LL;
  LOWORD(v18[0]) = 0;
  std::wstring::assign(v18, (char *)L"isGhost", aIsghost[0] != 0 ? 7 : 0);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    (__int64)(this + 15),
    &v14,
    v18);
  if ( v19 >= 8 )
    operator delete(v18[0]);
  v3 = v14 != this[15] && (unsigned int)std::wstring::compare(v14 + 8, L"true") == 0;
  v4 = (__int64 *)(this + 10);
  if ( (unsigned __int64)this[13] >= 8 )
    v4 = (__int64 *)*v4;
  v14 = v4;
  v5 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v5 = *(const WCHAR **)v5;
  v16 = v5;
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[17], v18);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v17[0] = (const WCHAR *)ToastContentXML;
  v7 = v13;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v24, (const WCHAR **)&v14);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, &v16);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v20, v17);
  LOBYTE(v11) = v3;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64 *, _QWORD))(*(_QWORD *)v7 + 56LL))(
          v7,
          *(_QWORD *)(v10 + 24),
          *(_QWORD *)(v9 + 24),
          v11,
          this[14],
          *(_QWORD *)(v8 + 24));
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v12);
  v21 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  if ( v19 >= 8 )
    operator delete(v18[0]);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
}
