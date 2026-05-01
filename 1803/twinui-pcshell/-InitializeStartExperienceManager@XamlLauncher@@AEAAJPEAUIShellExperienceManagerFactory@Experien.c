/*
 * XREFs of ?InitializeStartExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x180226ECC
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802281D0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F5DB8 (--$As@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIInspectable@@@WRL@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180225998 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAVStartExperie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncher::InitializeStartExperienceManager(
        XamlLauncher *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  IUnknown **v7; // r13
  UAPViewWrapper *v8; // rdi
  UAPViewWrapper *v9; // rax
  UAPViewWrapper *v10; // rbx
  UAPViewWrapper *v11; // r12
  int v12; // eax
  UAPViewWrapper *v13; // rdi
  UAPViewWrapper *v14; // rax
  UAPViewWrapper *v15; // rbx
  UAPViewWrapper *v16; // r15
  int v17; // eax
  UAPViewWrapper *v18; // rdi
  UAPViewWrapper *v19; // rax
  UAPViewWrapper *v20; // rbx
  UAPViewWrapper *v21; // r14
  int v22; // eax
  UAPViewWrapper *v24[5]; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v24[1] = (UAPViewWrapper *)-2LL;
  v24[0] = 0LL;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.StartMenu",
    0x2Bu,
    0x2Au);
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v24);
  v4 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *, __int64, UAPViewWrapper **))(*(_QWORD *)a2 + 48LL))(
         a2,
         v26,
         v24);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 426LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_25;
  }
  v7 = (IUnknown **)((char *)this + 104);
  v4 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IStartExperienceManager>(
         v24,
         (__int64 *)this + 13);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 427LL;
    goto LABEL_5;
  }
  IUnknown_SetSite(*v7, *((IUnknown **)this + 2));
  v8 = 0LL;
  v9 = (UAPViewWrapper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  v11 = 0LL;
  if ( v9 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v9);
    *((_QWORD *)v10 + 2) = this;
    *(_QWORD *)v10 = off_180337620;
    v8 = v10;
    v11 = v10;
  }
  v24[2] = v8;
  v12 = ((__int64 (__fastcall *)(IUnknown *, UAPViewWrapper *, char *))(*v7)->lpVtbl[8].AddRef)(
          *v7,
          v11,
          (char *)this + 160);
  v5 = v12;
  if ( v12 >= 0 )
  {
    v13 = 0LL;
    v14 = (UAPViewWrapper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    v16 = 0LL;
    if ( v14 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v14);
      *((_QWORD *)v15 + 2) = this;
      *(_QWORD *)v15 = off_1803375A8;
      v13 = v15;
      v16 = v15;
    }
    v24[3] = v13;
    v17 = ((__int64 (__fastcall *)(IUnknown *, UAPViewWrapper *, char *))(*v7)->lpVtbl[9].QueryInterface)(
            *v7,
            v16,
            (char *)this + 168);
    v5 = v17;
    if ( v17 >= 0 )
    {
      v18 = 0LL;
      v19 = (UAPViewWrapper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = v19;
      v21 = 0LL;
      if ( v19 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>>((__int64)v19);
        *((_QWORD *)v20 + 2) = this;
        *(_QWORD *)v20 = off_1803375D0;
        v18 = v20;
        v21 = v20;
      }
      v24[4] = v18;
      v22 = ((__int64 (__fastcall *)(IUnknown *, UAPViewWrapper *, char *))(*v7)->lpVtbl[7].Release)(
              *v7,
              v21,
              (char *)this + 176);
      v5 = v22;
      if ( v22 >= 0 )
        v5 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D7,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v22);
      if ( v21 )
        (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C1,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v17);
    }
    if ( v16 )
      (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B6,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v11 )
    (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_25:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(v24);
  return v5;
}
