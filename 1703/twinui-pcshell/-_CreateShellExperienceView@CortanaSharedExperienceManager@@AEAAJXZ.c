/*
 * XREFs of ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1800BBBAC
 * Callers:
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1800BA138 (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@VCortanaDesktopExperienceView@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewChangedArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@2345@@Foundation@Windows@@@01@PEAVCortanaDesktopExperienceView@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@5678@@Z@Z @ 0x1800BF094 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PE.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@VCortanaSharedExperienceManager@@PEAUIShellExperienceView@Experience@Shell@Internal@3@PEAUIShellExperienceViewEventArg@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@2345@@Foundation@Windows@@@01@PEAVCortanaSharedExperienceManager@@P83@EAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@5678@@Z@Z @ 0x1800BF0E4 (--$Callback@U-$ITypedEventHandler@PEAUIShellExperienceView@Experience@Shell@Interna_ea_1800BF0E4.c)
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x1800BFE40 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaSharedExperienceManager::_CreateShellExperienceView(CortanaSharedExperienceManager *this)
{
  HRESULT v2; // eax
  HRESULT v3; // eax
  HRESULT v4; // eax
  __int64 **v5; // rdi
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  __int128 v18; // [rsp+38h] [rbp-79h] BYREF
  int v19[4]; // [rsp+48h] [rbp-69h] BYREF
  __int128 v20; // [rsp+58h] [rbp-59h] BYREF
  int v21[2]; // [rsp+68h] [rbp-49h] BYREF
  __int128 v22; // [rsp+78h] [rbp-39h] BYREF
  __int64 v23; // [rsp+88h] [rbp-29h]
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-21h] BYREF
  HSTRING string; // [rsp+A8h] [rbp-9h] BYREF
  HSTRING_HEADER v26; // [rsp+B0h] [rbp-1h] BYREF
  HSTRING v27; // [rsp+C8h] [rbp+17h] BYREF
  HSTRING_HEADER v28; // [rsp+D0h] [rbp+1Fh] BYREF
  HSTRING v29; // [rsp+E8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v23 = -2LL;
  v19[0] = 13;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Cortana", 0x28u, &hstringHeader, &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  *(_QWORD *)v21 = string;
  v27 = 0LL;
  v3 = WindowsCreateStringReference(L"Microsoft.Cortana_8wekyb3d8bbwe!CortanaUI", 0x29u, &v26, &v27);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
  *(_QWORD *)&v22 = v27;
  v29 = 0LL;
  v4 = WindowsCreateStringReference(L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI", 0x31u, &v28, &v29);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  *(_QWORD *)&v18 = v29;
  *(_QWORD *)&v20 = *((_QWORD *)this + 48);
  v5 = (__int64 **)((char *)this + 480);
  v6 = *((_QWORD *)this + 60);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
         (int)this + 480,
         (unsigned int)&v20,
         (unsigned int)&v18,
         (unsigned int)&v22,
         (__int64)v21,
         (__int64)v19);
  if ( v7 < 0 )
  {
    v8 = 709LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = *((_QWORD *)this + 59);
  if ( v10 )
  {
    *((_QWORD *)this + 59) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v7 = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))**v5)(
         *v5,
         &GUID_0af05558_d7f8_465e_977e_67af403ddef2,
         (char *)this + 472);
  if ( v7 < 0 )
  {
    v8 = 711LL;
    goto LABEL_11;
  }
  *(_QWORD *)&v20 = CortanaSharedExperienceManager::_OnViewChangedHandler;
  DWORD2(v20) = 0;
  v18 = v20;
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>,CortanaDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *>(
    &v20,
    this,
    &v18);
  v11 = v20;
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(**v5 + 152))(*v5, v20, (char *)this + 488);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *(_QWORD *)&v18 = CortanaSharedExperienceManager::_OnViewEventHandler;
    DWORD2(v18) = 0;
    v22 = v18;
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>,CortanaSharedExperienceManager,Windows::Internal::Shell::Experience::IShellExperienceView *,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *>(
      &v18,
      this,
      &v22);
    v14 = *v5;
    v15 = **v5;
    v16 = v18;
    v17 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(v15 + 168))(v14, v18, (char *)this + 496);
    v13 = v17;
    if ( v17 >= 0 )
      v13 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2CD,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2CA,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v13;
}
