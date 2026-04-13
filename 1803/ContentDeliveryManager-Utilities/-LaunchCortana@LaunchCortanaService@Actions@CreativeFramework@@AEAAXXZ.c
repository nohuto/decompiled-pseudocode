/*
 * XREFs of ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008ED98
 * Callers:
 *     ?Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008ED90 (-Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180070F6C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800711AC (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UILockScreenRegistrySettingProvider@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008F0E8 (--$ActivateInstance@UILockScreenRegistrySettingProvider@ContentManagement@@@wil@@YA-AV-$com_ptr_.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana(
        CreativeFramework::Actions::LaunchCortanaService *this)
{
  int v1; // eax
  LSTATUS ValueW; // edx
  __int16 v3; // cx
  signed int v4; // eax
  __int64 v5; // rax
  HRESULT v6; // eax
  wil::details::in1diag3 *v7; // rcx
  _WORD **v8; // rdx
  int v9; // eax
  char v10; // [rsp+40h] [rbp-288h] BYREF
  _BYTE v11[3]; // [rsp+41h] [rbp-287h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-284h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-280h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-278h] BYREF
  _WORD *v15[3]; // [rsp+60h] [rbp-268h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-250h]
  void *Src[3]; // [rsp+80h] [rbp-248h] BYREF
  unsigned __int64 v18; // [rsp+98h] [rbp-230h]
  _WORD pvData[264]; // [rsp+A0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v14[1] = -2LL;
  v16 = 7LL;
  v15[2] = 0LL;
  LOWORD(v15[0]) = 0;
  std::wstring::assign(v15, (char *)L"StartMode=Reactive&QuerySource=LockScreen", 0x29uLL);
  v18 = 7LL;
  Src[2] = 0LL;
  LOWORD(Src[0]) = 0;
  std::wstring::assign(Src, (char *)L"&QuerySourceSecondaryId=", 0x18uLL);
  wil::ActivateInstance<ContentManagement::ILockScreenRegistrySettingProvider>(v14);
  v10 = 0;
  v11[0] = 0;
  v1 = (*(__int64 (__fastcall **)(_QWORD, char *, _BYTE *))(*(_QWORD *)v14[0] + 48LL))(v14[0], &v10, v11);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_28;
  }
  if ( v10 )
  {
    std::wstring::append(Src, (char *)L"LaunchFromSpotlight", 0x13uLL);
  }
  else
  {
    memset_0(pvData, 0, 0x208uLL);
    pcbData = 520;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Speech_OneCore\\Preferences",
               L"Id",
               2u,
               0LL,
               pvData,
               &pcbData);
    if ( ValueW )
    {
      v3 = 0;
      pvData[0] = 0;
    }
    else
    {
      v3 = pvData[0];
    }
    v4 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v4 = ValueW;
    if ( v4 >= 0 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( pvData[v5] );
      if ( v5 )
        std::wstring::append(Src, (char *)pvData, v5 & -(__int64)(v3 != 0));
    }
  }
  std::wstring::append(v15, Src, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  if ( v18 >= 8 )
    operator delete(Src[0]);
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_24ac8f2b_4d4a_4c17_9607_6a4b14068f97,
         0LL,
         4u,
         &GUID_37c30b2c_2c34_45bc_bb87_62126979a511,
         &ppv);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x41,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = v15;
  if ( v16 >= 8 )
    v8 = (_WORD **)v15[0];
  v9 = (*(__int64 (__fastcall **)(LPVOID, _WORD **))(*(_QWORD *)ppv + 24LL))(ppv, v8);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v9);
    JUMPOUT(0x18008F076LL);
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v16 >= 8 )
    operator delete(v15[0]);
}
