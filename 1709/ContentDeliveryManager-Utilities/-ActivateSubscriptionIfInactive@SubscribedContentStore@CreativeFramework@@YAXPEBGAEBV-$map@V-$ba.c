/*
 * XREFs of ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x18003F64C
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x1800402F0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ @ 0x1800040AC (-Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800166CC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800185EC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180026184 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x1800286A8 (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x180028938 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180030790 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??$?0$0DJ@@StringReference@Internal@Windows@@QEAA@AEAY0DJ@$$CBG@Z @ 0x180036BB0 (--$-0$0DJ@@StringReference@Internal@Windows@@QEAA@AEAY0DJ@$$CBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DB1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x18003EAD0 (-RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z.c)
 *     ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18003EC3C (-GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA-AW4SubscriptionState@12@PEBG_.c)
 *     ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x18003EDA0 (-AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV-$map@V-$basic_s.c)
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x18003F000 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?str@?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x1800428B8 (-str@-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV-$basic_string@GU.c)
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180042A18 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ??0?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@H@Z @ 0x180042AF4 (--0-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@H@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@@Z @ 0x180043250 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180043840 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 *     ??$?0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z @ 0x180043A80 (--$-0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z.c)
 *     ??$?0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z @ 0x180043AC4 (--$-0$0DL@@StringReference@Internal@Windows@@QEAA@AEAY0DL@$$CBG@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18009831C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive(
        CreativeFramework::SubscribedContentStore *this,
        __int64 **a2,
        _DWORD *a3)
{
  Windows::Internal::StringReference *v6; // rax
  HSTRING v7; // rax
  unsigned int v8; // eax
  BOOL SubscriptionState; // eax
  __int64 v10; // r8
  const WCHAR **v11; // r14
  int ActivationFactory; // eax
  int v13; // eax
  const unsigned __int16 *v14; // rdx
  __int64 *v15; // rdi
  __int64 v16; // rbx
  const WCHAR *v17; // rax
  __int64 v18; // rsi
  _QWORD *v19; // rax
  int v20; // eax
  const WCHAR *v21; // r14
  __int64 v22; // rsi
  _QWORD *v23; // rax
  int v24; // eax
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  HSTRING v30; // rax
  __int64 *v31; // rax
  __int64 i; // rax
  Windows::Internal::StringReference *v33; // rax
  HSTRING v34; // rax
  unsigned int v35; // eax
  HSTRING *v36; // rax
  HSTRING v37; // rax
  unsigned int v38; // eax
  Windows::Internal::StringReference *v39; // rax
  HSTRING v40; // rax
  unsigned int v41; // eax
  int v42; // eax
  WCHAR *v43; // rbx
  const unsigned __int16 *v44; // r8
  LPCVOID *lpData; // rcx
  unsigned int v46; // eax
  const unsigned __int16 *v47; // rdx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  WCHAR *v51; // rdi
  struct _FILETIME v52; // r9
  int v53; // eax
  __int64 v54; // rcx
  __int64 (__fastcall ***v55)(_QWORD, GUID *, _QWORD *); // rcx
  char v56; // [rsp+48h] [rbp-C0h]
  bool v57; // [rsp+49h] [rbp-BFh]
  __int64 (__fastcall ***v58)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v60; // [rsp+60h] [rbp-A8h] BYREF
  const WCHAR *v61; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v62; // [rsp+70h] [rbp-98h]
  __int64 **v63[2]; // [rsp+78h] [rbp-90h] BYREF
  HSTRING v64[2]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v65[16]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v66[136]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v67[13]; // [rsp+130h] [rbp+28h] BYREF
  HSTRING string; // [rsp+198h] [rbp+90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+1A0h] [rbp+98h] BYREF
  LPCVOID v70[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v71; // [rsp+1C8h] [rbp+C0h]
  unsigned __int64 v72; // [rsp+1D0h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v64[1] = (HSTRING)-2LL;
  *a3 = 0;
  if ( (unsigned __int64)a2[1] > 5 )
  {
    v6 = (Windows::Internal::StringReference *)Windows::Internal::StringReference::StringReference(
                                                 &string,
                                                 L"Cloud Query parameter count cannot exceed 5.");
    v7 = Windows::Internal::StringReference::Get(v6);
    RoOriginateError(2147942487LL, v7);
    v8 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x38B,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)v8);
    __debugbreak();
  }
  CreativeFramework::SubscribedContentStore::GetSubscriptionContext(v63, (__int64)this);
  SubscriptionState = CreativeFramework::SubscribedContentStore::GetSubscriptionState((__int64)this);
  LOBYTE(v11) = SubscriptionState;
  v57 = SubscriptionState;
  if ( !SubscriptionState
    || (v56 = 1, CreativeFramework::SubscribedContentStore::AreSubscriptionContextsEqual(v63, a2, v10)) )
  {
    v56 = 0;
  }
  v58 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v58);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x393,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v59 = 0LL;
  v13 = (**v58)(v58, &GUID_c1d432ba_c824_4452_a7fd_512bc3bbe9a1, &v59);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x395,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v65);
  v62 = 0LL;
  v15 = *a2;
  v16 = **a2;
  if ( (__int64 *)v16 != *a2 )
  {
    while ( 1 )
    {
      v11 = (const WCHAR **)(v16 + 32);
      if ( !*(_QWORD *)(v16 + 48) )
        break;
      if ( *(_QWORD *)(v16 + 48) > 0xDuLL )
      {
        v36 = Windows::Internal::StringReference::StringReference(
                &string,
                L"Cloud Query parameter names cannot exceed 13 characters.");
        v37 = Windows::Internal::StringReference::Get((Windows::Internal::StringReference *)v36);
        RoOriginateError(2147942487LL, v37);
        v38 = wil::verify_hresult<long>(0x80070057);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x39D,
          (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
          (const char *)v38);
        __debugbreak();
      }
      if ( *(_QWORD *)(v16 + 80) > 0x80uLL )
        goto LABEL_42;
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v66, L"sc-");
      v60 = 0LL;
      v64[0] = 0LL;
      if ( *(_QWORD *)(v16 + 56) < 8uLL )
        v17 = (const WCHAR *)(v16 + 32);
      else
        v17 = *v11;
      v61 = v17;
      v18 = v59;
      v19 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, &v61);
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v18 + 56LL))(v18, *v19, &v60);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x3A5,
          (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
          (const char *)(unsigned int)v20);
LABEL_42:
        v33 = (Windows::Internal::StringReference *)Windows::Internal::StringReference::StringReference(
                                                      &string,
                                                      (const unsigned __int16 (*)[59])v14);
        v34 = Windows::Internal::StringReference::Get(v33);
        RoOriginateError(2147942487LL, v34);
        v35 = wil::verify_hresult<long>(0x80070057);
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x39E,
          (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
          (const char *)v35);
        __debugbreak();
      }
      v21 = (const WCHAR *)(v16 + 64);
      if ( *(_QWORD *)(v16 + 88) >= 8uLL )
        v21 = *(const WCHAR **)v21;
      v61 = v21;
      v22 = v59;
      v23 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, &v61);
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v22 + 56LL))(v22, *v23, v64);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x3A6,
          (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
          (const char *)(unsigned int)v24);
        __debugbreak();
      }
      StringRawBuffer = WindowsGetStringRawBuffer(v64[0], 0LL);
      v26 = WindowsGetStringRawBuffer(v60, 0LL);
      v27 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v66, v26);
      v28 = std::operator<<<unsigned short,std::char_traits<unsigned short>>(v27, L"=");
      std::operator<<<unsigned short,std::char_traits<unsigned short>>(v28, StringRawBuffer);
      v29 = (unsigned __int64)a2[1] - 1;
      v30 = v62;
      v62 = (HSTRING)((char *)v62 + 1);
      if ( (unsigned __int64)v30 < v29 )
        std::operator<<<unsigned short,std::char_traits<unsigned short>>(v66, L"&");
      if ( v64[0] )
        WindowsDeleteString(v64[0]);
      if ( v60 )
        WindowsDeleteString(v60);
      if ( !*(_BYTE *)(v16 + 25) )
      {
        v31 = *(__int64 **)(v16 + 16);
        if ( *((_BYTE *)v31 + 25) )
        {
          for ( i = *(_QWORD *)(v16 + 8); !*(_BYTE *)(i + 25) && v16 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
            v16 = i;
          v16 = i;
        }
        else
        {
          do
          {
            v16 = (__int64)v31;
            v31 = (__int64 *)*v31;
          }
          while ( !*((_BYTE *)v31 + 25) );
        }
      }
      if ( (__int64 *)v16 == v15 )
      {
        LOBYTE(v11) = v57;
        goto LABEL_45;
      }
    }
    v39 = (Windows::Internal::StringReference *)Windows::Internal::StringReference::StringReference(
                                                  &string,
                                                  L"Cloud Query parameter names cannot be empty.");
    v40 = Windows::Internal::StringReference::Get(v39);
    RoOriginateError(2147942487LL, v40);
    v41 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39C,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)v41);
  }
LABEL_45:
  v61 = 0LL;
  string = 0LL;
  *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
  v42 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
          (__int64)&string,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          this);
  if ( v42 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v42);
    __debugbreak();
  }
  v43 = (WCHAR *)string;
  v61 = (const WCHAR *)string;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::str(v65, v70);
  if ( a2[1] )
  {
    lpData = v70;
    if ( v72 >= 8 )
      lpData = (LPCVOID *)v70[0];
    v46 = RegSetKeyValueW(HKEY_CURRENT_USER, v43, L"SubscriptionContext", 1u, lpData, 2 * v71 + 2);
    if ( v46 )
      v48 = wil::details::in1diag3::Return_Win32Msg(
              retaddr,
              (void *)0xCA,
              (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
              (const char *)v46,
              (__int64)"RegKey: %ws %ws",
              (const char *)v43,
              L"SubscriptionContext");
    else
      v48 = 0;
    if ( v48 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3BE,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v48);
      __debugbreak();
    }
  }
  else
  {
    v49 = CreativeFramework::ContentDeliveryManagerSettings::DeleteSetting(v43, L"SubscriptionContext", v44);
    if ( v49 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3C4,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v49);
      __debugbreak();
    }
  }
  if ( v56 )
  {
    v62 = 0LL;
    string = 0LL;
    *(_OWORD *)&hstringHeader.Reserved.Reserved1 = 0uLL;
    v50 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)&string,
            L"%s\\%s",
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
            this);
    if ( v50 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v50);
      __debugbreak();
    }
    v51 = (WCHAR *)string;
    v62 = string;
    GetSystemTimeAsFileTime((LPFILETIME)&v60);
    v53 = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
            v51,
            L"AccelerateCacheRefreshLastDetected",
            (unsigned __int64)v60,
            v52);
    if ( v53 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
        (const char *)(unsigned int)v53);
    if ( v51 )
      CoTaskMemFree(v51);
  }
  CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed(this, v47);
  if ( !(_BYTE)v11 )
    *a3 |= 1u;
  if ( v56 )
    *a3 |= 2u;
  if ( v72 >= 8 )
    operator delete((void *)v70[0]);
  v72 = 7LL;
  v71 = 0LL;
  LOWORD(v70[0]) = 0;
  if ( v43 )
    CoTaskMemFree(v43);
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(v67);
  v67[0] = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)v67);
  v54 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  }
  v55 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v55)[2])(v55);
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Erase(
    v63,
    v63[0][1]);
  *((__int64 ***)v63[0] + 1) = v63[0];
  *v63[0] = (__int64 *)v63[0];
  *((__int64 ***)v63[0] + 2) = v63[0];
  v63[1] = 0LL;
  operator delete(v63[0]);
}
