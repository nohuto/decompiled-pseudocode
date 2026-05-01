/*
 * XREFs of ?CreateInstance@CCortanaExperienceManagerClassFactory@@EEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800A4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CCortanaExperienceManagerClassFactory::CreateInstance(
        CCortanaExperienceManagerClassFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v6; // ebx
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 *v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  HRESULT v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v21)(_QWORD, const struct _GUID *, void **); // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23[1] = -2LL;
  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)0x80040110LL);
    return v6;
  }
  v23[0] = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v23);
  Instance = CoCreateInstance(&CLSID_ImmersiveShell, 0LL, 4u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance >= 0 )
  {
    v22 = 0LL;
    v9 = v23[0];
    v10 = *(_QWORD *)v23[0];
    v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
    v12 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(v10 + 24))(
            v9,
            &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
            &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
            v11);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x672,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_17:
      v18 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_19;
    }
    v21 = 0LL;
    v13 = v22;
    string = 0LL;
    v14 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Cortana", 0x28u, &hstringHeader, &string);
    if ( v14 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, string, &v21);
    v6 = v15;
    if ( v15 >= 0 )
    {
      v15 = (**v21)(v21, a3, a4);
      v6 = v15;
      if ( v15 >= 0 )
      {
        v6 = 0;
LABEL_15:
        v17 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v17)[2])(v17);
        }
        goto LABEL_17;
      }
      v16 = 1654LL;
    }
    else
    {
      v16 = 1653LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x66F,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)Instance);
LABEL_19:
  v19 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v6;
}
