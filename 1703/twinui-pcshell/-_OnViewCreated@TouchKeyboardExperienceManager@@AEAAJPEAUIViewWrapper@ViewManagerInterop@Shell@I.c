/*
 * XREFs of ?_OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18016CB28
 * Callers:
 *     ?_OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18016C960 (-_OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@VCPeopleBarJumpViewExperienceManager@@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@3@PEAUIClientWindowReadyForPresentationChangedEventArgs@6783@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@PEAVCPeopleBarJumpViewExperienceManager@@P83@EAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@5678@@Z@Z @ 0x1800A3EF0 (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windo.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::_OnViewCreated(
        TouchKeyboardExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  char *v12; // r8
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+28h] [rbp-49h] BYREF
  __int64 v21; // [rsp+30h] [rbp-41h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v22; // [rsp+38h] [rbp-39h] BYREF
  __int128 v23; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v24[8]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD *v25; // [rsp+60h] [rbp-11h] BYREF
  char v26; // [rsp+68h] [rbp-9h]
  __int64 v27; // [rsp+70h] [rbp-1h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v28; // [rsp+78h] [rbp+7h]
  __int128 v29; // [rsp+88h] [rbp+17h] BYREF
  _BYTE v30[16]; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v27 = -2LL;
  v22 = a2;
  v28 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v20 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2)(
         a2,
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x31D,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_32;
  }
  if ( !*((_QWORD *)this + 37)
    && *((struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)this + 37) != a2 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 37);
    *((_QWORD *)this + 37) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 48LL))(v20, v24);
  *(_QWORD *)&v23 = &v22;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v25, &v23);
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(**((_QWORD **)this + 38) + 104LL))(
         *((_QWORD *)this + 38),
         v22);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 38) + 56LL))(*((_QWORD *)this + 38), v30);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 817LL;
      goto LABEL_13;
    }
    v21 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2)(
            a2,
            &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
            &v21);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 820LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_27:
      v16 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      goto LABEL_29;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v30);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 821LL;
      goto LABEL_18;
    }
    *(_QWORD *)&v23 = TouchKeyboardExperienceManager::_OnClientWindowReadyForPresentationChanged;
    DWORD2(v23) = 0;
    v29 = v23;
    Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,CPeopleBarJumpViewExperienceManager,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>(
      &v23,
      (__int64)this,
      &v29);
    v12 = (char *)this + 312;
    v13 = v23;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v20 + 80LL))(v20, v23, v12);
    v6 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v22 + 336LL))(
              v22,
              4LL);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v26 = 0;
        v6 = 0;
LABEL_25:
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        goto LABEL_27;
      }
      v15 = 830LL;
    }
    else
    {
      v15 = 827LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_25;
  }
  v9 = 814LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_29:
  if ( v26 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v25 + 336LL))(*v25, 0LL);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x32B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
  }
LABEL_32:
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 16LL))(a2);
  return v6;
}
