/*
 * XREFs of ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18025A9A8
 * Callers:
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18025AD60 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006FCB8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F78A0 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F7918 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AccessibilityExperienceManager::_OnViewCreated(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  int v5; // eax
  unsigned int v6; // edi
  char v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  _OWORD *v12; // rdi
  _OWORD *v13; // rax
  _OWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+38h] [rbp-49h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v22; // [rsp+40h] [rbp-41h] BYREF
  __int64 v23; // [rsp+48h] [rbp-39h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v24; // [rsp+50h] [rbp-31h] BYREF
  __int128 v25; // [rsp+58h] [rbp-29h] BYREF
  __int64 v26; // [rsp+68h] [rbp-19h] BYREF
  char v27[8]; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v28[24]; // [rsp+78h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp+Fh]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v30; // [rsp+98h] [rbp+17h]
  char v31; // [rsp+A0h] [rbp+1Fh]
  _BYTE v32[16]; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v29 = -2LL;
  v22 = a2;
  v24 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v24);
  v23 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         &v24,
         &v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C9,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_35;
  }
  if ( !*((_QWORD *)this + 47) && a2 )
  {
    *(_QWORD *)&v25 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v25);
    *(_QWORD *)&v25 = *((_QWORD *)this + 47);
    *((_QWORD *)this + 47) = a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v25);
  }
  if ( !*((_QWORD *)this + 48) )
  {
    v6 = 0;
    goto LABEL_35;
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 48LL))(v23, v27);
  v30 = &v22;
  v7 = 1;
  v31 = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(**((_QWORD **)this + 48) + 104LL))(
         *((_QWORD *)this + 48),
         v22);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 48) + 56LL))(*((_QWORD *)this + 48), v32);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = 738LL;
      goto LABEL_12;
    }
    v26 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
            &v24,
            &v26);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 741LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_31:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      goto LABEL_32;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 32LL))(v26, v32);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 742LL;
      goto LABEL_17;
    }
    *(_QWORD *)&v25 = AccessibilityExperienceManager::_OnClientWindowReadyForPresentationChanged;
    DWORD2(v25) = 0;
    *(_QWORD *)v28 = this;
    *(_OWORD *)&v28[8] = v25;
    v12 = 0LL;
    v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v13);
      v14[1] = *(_OWORD *)v28;
      *((_QWORD *)v14 + 4) = *(_QWORD *)&v28[16];
      *(_QWORD *)v14 = off_18033A1A0;
      v12 = v14;
    }
    *(_QWORD *)&v25 = v12;
    v15 = (*(__int64 (__fastcall **)(__int64, _OWORD *, char *))(*(_QWORD *)v23 + 80LL))(v23, v12, (char *)this + 392);
    v6 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, __int64))(*(_QWORD *)v22 + 336LL))(
              v22,
              4LL);
      v6 = v15;
      if ( v15 >= 0 )
      {
        v21 = 0LL;
        v17 = *((_QWORD *)this + 34);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        if ( (*(int (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v17 + 24LL))(
               v17,
               &IID_ITouchKeyboardExperienceManager,
               &GUID_9516d866_ca0f_40ca_8997_efa618b50f99,
               &v21) < 0
          || (v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 40LL))(v21), v6 = v18, v18 >= 0) )
        {
          v7 = 0;
          v6 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2F4,
            (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
            (const char *)(unsigned int)v18);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        goto LABEL_30;
      }
      v16 = 751LL;
    }
    else
    {
      v16 = 748LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_30:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
    goto LABEL_31;
  }
  v9 = 735LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_32:
  if ( v7 )
  {
    v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, _QWORD))(*(_QWORD *)v22 + 336LL))(
            v22,
            0LL);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        732LL,
        (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
  }
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v24);
  return v6;
}
