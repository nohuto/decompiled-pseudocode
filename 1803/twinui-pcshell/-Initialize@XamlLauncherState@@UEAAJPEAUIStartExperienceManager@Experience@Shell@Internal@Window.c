/*
 * XREFs of ?Initialize@XamlLauncherState@@UEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaExperienceManager@3456@PEAUIRealmActivationHistory@@PEAUIXamlLauncherStateCallback@@@Z @ 0x18022E510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180225908 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVCortanaExper.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180225950 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180225950.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180225998 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVStartExperie.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__int_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_ @ 0x18022DAA4 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18022DAA4.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__int_::_)(Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int)___ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_ @ 0x18022DB14 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18022DB14.c)
 *     ?PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ @ 0x1802307A8 (-PrepareStartReadinessListener@XamlLauncherState@@AEAAXXZ.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     GetAssignedAccessTypeForUser @ 0x18030AC44 (GetAssignedAccessTypeForUser.c)
 *     GetSidStringFromToken @ 0x18030AD3C (GetSidStringFromToken.c)
 *     ?_Free@?$NativeString@V?$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18030AE58 (-_Free@-$NativeString@V-$LocalMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall XamlLauncherState::Initialize(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a3,
        struct IRealmActivationHistory *a4,
        struct IXamlLauncherStateCallback *a5)
{
  struct Windows::Internal::Shell::Experience::IStartExperienceManager *v8; // rax
  _OWORD *v9; // r13
  _QWORD *v10; // r12
  struct IRealmActivationHistory *v11; // rax
  bool v12; // bl
  __int64 v13; // rcx
  WCHAR *v14; // rsi
  _OWORD *v15; // rax
  _OWORD *v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  _OWORD *v19; // rdi
  _OWORD *v20; // rax
  _OWORD *v21; // rbx
  int v22; // eax
  _OWORD *v23; // rsi
  _OWORD *v24; // rax
  _OWORD *v25; // rbx
  int v26; // eax
  _OWORD *v27; // rdi
  _OWORD *v28; // rax
  _OWORD *v29; // rbx
  int v30; // eax
  _OWORD *v31; // rsi
  _OWORD *v32; // rax
  _OWORD *v33; // rbx
  int v34; // eax
  __int64 v35; // rdi
  void *v36; // rax
  int v37; // eax
  _OWORD *v38; // rsi
  _OWORD *v39; // rax
  _OWORD *v40; // rbx
  int v41; // eax
  _OWORD *v42; // rdi
  _OWORD *v43; // rax
  _OWORD *v44; // rbx
  int v45; // eax
  __int64 v46; // rsi
  void *v47; // rax
  __int64 v48; // rbx
  int v49; // eax
  struct IXamlLauncherStateCallback *v50; // rdi
  _OWORD *v51; // rax
  _OWORD *v52; // rbx
  int v53; // eax
  _OWORD *v54; // rax
  _OWORD *v55; // rbx
  int v56; // eax
  _OWORD *v57; // r12
  _OWORD *v58; // rax
  _OWORD *v59; // rbx
  int v60; // eax
  _OWORD *v61; // r15
  _OWORD *v62; // rax
  _OWORD *v63; // rbx
  int v64; // eax
  __int64 v65; // rsi
  void *v66; // rax
  int v67; // eax
  _OWORD *v68; // rdi
  _OWORD *v69; // rax
  _OWORD *v70; // rbx
  int v71; // eax
  _OWORD *v72; // r14
  _OWORD *v73; // rbx
  int v74; // eax
  _OWORD *v75; // rax
  int v77[2]; // [rsp+28h] [rbp-E0h]
  __int64 v78; // [rsp+30h] [rbp-D8h]
  _OWORD *v79; // [rsp+38h] [rbp-D0h]
  _OWORD *v80; // [rsp+40h] [rbp-C8h]
  _OWORD *v81; // [rsp+48h] [rbp-C0h]
  _OWORD *v82; // [rsp+50h] [rbp-B8h]
  WCHAR *StringSid; // [rsp+58h] [rbp-B0h]
  LPWSTR StringSid_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+70h] [rbp-98h]
  _BYTE v86[24]; // [rsp+78h] [rbp-90h] BYREF
  _OWORD *v87; // [rsp+90h] [rbp-78h]
  _OWORD *v88; // [rsp+98h] [rbp-70h]
  _BYTE v89[24]; // [rsp+A0h] [rbp-68h]
  _BYTE v90[24]; // [rsp+B8h] [rbp-50h]
  _BYTE v91[24]; // [rsp+D0h] [rbp-38h]
  _BYTE v92[24]; // [rsp+E8h] [rbp-20h]
  _BYTE v93[24]; // [rsp+100h] [rbp-8h]
  _BYTE v94[24]; // [rsp+118h] [rbp+10h]
  _BYTE v95[24]; // [rsp+130h] [rbp+28h]
  _BYTE v96[24]; // [rsp+148h] [rbp+40h]
  _BYTE v97[24]; // [rsp+160h] [rbp+58h]
  _BYTE v98[24]; // [rsp+178h] [rbp+70h]
  _BYTE v99[24]; // [rsp+190h] [rbp+88h]
  _BYTE v100[24]; // [rsp+1A8h] [rbp+A0h]
  __int128 v101; // [rsp+1C0h] [rbp+B8h]
  __int128 v102; // [rsp+1D0h] [rbp+C8h]
  __int128 v103; // [rsp+1E0h] [rbp+D8h]
  _QWORD *v104; // [rsp+1F0h] [rbp+E8h]
  _BYTE v105[24]; // [rsp+1F8h] [rbp+F0h]
  __int64 v106; // [rsp+210h] [rbp+108h]
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]
  __int64 v109; // [rsp+260h] [rbp+158h] BYREF
  _OWORD *v110; // [rsp+270h] [rbp+168h]

  v106 = -2LL;
  *((_DWORD *)this + 240) = GetCurrentThreadId();
  v8 = (struct Windows::Internal::Shell::Experience::IStartExperienceManager *)*((_QWORD *)this + 7);
  v9 = 0LL;
  if ( v8 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IStartExperienceManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = (struct Windows::Internal::Shell::Experience::IStartExperienceManager *)*((_QWORD *)this + 7);
    }
    v109 = (__int64)v8;
    *((_QWORD *)this + 7) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v109);
  }
  v10 = (_QWORD *)((char *)this + 64);
  v104 = (_QWORD *)((char *)this + 64);
  Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=((char *)this + 64);
  v11 = (struct IRealmActivationHistory *)*((_QWORD *)this + 9);
  if ( v11 != a4 )
  {
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IRealmActivationHistory *))(*(_QWORD *)a4 + 8LL))(a4);
      v11 = (struct IRealmActivationHistory *)*((_QWORD *)this + 9);
    }
    v109 = (__int64)v11;
    *((_QWORD *)this + 9) = a4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v109);
  }
  *((_QWORD *)this + 13) = a5;
  *(_OWORD *)StringSid_8 = 0uLL;
  v85 = 0LL;
  v12 = (int)GetSidStringFromToken((HANDLE)0xFFFFFFFFFFFFFFFCLL, StringSid_8) >= 0
     && (unsigned int)GetAssignedAccessTypeForUser(StringSid_8[0], 0LL) == 2;
  Windows::Internal::NativeString<Windows::Internal::LocalMemPolicy<unsigned short>>::_Free(StringSid_8);
  *((_BYTE *)this + 938) = v12;
  v13 = *((_QWORD *)this + 122);
  if ( v13 )
    Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(v13 + 16);
  StringSid_8[0] = (LPWSTR)XamlLauncherState::OnStartShown;
  LODWORD(StringSid_8[1]) = 0;
  *(_QWORD *)v105 = (char *)this - 24;
  *(_OWORD *)&v105[8] = *(_OWORD *)StringSid_8;
  v14 = 0LL;
  StringSid = 0LL;
  v15 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v15);
    v16[1] = *(_OWORD *)v105;
    *((_QWORD *)v16 + 4) = *(_QWORD *)&v105[16];
    *(_QWORD *)v16 = off_180337E88;
    v14 = (WCHAR *)v16;
    StringSid = (WCHAR *)v16;
  }
  StringSid_8[0] = v14;
  v17 = (*(__int64 (__fastcall **)(_QWORD, WCHAR *, char *))(**((_QWORD **)this + 7) + 152LL))(
          *((_QWORD *)this + 7),
          v14,
          (char *)this + 112);
  v18 = v17;
  if ( v17 >= 0 )
  {
    *(_QWORD *)&v103 = XamlLauncherState::OnStartHidden;
    DWORD2(v103) = 0;
    *(_QWORD *)v100 = (char *)this - 24;
    *(_OWORD *)&v100[8] = v103;
    v19 = 0LL;
    v82 = 0LL;
    v20 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v21 = v20;
    if ( v20 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v20);
      v21[1] = *(_OWORD *)v100;
      *((_QWORD *)v21 + 4) = *(_QWORD *)&v100[16];
      *(_QWORD *)v21 = off_180337E88;
      v19 = v21;
      v82 = v21;
    }
    *(_QWORD *)&v103 = v19;
    v22 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 168LL))(
            *((_QWORD *)this + 7),
            v19,
            (char *)this + 120);
    v18 = v22;
    if ( v22 >= 0 )
    {
      *(_QWORD *)v100 = XamlLauncherState::OnStartDestroyed;
      *(_DWORD *)&v100[8] = 0;
      *(_QWORD *)v99 = (char *)this - 24;
      *(_OWORD *)&v99[8] = *(_OWORD *)v100;
      v23 = 0LL;
      v81 = 0LL;
      v24 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v25 = v24;
      if ( v24 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v24);
        v25[1] = *(_OWORD *)v99;
        *((_QWORD *)v25 + 4) = *(_QWORD *)&v99[16];
        *(_QWORD *)v25 = off_180337E88;
        v23 = v25;
        v81 = v25;
      }
      *(_QWORD *)v100 = v23;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 184LL))(
              *((_QWORD *)this + 7),
              v23,
              (char *)this + 128);
      v18 = v26;
      if ( v26 >= 0 )
      {
        *(_QWORD *)v99 = XamlLauncherState::OnStartExitTransitionToCortanaCompleted;
        *(_DWORD *)&v99[8] = 0;
        *(_QWORD *)v98 = (char *)this - 24;
        *(_OWORD *)&v98[8] = *(_OWORD *)v99;
        v27 = 0LL;
        v80 = 0LL;
        v28 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
        v29 = v28;
        if ( v28 )
        {
          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v28);
          v29[1] = *(_OWORD *)v98;
          *((_QWORD *)v29 + 4) = *(_QWORD *)&v98[16];
          *(_QWORD *)v29 = off_180337E88;
          v27 = v29;
          v80 = v29;
        }
        *(_QWORD *)v99 = v27;
        v30 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 232LL))(
                *((_QWORD *)this + 7),
                v27,
                (char *)this + 136);
        v18 = v30;
        if ( v30 >= 0 )
        {
          *(_QWORD *)v98 = XamlLauncherState::OnStartFailedToGetForeground;
          *(_DWORD *)&v98[8] = 0;
          *(_QWORD *)v97 = (char *)this - 24;
          *(_OWORD *)&v97[8] = *(_OWORD *)v98;
          v31 = 0LL;
          v79 = 0LL;
          v32 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
          v33 = v32;
          if ( v32 )
          {
            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v32);
            v33[1] = *(_OWORD *)v97;
            *((_QWORD *)v33 + 4) = *(_QWORD *)&v97[16];
            *(_QWORD *)v33 = off_180337E88;
            v31 = v33;
            v79 = v33;
          }
          *(_QWORD *)v98 = v31;
          v34 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 7) + 248LL))(
                  *((_QWORD *)this + 7),
                  v31,
                  (char *)this + 144);
          v18 = v34;
          if ( v34 >= 0 )
          {
            *(_QWORD *)v97 = XamlLauncherState::OnStartLaunchResult;
            *(_DWORD *)&v97[8] = 0;
            *(_QWORD *)v86 = (char *)this - 24;
            *(_OWORD *)&v86[8] = *(_OWORD *)v97;
            v35 = 0LL;
            v78 = 0LL;
            v36 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
            if ( v36 )
            {
              v35 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64__int_::___Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___lambda_45ebc5fdfd3fffb3a2a5510fb3e74b21___1_Windows::Internal::Shell::Experience::IStartExperienceManager_____ptr64_int_(
                      (__int64)v36,
                      (__int64)v86);
              v78 = v35;
            }
            *(_QWORD *)v97 = v35;
            v37 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 7) + 264LL))(
                    *((_QWORD *)this + 7),
                    v35,
                    (char *)this + 152);
            v18 = v37;
            if ( v37 >= 0 )
            {
              *(_QWORD *)&v102 = XamlLauncherState::OnCortanaShown;
              DWORD2(v102) = 0;
              *(_QWORD *)v96 = (char *)this - 24;
              *(_OWORD *)&v96[8] = v102;
              v38 = 0LL;
              *(_QWORD *)v77 = 0LL;
              v39 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
              v40 = v39;
              if ( v39 )
              {
                Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>>((__int64)v39);
                v40[1] = *(_OWORD *)v96;
                *((_QWORD *)v40 + 4) = *(_QWORD *)&v96[16];
                *(_QWORD *)v40 = off_180337DE8;
                v38 = v40;
                *(_QWORD *)v77 = v40;
              }
              *(_QWORD *)&v102 = v38;
              v41 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v10 + 168LL))(
                      *v10,
                      v38,
                      (char *)this + 160);
              v18 = v41;
              if ( v41 >= 0 )
              {
                *(_QWORD *)v96 = XamlLauncherState::OnCortanaHidden;
                *(_DWORD *)&v96[8] = 0;
                *(_QWORD *)v95 = (char *)this - 24;
                *(_OWORD *)&v95[8] = *(_OWORD *)v96;
                v42 = 0LL;
                v110 = 0LL;
                v43 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                v44 = v43;
                if ( v43 )
                {
                  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v43);
                  v44[1] = *(_OWORD *)v95;
                  *((_QWORD *)v44 + 4) = *(_QWORD *)&v95[16];
                  *(_QWORD *)v44 = off_180337E10;
                  v42 = v44;
                  v110 = v44;
                }
                *(_QWORD *)v96 = v42;
                v45 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v10 + 184LL))(
                        *v10,
                        v42,
                        (char *)this + 168);
                v18 = v45;
                if ( v45 >= 0 )
                {
                  *(_QWORD *)v95 = XamlLauncherState::OnCortanaDestroyed;
                  *(_DWORD *)&v95[8] = 0;
                  *(_QWORD *)v94 = (char *)this - 24;
                  *(_OWORD *)&v94[8] = *(_OWORD *)v95;
                  v46 = 0LL;
                  v109 = 0LL;
                  v47 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                  v48 = (__int64)v47;
                  if ( v47 )
                  {
                    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v47);
                    *(_OWORD *)(v48 + 16) = *(_OWORD *)v94;
                    *(_QWORD *)(v48 + 32) = *(_QWORD *)&v94[16];
                    *(_QWORD *)v48 = off_180337E10;
                    v46 = v48;
                    v109 = v48;
                  }
                  *(_QWORD *)v95 = v46;
                  v49 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v10 + 200LL))(
                          *v10,
                          v46,
                          (char *)this + 176);
                  v18 = v49;
                  if ( v49 >= 0 )
                  {
                    *(_QWORD *)v94 = XamlLauncherState::OnCortanaDismissRequested;
                    *(_DWORD *)&v94[8] = 0;
                    *(_QWORD *)v93 = (char *)this - 24;
                    *(_OWORD *)&v93[8] = *(_OWORD *)v94;
                    v50 = 0LL;
                    a5 = 0LL;
                    v51 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                    v52 = v51;
                    if ( v51 )
                    {
                      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v51);
                      v52[1] = *(_OWORD *)v93;
                      *((_QWORD *)v52 + 4) = *(_QWORD *)&v93[16];
                      *(_QWORD *)v52 = off_180337E10;
                      v50 = (struct IXamlLauncherStateCallback *)v52;
                      a5 = (struct IXamlLauncherStateCallback *)v52;
                    }
                    *(_QWORD *)v94 = v50;
                    v53 = (*(__int64 (__fastcall **)(_QWORD, struct IXamlLauncherStateCallback *, char *))(*(_QWORD *)*v10 + 296LL))(
                            *v10,
                            v50,
                            (char *)this + 184);
                    v18 = v53;
                    if ( v53 >= 0 )
                    {
                      *(_QWORD *)v93 = XamlLauncherState::OnCortanaFailedToGetForeground;
                      *(_DWORD *)&v93[8] = 0;
                      *(_QWORD *)v92 = (char *)this - 24;
                      *(_OWORD *)&v92[8] = *(_OWORD *)v93;
                      v54 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                      v55 = v54;
                      if ( v54 )
                      {
                        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v54);
                        v55[1] = *(_OWORD *)v92;
                        *((_QWORD *)v55 + 4) = *(_QWORD *)&v92[16];
                        *(_QWORD *)v55 = off_180337E10;
                        v9 = v55;
                      }
                      *(_QWORD *)v93 = v9;
                      v56 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v10 + 248LL))(
                              *v10,
                              v9,
                              (char *)this + 192);
                      v18 = v56;
                      if ( v56 >= 0 )
                      {
                        *(_QWORD *)v92 = XamlLauncherState::OnCortanaTransitionRequested;
                        *(_DWORD *)&v92[8] = 0;
                        *(_QWORD *)v91 = (char *)this - 24;
                        *(_OWORD *)&v91[8] = *(_OWORD *)v92;
                        v57 = 0LL;
                        v58 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                        v59 = v58;
                        if ( v58 )
                        {
                          Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v58);
                          v59[1] = *(_OWORD *)v91;
                          *((_QWORD *)v59 + 4) = *(_QWORD *)&v91[16];
                          *(_QWORD *)v59 = off_180337E10;
                          v57 = v59;
                        }
                        *(_QWORD *)v92 = v57;
                        v60 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 8) + 312LL))(
                                *((_QWORD *)this + 8),
                                v57,
                                (char *)this + 200);
                        v18 = v60;
                        if ( v60 >= 0 )
                        {
                          *(_QWORD *)v91 = XamlLauncherState::OnCortanaAppTransitionCompleted;
                          *(_DWORD *)&v91[8] = 0;
                          *(_QWORD *)v90 = (char *)this - 24;
                          *(_OWORD *)&v90[8] = *(_OWORD *)v91;
                          v61 = 0LL;
                          v62 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                          v63 = v62;
                          if ( v62 )
                          {
                            Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v62);
                            v63[1] = *(_OWORD *)v90;
                            *((_QWORD *)v63 + 4) = *(_QWORD *)&v90[16];
                            *(_QWORD *)v63 = off_180337E10;
                            v61 = v63;
                          }
                          *(_QWORD *)v91 = v61;
                          v64 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 8) + 328LL))(
                                  *((_QWORD *)this + 8),
                                  v61,
                                  (char *)this + 208);
                          v18 = v64;
                          if ( v64 >= 0 )
                          {
                            *(_QWORD *)v90 = XamlLauncherState::OnCortanaLaunchResult;
                            *(_DWORD *)&v90[8] = 0;
                            *(_QWORD *)v86 = (char *)this - 24;
                            *(_OWORD *)&v86[8] = *(_OWORD *)v90;
                            v65 = 0LL;
                            v66 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                            if ( v66 )
                              v65 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64__int_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int____ptr64_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_int___lambda_14e0adc8846f5ed94b2411cfa8a62754___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager_____ptr64_int_(
                                      (__int64)v66,
                                      (__int64)v86);
                            *(_QWORD *)v90 = v65;
                            v67 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 8) + 344LL))(
                                    *((_QWORD *)this + 8),
                                    v65,
                                    (char *)this + 216);
                            v18 = v67;
                            if ( v67 >= 0 )
                            {
                              *(_QWORD *)&v101 = XamlLauncherState::OnCortanaDeviceLocked;
                              DWORD2(v101) = 0;
                              *(_QWORD *)v89 = (char *)this - 24;
                              *(_OWORD *)&v89[8] = v101;
                              v68 = 0LL;
                              v69 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                              v70 = v69;
                              if ( v69 )
                              {
                                Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v69);
                                v70[1] = *(_OWORD *)v89;
                                *((_QWORD *)v70 + 4) = *(_QWORD *)&v89[16];
                                *(_QWORD *)v70 = off_180337E10;
                                v68 = v70;
                              }
                              *(_QWORD *)&v101 = v68;
                              v71 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(**((_QWORD **)this + 8) + 360LL))(
                                      *((_QWORD *)this + 8),
                                      v68,
                                      (char *)this + 224);
                              v18 = v71;
                              if ( v71 >= 0 )
                              {
                                *(_QWORD *)v89 = XamlLauncherState::OnCortanaDeviceUnlocked;
                                *(_DWORD *)&v89[8] = 0;
                                *(_QWORD *)v86 = (char *)this - 24;
                                *(_OWORD *)&v86[8] = *(_OWORD *)v89;
                                v72 = 0LL;
                                v73 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
                                v87 = 0LL;
                                v88 = 0LL;
                                if ( v73 )
                                {
                                  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>>((__int64)v73);
                                  v73[1] = *(_OWORD *)v86;
                                  *((_QWORD *)v73 + 4) = *(_QWORD *)&v86[16];
                                  *(_QWORD *)v73 = off_180337E10;
                                  v72 = v73;
                                  v87 = v73;
                                  v88 = v73;
                                }
                                *(_QWORD *)v89 = v72;
                                v74 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, char *))(*(_QWORD *)*v104 + 376LL))(
                                        *v104,
                                        v72,
                                        (char *)this + 232);
                                v18 = v74;
                                if ( v74 >= 0 )
                                {
                                  XamlLauncherState::PrepareStartReadinessListener(*(XamlLauncherState **)v105);
                                  v18 = 0;
                                  v75 = v88;
                                }
                                else
                                {
                                  wil::details::in1diag3::Return_Hr(
                                    retaddr,
                                    (void *)0x66,
                                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                    (const char *)(unsigned int)v74);
                                  v75 = v87;
                                }
                                if ( v75 )
                                {
                                  *(_QWORD *)v89 = 0LL;
                                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v72 + 16LL))(v72);
                                }
                              }
                              else
                              {
                                wil::details::in1diag3::Return_Hr(
                                  retaddr,
                                  (void *)0x63,
                                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                  (const char *)(unsigned int)v71);
                              }
                              if ( v68 )
                              {
                                *(_QWORD *)&v101 = 0LL;
                                (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v68 + 16LL))(v68);
                              }
                              v50 = a5;
                            }
                            else
                            {
                              wil::details::in1diag3::Return_Hr(
                                retaddr,
                                (void *)0x60,
                                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                                (const char *)(unsigned int)v67);
                            }
                            if ( v65 )
                            {
                              *(_QWORD *)v90 = 0LL;
                              (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
                            }
                            v46 = v109;
                          }
                          else
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x5D,
                              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                              (const char *)(unsigned int)v64);
                          }
                          if ( v61 )
                          {
                            *(_QWORD *)v91 = 0LL;
                            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v61 + 16LL))(v61);
                          }
                        }
                        else
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x5A,
                            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                            (const char *)(unsigned int)v60);
                        }
                        if ( v57 )
                        {
                          *(_QWORD *)v92 = 0LL;
                          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v57 + 16LL))(v57);
                        }
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x57,
                          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                          (const char *)(unsigned int)v56);
                      }
                      if ( v9 )
                      {
                        *(_QWORD *)v93 = 0LL;
                        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v9 + 16LL))(v9);
                      }
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x54,
                        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                        (const char *)(unsigned int)v53);
                    }
                    if ( v50 )
                    {
                      *(_QWORD *)v94 = 0LL;
                      (*(void (__fastcall **)(struct IXamlLauncherStateCallback *))(*(_QWORD *)v50 + 16LL))(v50);
                    }
                    v42 = v110;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x51,
                      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                      (const char *)(unsigned int)v49);
                  }
                  if ( v46 )
                  {
                    *(_QWORD *)v95 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
                  }
                  v38 = *(_OWORD **)v77;
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x4E,
                    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                    (const char *)(unsigned int)v45);
                }
                if ( v42 )
                {
                  *(_QWORD *)v96 = 0LL;
                  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v42 + 16LL))(v42);
                }
                v35 = v78;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x4B,
                  (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                  (const char *)(unsigned int)v41);
              }
              if ( v38 )
              {
                *(_QWORD *)&v102 = 0LL;
                (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v38 + 16LL))(v38);
              }
              v31 = v79;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x48,
                (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                (const char *)(unsigned int)v37);
            }
            if ( v35 )
            {
              *(_QWORD *)v97 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            }
            v27 = v80;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x45,
              (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
              (const char *)(unsigned int)v34);
          }
          if ( v31 )
          {
            *(_QWORD *)v98 = 0LL;
            (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v31 + 16LL))(v31);
          }
          v23 = v81;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x42,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            (const char *)(unsigned int)v30);
        }
        if ( v27 )
        {
          *(_QWORD *)v99 = 0LL;
          (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v19 = v82;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v26);
      }
      if ( v23 )
      {
        *(_QWORD *)v100 = 0LL;
        (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v14 = StringSid;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v22);
    }
    if ( v19 )
    {
      *(_QWORD *)&v103 = 0LL;
      (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v17);
  }
  if ( v14 )
  {
    StringSid_8[0] = 0LL;
    (*(void (__fastcall **)(WCHAR *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v18;
}
