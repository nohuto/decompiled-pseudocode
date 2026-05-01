/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007FCC0
 * Callers:
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18006B7BC (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _lambda_65c0f5c4ae095b6c4d2379132d65e3aa_::operator() @ 0x1800A1A4C (_lambda_65c0f5c4ae095b6c4d2379132d65e3aa_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0fb00ab6edbf68260218bf5bc91a9d04___::Run @ 0x180259600 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0fb00ab6edbf68260218bf5bc91a9d04___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x18007F74C (ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___.c)
 *     Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___ @ 0x18007FE10 (Windows--Internal--ComTaskPool--_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows-.c)
 *     ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150 (-InternalRelease@-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microso.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18008018C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        const unsigned __int16 *a1,
        const WCHAR *a2,
        unsigned __int16 *a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  int v8; // eax
  unsigned __int16 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int v15; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 *v20; // [rsp+30h] [rbp-71h] BYREF
  __int64 v21; // [rsp+38h] [rbp-69h]
  __int64 v22; // [rsp+40h] [rbp-61h]
  const WCHAR *v23; // [rsp+48h] [rbp-59h] BYREF
  const WCHAR *v24; // [rsp+50h] [rbp-51h]
  __int64 v25; // [rsp+58h] [rbp-49h]
  __int64 v26; // [rsp+60h] [rbp-41h]
  const WCHAR *v27; // [rsp+68h] [rbp-39h] BYREF
  __int64 v28; // [rsp+70h] [rbp-31h] BYREF
  _QWORD v29[2]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v30[24]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-1h]
  _BYTE v32[24]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v29[1] = -2LL;
  v23 = a2;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
  v21 = -1LL;
  v22 = -1LL;
  v8 = ParseAppUserModelId(a1, 0LL, &v20);
  v9 = (unsigned __int16 *)a1;
  if ( v8 >= 0 )
    v9 = v20;
  v27 = v9;
  v19 = 0LL;
  v29[0] = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v32, &v27) + 24);
  v28 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, &v23) + 24);
  Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v19);
  v23 = (const WCHAR *)&v28;
  v24 = (const WCHAR *)v29;
  v12 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread_CLaunchActivatedEventArgs_Windows::ApplicationModel::Activation::IActivatedEventArgs__lambda_a12138ce69fb1c8e0e7d21482d4e0404___(
          v11,
          v10,
          &v19,
          &v23);
  v14 = v12;
  v31 = 0LL;
  v33 = 0LL;
  if ( v12 < 0 )
  {
    v17 = (unsigned int)v12;
    v18 = 191LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)v17,
      v19);
    goto LABEL_5;
  }
  v23 = a1;
  v24 = L"Windows.Launch";
  v25 = v19;
  v26 = a6;
  v15 = ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743_(a3, v13, a5, (__int64)&v23);
  v14 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v15,
      v19);
    v17 = v14;
    v18 = 200LL;
    goto LABEL_8;
  }
LABEL_5:
  Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v20);
  return v14;
}
