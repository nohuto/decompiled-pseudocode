/*
 * XREFs of ?SubscribeToServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801102B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x180046FCC (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@SmartCookie@@QEAAJPEAUITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAVPeoplePaneViewManager@@@Z @ 0x1801169BC (--$Register@UITabletModeController@@P81@EAAJPEAUITabletModeChangeListener@@PEAK@ZP81@EAAJK@ZPEAV.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall PeoplePaneViewManager::SubscribeToServices(PeoplePaneViewManager *this, struct IServiceProvider *a2)
{
  __int64 *v4; // rdi
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  _QWORD *v10; // r14
  int v11; // edi
  int v12; // eax
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rdx
  _QWORD *v15; // rcx
  struct IServiceProviderVtbl *v17; // rbx
  __int64 *v18; // rax
  int v19; // eax
  HRESULT v20; // eax
  __int64 v21; // rbx
  struct IUnknown **v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  HRESULT v26; // eax
  __int64 v27; // rbx
  struct IUnknown **v28; // rdi
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  HRESULT v32; // eax
  __int64 v33; // rbx
  struct IUnknown **v34; // rdi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  struct IServiceProviderVtbl *v40; // rbx
  __int64 *v41; // rax
  _QWORD *v42; // rdi
  __int64 v43; // rcx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // [rsp+38h] [rbp-79h] BYREF
  __int64 v49; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v50[4]; // [rsp+48h] [rbp-69h] BYREF
  HSTRING_HEADER v51; // [rsp+68h] [rbp-49h] BYREF
  HSTRING v52; // [rsp+80h] [rbp-31h] BYREF
  HSTRING_HEADER v53; // [rsp+88h] [rbp-29h] BYREF
  HSTRING v54; // [rsp+A0h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp-9h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v50[2] = -2LL;
  v4 = (__int64 *)((char *)this + 312);
  lpVtbl = a2->lpVtbl;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 39);
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
         a2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v9 = *v4;
    v10 = (_QWORD *)((char *)this + 320);
    if ( *((_DWORD *)this + 108) )
    {
      v11 = -2147019873;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
        (const char *)0x8007139FLL);
LABEL_21:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x74,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v11);
      return (unsigned int)v11;
    }
    v12 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}(*v4);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v50[3] = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v13 = v9;
      v50[0] = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v14 =  IApplicationViewCollection::`vcall'{96,{flat}};
      v50[1] =  IApplicationViewCollection::`vcall'{96,{flat}};
      v15 = (_QWORD *)*((_QWORD *)this + 53);
      if ( v15 )
      {
        LOBYTE(v14) = v15 != v10;
        (*(void (__fastcall **)(_QWORD *, __int64 (__fastcall *)(__int64)))(*v15 + 24LL))(v15, v14);
        *((_QWORD *)this + 53) = 0LL;
      }
      *v10 = off_180209908;
      *((_QWORD *)this + 41) = 0LL;
      if ( (_QWORD *)((char *)this + 328) != v50 )
      {
        *((_QWORD *)this + 41) = v9;
        v13 = 0LL;
      }
      *((_QWORD *)this + 42) =  IApplicationViewCollection::`vcall'{96,{flat}};
      *((_QWORD *)this + 53) = (char *)this + 320;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x29,
        (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
        (const char *)(unsigned int)v12);
    }
    if ( v11 < 0 )
      goto LABEL_21;
    v48 = 0LL;
    v17 = a2->lpVtbl;
    v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v48);
    v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v17->QueryService)(
            a2,
            &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
            &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
            v18);
    v8 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x77,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_72;
    }
    string = 0LL;
    v20 = WindowsCreateStringReference(
            L"Windows.Internal.ShellExperience.PeopleBarFlyout",
            0x30u,
            &hstringHeader,
            &string);
    if ( v20 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
    v21 = v48;
    v22 = (struct IUnknown **)((char *)this + 488);
    v23 = *((_QWORD *)this + 61);
    if ( v23 )
    {
      *v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v21 + 48LL))(v21, string, (char *)this + 488);
    v8 = v24;
    if ( v24 < 0 )
    {
      v25 = 122LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v25,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v24);
LABEL_71:
      string = 0LL;
LABEL_72:
      v47 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      return v8;
    }
    v24 = CMarshaledInterface::Marshal((__int64 *)this + 62, &GUID_1b7781cd_1b97_4728_8b6e_67a7e55cc53c, *v22, 2);
    v8 = v24;
    if ( v24 < 0 )
    {
      v25 = 123LL;
      goto LABEL_32;
    }
    v54 = 0LL;
    v26 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.PeopleBarJumpView", 0x32u, &v53, &v54);
    if ( v26 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    v27 = v48;
    v28 = (struct IUnknown **)((char *)this + 504);
    v29 = *((_QWORD *)this + 63);
    if ( v29 )
    {
      *v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v27 + 48LL))(v27, v54, (char *)this + 504);
    v8 = v30;
    if ( v30 < 0 )
    {
      v31 = 126LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v31,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v30);
LABEL_70:
      v54 = 0LL;
      goto LABEL_71;
    }
    v30 = CMarshaledInterface::Marshal((__int64 *)this + 64, &GUID_ab65b025_ff88_470a_9513_b62bcd7ce879, *v28, 2);
    v8 = v30;
    if ( v30 < 0 )
    {
      v31 = 127LL;
      goto LABEL_41;
    }
    v52 = 0LL;
    v32 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ShoulderTap", 0x2Cu, &v51, &v52);
    if ( v32 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v32);
    v33 = v48;
    v34 = (struct IUnknown **)((char *)this + 520);
    v35 = *((_QWORD *)this + 65);
    if ( v35 )
    {
      *v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, HSTRING, char *))(*(_QWORD *)v33 + 48LL))(v33, v52, (char *)this + 520);
    v8 = v36;
    if ( v36 < 0 )
    {
      v37 = 130LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v37,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v36);
LABEL_69:
      v52 = 0LL;
      goto LABEL_70;
    }
    v36 = CMarshaledInterface::Marshal((__int64 *)this + 66, &GUID_8667db0d_6960_465f_b9a4_c461863efa91, *v34, 2);
    v8 = v36;
    if ( v36 < 0 )
    {
      v37 = 131LL;
      goto LABEL_50;
    }
    v49 = 0LL;
    v38 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
            &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
            &v49);
    v8 = v38;
    if ( v38 >= 0 )
    {
      v38 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, __int64))(*(_QWORD *)v49 + 64LL))(
              v49,
              L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
              0x28800000168LL);
      v8 = v38;
      if ( v38 >= 0 )
      {
        v40 = a2->lpVtbl;
        v41 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 21);
        v38 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v40->QueryService)(
                a2,
                &SID_IImmersiveMonitorService,
                &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
                v41);
        v8 = v38;
        if ( v38 >= 0 )
        {
          v42 = (_QWORD *)((char *)this + 176);
          v43 = *((_QWORD *)this + 22);
          if ( v43 )
          {
            *v42 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          }
          v38 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                  a2,
                  &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                  &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
                  (char *)this + 176);
          v8 = v38;
          if ( v38 >= 0 )
          {
            v38 = SmartCookie::Register<ITabletModeController,long (ITabletModeController::*)(ITabletModeChangeListener *,unsigned long *),long (ITabletModeController::*)(unsigned long),PeoplePaneViewManager *>(
                    (int)this + 192,
                    *v42,
                    v44,
                    v45,
                    (__int64)this - 24);
            v8 = v38;
            if ( v38 >= 0 )
            {
              v38 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v42 + 24LL))(*v42, (char *)this + 184);
              v8 = v38;
              if ( v38 >= 0 )
              {
                v8 = 0;
LABEL_67:
                v46 = v49;
                if ( v49 )
                {
                  v49 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                }
                goto LABEL_69;
              }
              v39 = 145LL;
            }
            else
            {
              v39 = 144LL;
            }
          }
          else
          {
            v39 = 140LL;
          }
        }
        else
        {
          v39 = 138LL;
        }
      }
      else
      {
        v39 = 136LL;
      }
    }
    else
    {
      v39 = 135LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v39,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v38);
    goto LABEL_67;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x70,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
