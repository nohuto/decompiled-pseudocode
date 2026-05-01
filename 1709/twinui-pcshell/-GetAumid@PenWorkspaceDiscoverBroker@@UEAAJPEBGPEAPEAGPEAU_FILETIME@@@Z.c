/*
 * XREFs of ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1800E3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInternal@@PEAU_FILETIME@@@Z @ 0x1800E44D8 (-GetInstallTime@PenWorkspaceDiscoverBroker@@CAJPEAUIUnifiedTile@UnifiedTile@Shell@WindowsInterna.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E5300 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E661C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x1801C1F4C (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall PenWorkspaceDiscoverBroker::GetAumid(
        PenWorkspaceDiscoverBroker *this,
        char *a2,
        PVOID *a3,
        struct _FILETIME *a4)
{
  int IsShellExperience; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  int ActivationFactory; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  HRESULT v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // edi
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  PCWSTR StringRawBuffer; // rax
  char *v27; // r8
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rcx
  int (__fastcall ***v32)(_QWORD, GUID *, _QWORD *); // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v33; // rcx
  int InstallTime; // eax
  __int64 v35; // rbx
  int v36; // eax
  PCWSTR v37; // rax
  int v38; // eax
  PVOID Reserved1; // rcx
  __int64 v40; // rcx
  int (__fastcall ***v41)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v42; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *v51; // [rsp+38h] [rbp-69h] BYREF
  HSTRING v52; // [rsp+40h] [rbp-61h] BYREF
  __int64 v53; // [rsp+48h] [rbp-59h] BYREF
  int (__fastcall ***v54)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-51h] BYREF
  __int64 v55; // [rsp+58h] [rbp-49h] BYREF
  __int64 v56; // [rsp+60h] [rbp-41h] BYREF
  __int64 v57; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v58; // [rsp+70h] [rbp-31h] BYREF
  HSTRING v59; // [rsp+78h] [rbp-29h] BYREF
  __int64 v60; // [rsp+80h] [rbp-21h] BYREF
  __int64 v61; // [rsp+88h] [rbp-19h] BYREF
  __int64 v62; // [rsp+90h] [rbp-11h] BYREF
  _QWORD v63[2]; // [rsp+98h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+7h] BYREF
  HSTRING string; // [rsp+C0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v63[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience(this);
  v8 = IsShellExperience;
  if ( IsShellExperience < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3B,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return v8;
  }
  v57 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(
         L"WindowsInternal.Shell.UnifiedTile.UnifiedTileManager",
         0x34u,
         &hstringHeader,
         &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_3747c20e_e7a2_4eb1_afec_7d4383bb2cb2, &v57);
  v8 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v62 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v57 + 48LL))(
            v57,
            33LL,
            3LL,
            &v62);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 68LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v11);
LABEL_82:
      v48 = v62;
      if ( v62 )
      {
        v62 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      goto LABEL_84;
    }
    v11 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>,Windows::Foundation::IAsyncOperation<WindowsInternal::Shell::UnifiedTile::UnifiedTileManager *>>(v62);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 70LL;
      goto LABEL_11;
    }
    v61 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v62 + 64LL))(v62, &v61);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x49,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v13);
LABEL_80:
      v47 = v61;
      if ( v61 )
      {
        v61 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      goto LABEL_82;
    }
    v63[0] = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v61 + 72LL))(v61, v63);
    v8 = v14;
    if ( v14 < 0 )
    {
      v15 = 76LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v14);
LABEL_78:
      v46 = v63[0];
      if ( v63[0] )
      {
        v63[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      goto LABEL_80;
    }
    v14 = WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(v63[0]);
    v8 = v14;
    if ( v14 < 0 )
    {
      v15 = 77LL;
      goto LABEL_18;
    }
    v56 = 0LL;
    v16 = v61;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"AllApps", 7u, &hstringHeader, &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, __int64 *))(*(_QWORD *)v16 + 56LL))(
            v16,
            1LL,
            string,
            &v56);
    v8 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x50,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)v18);
LABEL_76:
      v45 = v56;
      if ( v56 )
      {
        v56 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      goto LABEL_78;
    }
    v60 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 56LL))(v56, &v60);
    v8 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v60 + 56LL))(v60, &v58);
      v8 = v19;
      if ( v19 >= 0 )
      {
        v21 = 0;
        if ( v58 )
        {
          while ( 1 )
          {
            v51 = 0LL;
            v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile **))(*(_QWORD *)v60 + 48LL))(
                    v60,
                    v21,
                    &v51);
            v8 = v22;
            if ( v22 < 0 )
            {
              wil::details::in1diag3::Return_Hr_NoOriginate(
                retaddr,
                (void *)0x5B,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                (const char *)(unsigned int)v22);
              goto LABEL_71;
            }
            v55 = 0LL;
            v23 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, __int64 *))(*(_QWORD *)v51 + 104LL))(
                    v51,
                    &v55);
            v8 = v23;
            if ( v23 < 0 )
              break;
            v24 = v55;
            if ( v55 )
            {
              v52 = 0LL;
              WindowsDeleteString(0LL);
              v52 = 0LL;
              v25 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 48LL))(v24, &v52);
              v8 = v25;
              if ( v25 < 0 )
              {
                wil::details::in1diag3::Return_Hr_NoOriginate(
                  retaddr,
                  (void *)0x63,
                  (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                  (const char *)(unsigned int)v25);
                goto LABEL_66;
              }
              StringRawBuffer = WindowsGetStringRawBuffer(v52, 0LL);
              v27 = (char *)(a2 - (char *)StringRawBuffer);
              do
              {
                v28 = *(unsigned __int16 *)&v27[(_QWORD)StringRawBuffer];
                v29 = *StringRawBuffer - v28;
                if ( v29 )
                  break;
                ++StringRawBuffer;
              }
              while ( v28 );
              if ( !v29 )
              {
                v54 = 0LL;
                v30 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v51 + 48LL))(
                        v51,
                        &v54);
                v8 = v30;
                if ( v30 < 0 )
                {
                  wil::details::in1diag3::Return_Hr_NoOriginate(
                    retaddr,
                    (void *)0x68,
                    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                    (const char *)(unsigned int)v30);
                  goto LABEL_63;
                }
                v53 = 0LL;
                if ( (**v54)(v54, &GUID_a7668288_cc23_4b67_be8b_6c10455986b8, &v53) >= 0 )
                {
                  InstallTime = PenWorkspaceDiscoverBroker::GetInstallTime(v51, a4);
                  v8 = InstallTime;
                  if ( InstallTime >= 0 )
                  {
                    v59 = 0LL;
                    v35 = v53;
                    WindowsDeleteString(0LL);
                    v59 = 0LL;
                    v36 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 48LL))(v35, &v59);
                    v8 = v36;
                    if ( v36 >= 0 )
                    {
                      memset(&hstringHeader, 0, sizeof(hstringHeader));
                      v37 = WindowsGetStringRawBuffer(v59, 0LL);
                      v38 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                              (__int64)&hstringHeader,
                              (__int64)v37,
                              0xFFFFFFFFFFFFFFFFuLL);
                      v8 = v38;
                      if ( v38 >= 0 )
                      {
                        Reserved1 = 0LL;
                        *a3 = hstringHeader.Reserved.Reserved1;
                        v8 = 0;
                      }
                      else
                      {
                        wil::details::in1diag3::Return_Hr_NoOriginate(
                          retaddr,
                          (void *)0x73,
                          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                          (const char *)(unsigned int)v38);
                        Reserved1 = hstringHeader.Reserved.Reserved1;
                      }
                      if ( Reserved1 )
                        CoTaskMemFree(Reserved1);
                    }
                    else
                    {
                      wil::details::in1diag3::Return_Hr_NoOriginate(
                        retaddr,
                        (void *)0x70,
                        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                        (const char *)(unsigned int)v36);
                    }
                    WindowsDeleteString(v59);
                    v59 = 0LL;
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr_NoOriginate(
                      retaddr,
                      (void *)0x6D,
                      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
                      (const char *)(unsigned int)InstallTime);
                  }
                  v40 = v53;
                  if ( v53 )
                  {
                    v53 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
                  }
LABEL_63:
                  v41 = v54;
                  if ( v54 )
                  {
                    v54 = 0LL;
                    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v41)[2])(v41);
                  }
LABEL_66:
                  WindowsDeleteString(v52);
                  v52 = 0LL;
                  goto LABEL_68;
                }
                v31 = v53;
                if ( v53 )
                {
                  v53 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                }
                v32 = v54;
                if ( v54 )
                {
                  v54 = 0LL;
                  ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v32)[2])(v32);
                }
              }
              WindowsDeleteString(v52);
              v52 = 0LL;
              v24 = v55;
            }
            if ( v24 )
            {
              v55 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
            }
            v33 = v51;
            if ( v51 )
            {
              v51 = 0LL;
              (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v33 + 16LL))(v33);
            }
            if ( ++v21 >= v58 )
              goto LABEL_73;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x5E,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
            (const char *)(unsigned int)v23);
LABEL_68:
          v42 = v55;
          if ( v55 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          }
LABEL_71:
          v43 = v51;
          if ( v51 )
          {
            v51 = 0LL;
            (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTile *))(*(_QWORD *)v43 + 16LL))(v43);
          }
        }
        else
        {
LABEL_73:
          v8 = -2147023728;
        }
        goto LABEL_74;
      }
      v20 = 86LL;
    }
    else
    {
      v20 = 83LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v19);
LABEL_74:
    v44 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    goto LABEL_76;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x41,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_84:
  v49 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  return v8;
}
