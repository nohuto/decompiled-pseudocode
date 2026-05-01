/*
 * XREFs of ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800AD3C4
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B05F0 (--$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1801CF740 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801CFEC4 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::RuntimeClassInitialize(
        CPeopleBarFlyoutExperienceManager *this,
        struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  HRESULT v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // r14
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v14; // rax
  struct IServiceProviderVtbl *v15; // rbx
  __int64 *v16; // rax
  HSTRING_HEADER v18; // [rsp+40h] [rbp-31h] BYREF
  HSTRING v19; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-11h] BYREF
  HSTRING string; // [rsp+78h] [rbp+7h] BYREF
  HSTRING_HEADER v22; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING v23; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  if ( *((struct IServiceProvider **)this + 40) != a2 )
  {
    if ( a2 )
      ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
    v4 = *((_QWORD *)this + 40);
    *((_QWORD *)this + 40) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
         0x38u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v19 = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.PeopleBarFlyout", 0x30u, &v18, &v19);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
  v7 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)this + 14,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         string,
         v19);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v23 = 0LL;
    v9 = WindowsCreateStringReference(L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", 0x28u, &v22, &v23);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    v10 = CSingleViewShellExperience::AddTestAumid((CPeopleBarFlyoutExperienceManager *)((char *)this + 112), v23);
    v8 = v10;
    if ( v10 >= 0 )
    {
      *((_DWORD *)this + 43) = 4;
      v12 = (_QWORD *)((char *)this + 88);
      lpVtbl = a2->lpVtbl;
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 11);
      v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
              a2,
              &IID_IImmersiveWindowMessageService,
              &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
              v14);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
                *v12,
                1027LL,
                ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                (char *)this + 84);
        v8 = v10;
        if ( v10 >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
                  *v12,
                  1025LL,
                  ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                  (char *)this + 76);
          v8 = v10;
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v12 + 24LL))(
                    *v12,
                    1026LL,
                    ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                    (char *)this + 80);
            v8 = v10;
            if ( v10 >= 0 )
            {
              v15 = a2->lpVtbl;
              v16 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 13);
              v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v15->QueryService)(
                      a2,
                      &IID_IImmersiveSessionIdleDetector,
                      &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
                      v16);
              v8 = v10;
              if ( v10 >= 0 )
              {
                v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 13) + 32LL))(
                        *((_QWORD *)this + 13),
                        ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
                        (char *)this + 96);
                v8 = v10;
                if ( v10 >= 0 )
                  return 0;
                v11 = 87LL;
              }
              else
              {
                v11 = 86LL;
              }
            }
            else
            {
              v11 = 84LL;
            }
          }
          else
          {
            v11 = 83LL;
          }
        }
        else
        {
          v11 = 82LL;
        }
      }
      else
      {
        v11 = 81LL;
      }
    }
    else
    {
      v11 = 73LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x43,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  }
  return v8;
}
