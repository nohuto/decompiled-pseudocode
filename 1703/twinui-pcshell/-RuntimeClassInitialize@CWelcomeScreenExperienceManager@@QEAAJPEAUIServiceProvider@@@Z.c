/*
 * XREFs of ?RuntimeClassInitialize@CWelcomeScreenExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B2A9C
 * Callers:
 *     ??$MakeAndInitialize@VCWelcomeScreenExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1800B4E7C (--$MakeAndInitialize@VCWelcomeScreenExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180038114 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CheckExtensionForApplication@CWelcomeScreenExperienceManager@@AEAAJPEBG0PEA_N@Z @ 0x1800B34E8 (-CheckExtensionForApplication@CWelcomeScreenExperienceManager@@AEAAJPEBG0PEA_N@Z.c)
 *     ?SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z @ 0x1800B527C (-SHRegAllocData@@YAJPEAUHKEY__@@PEBG1HPEAPEAXPEAK@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18018023C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWelcomeScreenExperienceManager::RuntimeClassInitialize(
        CWelcomeScreenExperienceManager *this,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3,
        int a4)
{
  HKEY v6; // rcx
  CWelcomeScreenExperienceManager *v7; // rcx
  const unsigned __int16 *v8; // r8
  PVOID Reserved1; // rdi
  int v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  HRESULT v14; // eax
  HSTRING_HEADER *v15; // rax
  __int64 v16; // rcx
  unsigned int *v17; // [rsp+30h] [rbp-21h]
  bool v18; // [rsp+38h] [rbp-19h] BYREF
  const WCHAR *v19[2]; // [rsp+40h] [rbp-11h] BYREF
  HSTRING_HEADER pv; // [rsp+50h] [rbp-1h] BYREF
  HSTRING string; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER v22; // [rsp+70h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v19[1] = (const WCHAR *)-2LL;
  v6 = (HKEY)*((_QWORD *)this + 13);
  if ( v6 )
  {
    CoTaskMemFree(v6);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 14) = -1LL;
  *((_QWORD *)this + 15) = -1LL;
  *((_QWORD *)this + 13) = 0LL;
  v18 = 0;
  pv.Reserved.Reserved1 = 0LL;
  *(_QWORD *)&pv.Reserved.Reserved2[8] = -1LL;
  *(_QWORD *)&pv.Reserved.Reserved2[16] = -1LL;
  if ( (int)SHRegAllocData(v6, (const unsigned __int16 *)a2, a3, a4, &pv.Reserved.Reserved1, v17) >= 0 )
  {
    Reserved1 = pv.Reserved.Reserved1;
    if ( CWelcomeScreenExperienceManager::CheckExtensionForApplication(
           v7,
           (const unsigned __int16 *)pv.Reserved.Reserved1,
           v8,
           &v18) >= 0
      && v18 )
    {
      goto LABEL_10;
    }
  }
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&pv,
          L"Microsoft.WelcomeScreen_cw5n1h2txyewy!App",
          0xFFFFFFFFFFFFFFFFuLL);
  v11 = v10;
  if ( v10 >= 0 )
  {
    Reserved1 = pv.Reserved.Reserved1;
LABEL_10:
    *((_QWORD *)this + 13) = Reserved1;
    v11 = 0;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x112,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  if ( pv.Reserved.Reserved1 )
    CoTaskMemFree(pv.Reserved.Reserved1);
LABEL_11:
  if ( v11 < 0 )
  {
    v12 = 78LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\welcomescreenexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v19[0] = *((const WCHAR **)this + 13);
  string = 0LL;
  v14 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.WelcomeScreen", 0x2Eu, &pv, &string);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v19);
  v11 = CSingleViewShellExperience::RuntimeClassInitialize(
          (HSTRING *)this + 17,
          (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
          a2,
          (HSTRING)v15[1].Reserved.Reserved1,
          string);
  if ( v11 < 0 )
  {
    v12 = 84LL;
    goto LABEL_13;
  }
  if ( *((CWelcomeScreenExperienceManager **)this + 16) != this )
  {
    (*(void (__fastcall **)(CWelcomeScreenExperienceManager *))(*(_QWORD *)this + 8LL))(this);
    v16 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = this;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
