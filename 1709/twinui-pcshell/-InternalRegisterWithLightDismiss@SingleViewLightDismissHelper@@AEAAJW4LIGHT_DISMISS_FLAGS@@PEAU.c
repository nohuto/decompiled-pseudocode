/*
 * XREFs of ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DCCD4
 * Callers:
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180097F30 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AE410 (-OnViewShown@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B1D50 (-OnViewShown@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800C6100 (-OnClientWindowReadyForPresentationChanged@CQuickConnectExperienceManager@@AEAAJPEAUIClientWindo.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800D6C5C (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A9D84 (-Provider@SingleViewExperienceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1801DCF38 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
        SingleViewLightDismissHelper *a1,
        unsigned int a2,
        __int64 a3,
        ExperienceManagerUtils *a4)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  HRESULT v9; // eax
  int v10; // ebx
  LPVOID v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  LPVOID v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // rax
  const struct _TlgProvider_t *v19; // rax
  LPVOID ppv; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-31h] BYREF
  _QWORD v22[3]; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-11h] BYREF
  LPVOID *p_ppv; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v22[2] = -2LL;
  SingleViewLightDismissHelper::UnregisterWithLightDismiss(a1);
  if ( *(_QWORD *)a1 )
    goto LABEL_21;
  ppv = 0LL;
  v9 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         4u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &ppv);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x21,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v9);
LABEL_4:
    v11 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_17;
  }
  v22[0] = 0LL;
  v12 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *))(*(_QWORD *)ppv + 24LL))(ppv, v22);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x28,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v12);
    v13 = v22[0];
    if ( v22[0] )
    {
      v22[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_4;
  }
  if ( *(_QWORD *)a1 )
  {
    v14 = v22[0];
  }
  else
  {
    *(_QWORD *)a1 = v22[0];
    v14 = 0LL;
    v22[0] = 0LL;
  }
  if ( v14 )
  {
    v22[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v10 = 0;
LABEL_17:
  if ( v10 < 0 )
  {
    v16 = 75LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
LABEL_21:
  v18 = ExperienceManagerUtils::WindowFromViewWrapper(a4, v8);
  if ( !v18 )
  {
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
      (const char *)0x80004005LL);
    return (unsigned int)v10;
  }
  v22[0] = a2;
  v22[1] = v18;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64, unsigned int *))(**(_QWORD **)a1 + 24LL))(
          *(_QWORD *)a1,
          v22,
          a3,
          &v21);
  if ( v10 < 0 )
  {
    v16 = 83LL;
    goto LABEL_19;
  }
  v19 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v19 > 5u )
  {
    LODWORD(ppv) = v21;
    p_ppv = &ppv;
    v25 = 4;
    v26 = 0;
    TlgWrite(v19, &unk_18026A93A, 0LL, 0LL, 3u, &pData);
  }
  if ( *((_DWORD *)a1 + 2) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, v21);
  else
    *((_DWORD *)a1 + 2) = v21;
  return 0LL;
}
