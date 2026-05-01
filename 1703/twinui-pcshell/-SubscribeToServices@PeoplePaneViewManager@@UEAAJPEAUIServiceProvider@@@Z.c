/*
 * XREFs of ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PeoplePaneViewManager::SubscribeToServices(PeoplePaneViewManager *this, struct IServiceProvider *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v9; // rax
  int v10; // eax
  HRESULT v11; // eax
  __int64 v12; // rbx
  struct IUnknown **v13; // rsi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  HRESULT v17; // eax
  __int64 v18; // rbx
  struct IUnknown **v19; // rsi
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  HRESULT v23; // eax
  __int64 v24; // rbx
  struct IUnknown **v25; // rsi
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v35[2]; // [rsp+40h] [rbp-41h] BYREF
  HSTRING_HEADER v36; // [rsp+50h] [rbp-31h] BYREF
  HSTRING v37; // [rsp+68h] [rbp-19h] BYREF
  HSTRING_HEADER v38; // [rsp+70h] [rbp-11h] BYREF
  HSTRING v39; // [rsp+88h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v35[1] = -2LL;
  v4 = (_QWORD *)((char *)this + 144);
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_b644fe9d_3090_4a41_9f18_465a5f445272,
         v4);
  if ( v6 < 0 )
  {
    v7 = 59LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v4 + 88LL))(
         *v4,
         ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64),
         (char *)this + 152);
  if ( v6 < 0 )
  {
    v7 = 60LL;
    goto LABEL_5;
  }
  v34 = 0LL;
  lpVtbl = a2->lpVtbl;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v34);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
          &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
          v9);
  v6 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3F,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_48;
  }
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"Windows.Internal.ShellExperience.PeopleBarFlyout",
          0x30u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
  v12 = v34;
  v13 = (struct IUnknown **)((char *)this + 216);
  v14 = *((_QWORD *)this + 27);
  if ( v14 )
  {
    *v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v12 + 48LL))(v12, string, (char *)this + 216);
  v6 = v15;
  if ( v15 >= 0 )
  {
    v15 = CMarshaledInterface::Marshal((__int64 *)this + 28, &GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c, *v13, 2);
    v6 = v15;
    if ( v15 < 0 )
    {
      v16 = 67LL;
      goto LABEL_18;
    }
    v39 = 0LL;
    v17 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.PeopleBarJumpView", 0x32u, &v38, &v39);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    v18 = v34;
    v19 = (struct IUnknown **)((char *)this + 232);
    v20 = *((_QWORD *)this + 29);
    if ( v20 )
    {
      *v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v18 + 48LL))(v18, v39, (char *)this + 232);
    v6 = v21;
    if ( v21 < 0 )
    {
      v22 = 70LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v22,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v21);
LABEL_46:
      v39 = 0LL;
      goto LABEL_47;
    }
    v21 = CMarshaledInterface::Marshal((__int64 *)this + 30, &GUID_ab65b025_ff88_470a_9513_b62bcd7ce879, *v19, 2);
    v6 = v21;
    if ( v21 < 0 )
    {
      v22 = 71LL;
      goto LABEL_27;
    }
    v37 = 0LL;
    v23 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ShoulderTap", 0x2Cu, &v36, &v37);
    if ( v23 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    v24 = v34;
    v25 = (struct IUnknown **)((char *)this + 248);
    v26 = *((_QWORD *)this + 31);
    if ( v26 )
    {
      *v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v24 + 48LL))(v24, v37, (char *)this + 248);
    v6 = v27;
    if ( v27 < 0 )
    {
      v28 = 74LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v28,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v27);
LABEL_45:
      v37 = 0LL;
      goto LABEL_46;
    }
    v27 = CMarshaledInterface::Marshal((__int64 *)this + 32, &GUID_8667db0d_6960_465f_b9a4_c461863efa91, *v25, 2);
    v6 = v27;
    if ( v27 < 0 )
    {
      v28 = 75LL;
      goto LABEL_36;
    }
    v35[0] = 0LL;
    v29 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, _QWORD *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
            &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
            v35);
    v6 = v29;
    if ( v29 >= 0 )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD, const WCHAR *, __int64))(*(_QWORD *)v35[0] + 64LL))(
              v35[0],
              L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
              0x28800000168LL);
      v6 = v29;
      if ( v29 >= 0 )
      {
        v6 = 0;
LABEL_43:
        v31 = v35[0];
        if ( v35[0] )
        {
          v35[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        goto LABEL_45;
      }
      v30 = 80LL;
    }
    else
    {
      v30 = 79LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v30,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_43;
  }
  v16 = 66LL;
LABEL_18:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v15);
LABEL_47:
  string = 0LL;
LABEL_48:
  v32 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return (unsigned int)v6;
}
