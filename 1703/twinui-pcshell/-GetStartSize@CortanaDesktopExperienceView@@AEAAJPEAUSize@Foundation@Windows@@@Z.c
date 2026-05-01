/*
 * XREFs of ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800C5400
 * Callers:
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x1800C2BF0 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800C727C (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C51CC (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::GetStartSize(__int64 **this, struct Windows::Foundation::Size *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  HRESULT v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v21[1] = -2LL;
  v4 = CortanaDesktopExperienceView::EnsureImmersiveShell((CortanaDesktopExperienceView *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x588,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v21[0] = 0LL;
  v6 = this[14];
  v7 = *v6;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v21);
  v9 = (*(__int64 (__fastcall **)(__int64 *, GUID *, GUID *, __int64 *))(v7 + 24))(
         v6,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         v8);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v19 = 0LL;
    v10 = v21[0];
    string = 0LL;
    v11 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &hstringHeader, &string);
    if ( v11 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, string, &v19);
    v5 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x58C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
LABEL_17:
      v16 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
      }
      goto LABEL_19;
    }
    v20 = 0LL;
    v13 = (**v19)(v19, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, &v20);
    v5 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Size *))(*(_QWORD *)v20 + 96LL))(v20, a2);
      v5 = v13;
      if ( v13 >= 0 )
      {
        v5 = 0;
LABEL_15:
        v15 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_17;
      }
      v14 = 1423LL;
    }
    else
    {
      v14 = 1422LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x58A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v9);
LABEL_19:
  v17 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v5;
}
