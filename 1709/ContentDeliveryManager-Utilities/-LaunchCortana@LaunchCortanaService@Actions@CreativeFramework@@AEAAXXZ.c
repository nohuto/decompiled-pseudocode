/*
 * XREFs of ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x180083778
 * Callers:
 *     ?Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ @ 0x180083770 (-Invoke@LaunchCortanaService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180065040 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180065194 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana(
        CreativeFramework::Actions::LaunchCortanaService *this)
{
  __int64 v1; // rdi
  int v2; // eax
  int v3; // eax
  int v4; // eax
  LSTATUS ValueW; // edx
  __int16 v6; // cx
  signed int v7; // eax
  __int64 v8; // rax
  const char *v9; // r9
  HRESULT v10; // eax
  _WORD **v11; // rdx
  int v12; // eax
  char v13; // [rsp+40h] [rbp-2C8h] BYREF
  _BYTE v14[7]; // [rsp+41h] [rbp-2C7h] BYREF
  __int64 v15; // [rsp+48h] [rbp-2C0h] BYREF
  int v16; // [rsp+50h] [rbp-2B8h]
  DWORD pcbData[2]; // [rsp+58h] [rbp-2B0h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-2A8h] BYREF
  _QWORD v19[2]; // [rsp+68h] [rbp-2A0h] BYREF
  _WORD *v20[3]; // [rsp+78h] [rbp-290h] BYREF
  unsigned __int64 v21; // [rsp+90h] [rbp-278h]
  void *Src[3]; // [rsp+98h] [rbp-270h] BYREF
  unsigned __int64 v23; // [rsp+B0h] [rbp-258h]
  _BYTE v24[24]; // [rsp+B8h] [rbp-250h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-238h]
  _WORD pvData[264]; // [rsp+E0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+0h]

  v19[1] = -2LL;
  v16 = 0;
  v21 = 7LL;
  v20[2] = 0LL;
  LOWORD(v20[0]) = 0;
  std::wstring::assign(v20, (char *)L"StartMode=Reactive&QuerySource=LockScreen", 0x29uLL);
  try
  {
    v23 = 7LL;
    Src[2] = 0LL;
    LOWORD(Src[0]) = 0;
    std::wstring::assign(Src, (char *)L"&QuerySourceSecondaryId=", 0x18uLL);
    *(_QWORD *)pcbData = L"ContentManagement.ContentManagementService";
    v1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v24, (const WCHAR **)pcbData);
    v15 = 0LL;
    v2 = RoActivateInstance(*(_QWORD *)(v1 + 24), &v15);
    if ( v2 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x667,
        (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
        (const char *)(unsigned int)v2);
    v25 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v15)(
           v15,
           &GUID_666aed77_8284_49e0_bbe2_7f593622c839,
           v19);
    if ( v3 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15FD,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v3);
    v16 = 3;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v13 = 0;
    v14[0] = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, char *, _BYTE *))(*(_QWORD *)v19[0] + 48LL))(v19[0], &v13, v14);
    if ( v4 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
        (const char *)(unsigned int)v4);
    if ( v13 )
    {
      std::wstring::append(Src, (char *)L"LaunchFromSpotlight", 0x13uLL);
    }
    else
    {
      memset_0(pvData, 0, 0x208uLL);
      pcbData[0] = 520;
      ValueW = RegGetValueW(
                 HKEY_CURRENT_USER,
                 L"Software\\Microsoft\\Speech_OneCore\\Preferences",
                 L"Id",
                 2u,
                 0LL,
                 pvData,
                 pcbData);
      if ( ValueW )
      {
        v6 = 0;
        pvData[0] = 0;
      }
      else
      {
        v6 = pvData[0];
      }
      v7 = (unsigned __int16)ValueW | 0x80070000;
      if ( ValueW <= 0 )
        v7 = ValueW;
      if ( v7 >= 0 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( pvData[v8] );
        if ( v8 )
          std::wstring::append(Src, (char *)pvData, v8 & -(__int64)(v6 != 0));
      }
    }
    std::wstring::append(v20, Src, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v19[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19[0] + 16LL))(v19[0]);
    if ( v23 >= 8 )
      operator delete(Src[0]);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      v9);
  }
  ppv = 0LL;
  v10 = CoCreateInstance(
          &GUID_24ac8f2b_4d4a_4c17_9607_6a4b14068f97,
          0LL,
          4u,
          &GUID_37c30b2c_2c34_45bc_bb87_62126979a511,
          &ppv);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = v20;
  if ( v21 >= 8 )
    v11 = (_WORD **)v20[0];
  v12 = (*(__int64 (__fastcall **)(LPVOID, _WORD **))(*(_QWORD *)ppv + 24LL))(ppv, v11);
  if ( v12 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchcortana.cpp",
      (const char *)(unsigned int)v12);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( v21 >= 8 )
    operator delete(v20[0]);
}
