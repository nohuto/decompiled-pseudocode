/*
 * XREFs of ?GetStartSize@CortanaDesktopExperienceView@@AEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800644CC
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z @ 0x180066260 (-CanTransitionFromStart@CortanaDesktopExperienceView@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180076680 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 *     ?GetStartSize@CStartExperienceManager@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180076AD0 (-GetStartSize@CStartExperienceManager@@UEAAJPEAUSize@Foundation@Windows@@@Z.c)
 *     ?QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077850 (-QueryInterface@CStartExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CortanaDesktopExperienceView::GetStartSize(
        CortanaDesktopExperienceView *this,
        struct Windows::Foundation::Size *a2)
{
  LPVOID *v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rbx
  HRESULT v7; // eax
  int v8; // eax
  __int64 (__fastcall *v9)(CStartExperienceManager *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  CStartExperienceManager *v11; // rdi
  __int64 (__fastcall *v12)(CStartExperienceManager *__hidden, struct Windows::Foundation::Size *); // rax
  int StartSize; // eax
  CStartExperienceManager *v14; // rcx
  void (*v15)(void); // rax
  __int64 v16; // rcx
  HRESULT Instance; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  int ppv; // [rsp+20h] [rbp-60h]
  CStartExperienceManager *v22; // [rsp+30h] [rbp-50h] BYREF
  CStartExperienceManager *v23; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24[1] = -2LL;
  v3 = (LPVOID *)((char *)this + 112);
  if ( *((_QWORD *)this + 14)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14),
        Instance = CoCreateInstance(
                     &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                     0LL,
                     0x404u,
                     &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                     v3),
        v4 = Instance,
        Instance >= 0) )
  {
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)v4,
      ppv);
    return v4;
  }
  v24[0] = 0LL;
  v5 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, _QWORD *))(*(_QWORD *)*v3 + 24LL))(
         *v3,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
         v24);
  v4 = v5;
  if ( v5 >= 0 )
  {
    v23 = 0LL;
    v6 = v24[0];
    string = 0LL;
    v7 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.StartMenu", 0x2Au, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      RaiseException(v7, 1u, 0, 0LL);
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, CStartExperienceManager **))(*(_QWORD *)v6 + 48LL))(
           v6,
           string,
           &v23);
    v4 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5CB,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8,
        ppv);
LABEL_17:
      v14 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
        if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release();
        else
          v15();
      }
      goto LABEL_20;
    }
    v22 = 0LL;
    v9 = **(__int64 (__fastcall ***)(CStartExperienceManager *__hidden, const struct _GUID *, void **))v23;
    if ( v9 == CStartExperienceManager::QueryInterface )
      Interface = CStartExperienceManager::QueryInterface(
                    v23,
                    &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee,
                    (void **)&v22);
    else
      Interface = v9(v23, &GUID_c2d211a1_a6d4_49b5_9704_d74cb4dff1ee, (void **)&v22);
    v4 = Interface;
    if ( Interface < 0 )
    {
      v20 = 1485LL;
    }
    else
    {
      v11 = v22;
      v12 = *(__int64 (__fastcall **)(CStartExperienceManager *__hidden, struct Windows::Foundation::Size *))(*(_QWORD *)v22 + 96LL);
      if ( v12 == CStartExperienceManager::GetStartSize )
      {
        StartSize = CStartExperienceManager::GetStartSize(v22, a2);
      }
      else
      {
        StartSize = v12(v22, a2);
        v11 = v22;
      }
      v4 = StartSize;
      if ( StartSize >= 0 )
      {
        v4 = 0;
        goto LABEL_15;
      }
      v20 = 1486LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)v4,
      ppv);
    v11 = v22;
LABEL_15:
    if ( v11 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(CStartExperienceManager *))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C9,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v5,
    ppv);
LABEL_20:
  v16 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v4;
}
