/*
 * XREFs of ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E100
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18015D8DC (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18008F4E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180095F5C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIShellExperi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180095FB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEA_ea_180095FB8.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x18015A6E0 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaSharedExperienceManager::_CreateShellExperienceView(CortanaSharedExperienceManager *this)
{
  _QWORD *v2; // r12
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  _OWORD *v6; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rbx
  __int64 v9; // r14
  int v10; // eax
  volatile int *v11; // rdx
  char *v12; // rdi
  char *v13; // rax
  char *v14; // rbx
  __int64 v15; // rsi
  int v16; // eax
  __int64 (__fastcall *v17)(__int64, volatile int *); // rax
  __int64 (__fastcall *v18)(__int64, volatile int *); // rax
  int v20; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v21[24]; // [rsp+40h] [rbp-71h] BYREF
  __int128 v22; // [rsp+58h] [rbp-59h] BYREF
  int v23[2]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v24[2]; // [rsp+70h] [rbp-41h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-31h] BYREF
  __int64 v26; // [rsp+98h] [rbp-19h]
  HSTRING_HEADER v27; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+7h]
  HSTRING_HEADER v29; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+D8h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v24[1] = -2LL;
  v20 = 13;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.Cortana",
    0x29u,
    0x28u);
  *(_QWORD *)v23 = v26;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v27,
    L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI",
    0x2Au,
    0x29u);
  v24[0] = v28;
  v30 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v29,
    L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
    0x32u,
    0x31u);
  *(_QWORD *)v21 = v30;
  *(_QWORD *)&v22 = *((_QWORD *)this + 48);
  v2 = (_QWORD *)((char *)this + 480);
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (__int64 *)this + 60,
         &v22,
         v21,
         v24,
         v23,
         &v20);
  if ( v4 < 0 )
  {
    v5 = 724LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 59);
  v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v2)(
         *v2,
         &GUID_0af05558_d7f8_465e_977e_67af403ddef2,
         (char *)this + 472);
  if ( v4 < 0 )
  {
    v5 = 726LL;
    goto LABEL_5;
  }
  *(_QWORD *)&v22 = CortanaSharedExperienceManager::_OnViewChangedHandler;
  DWORD2(v22) = 0;
  *(_QWORD *)v21 = this;
  *(_OWORD *)&v21[8] = v22;
  v6 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v9 = 0LL;
  if ( v7 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>>((__int64)v7);
    v8[1] = *(_OWORD *)v21;
    *((_QWORD *)v8 + 4) = *(_QWORD *)&v21[16];
    *(_QWORD *)v8 = off_180329098;
    v6 = v8;
    v9 = (__int64)v8;
  }
  *(_QWORD *)&v22 = v6;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v2 + 152LL))(*v2, v9, (char *)this + 488);
  v4 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)v21 = CortanaSharedExperienceManager::_OnViewEventHandler;
    *(_DWORD *)&v21[8] = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = *(_OWORD *)v21;
    v12 = 0LL;
    v13 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    v15 = 0LL;
    if ( v13 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>>((__int64)v13);
      *(HSTRING_HEADER *)(v14 + 16) = hstringHeader;
      *(_QWORD *)v14 = off_1803290C0;
      v12 = v14;
      v15 = (__int64)v14;
    }
    *(_QWORD *)v21 = v12;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v2 + 168LL))(*v2, v15, (char *)this + 496);
    v4 = v16;
    if ( v16 >= 0 )
      v4 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
    if ( v15 )
    {
      v17 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v15 + 16LL);
      if ( v17 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
          v15,
          v11);
      else
        ((void (__fastcall *)(__int64))v17)(v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v9 )
  {
    v18 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v9 + 16LL);
    if ( v18 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
        v9,
        v11);
    else
      ((void (__fastcall *)(__int64))v18)(v9);
  }
  return (unsigned int)v4;
}
