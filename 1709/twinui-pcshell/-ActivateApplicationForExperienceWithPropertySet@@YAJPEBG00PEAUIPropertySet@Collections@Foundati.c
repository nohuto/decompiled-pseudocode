/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x1801DDD24
 * Callers:
 *     _lambda_3fdb60befb1dd70167fe026bdb430be3_::operator() @ 0x18019C298 (_lambda_3fdb60befb1dd70167fe026bdb430be3_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0dafa6fcbaf9466ecad86995bac6b59___::Run @ 0x1801B2B30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0dafa6fcbaf9466ecad86995bac6b59___--Run.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x1801CFFE8 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180048C98 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___ @ 0x1801DE044 (ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743___.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801E12A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        const unsigned __int16 *a1,
        const WCHAR *a2,
        unsigned __int16 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // eax
  const WCHAR *v9; // rcx
  void *v10; // r14
  unsigned int v11; // esi
  IUnknown *v12; // rdi
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  int v15; // ebx
  __int64 v16; // rcx
  int v17; // eax
  void *v18; // rcx
  void *v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  APTTYPE pAptType[2]; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID pv[3]; // [rsp+58h] [rbp-B0h] BYREF
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+70h] [rbp-98h] BYREF
  const WCHAR *v26; // [rsp+78h] [rbp-90h] BYREF
  const WCHAR *v27; // [rsp+80h] [rbp-88h] BYREF
  __int64 v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+90h] [rbp-78h] BYREF
  IUnknown *v30; // [rsp+98h] [rbp-70h]
  __int128 v31; // [rsp+A0h] [rbp-68h]
  __int64 *v32; // [rsp+B0h] [rbp-58h]
  _QWORD v33[8]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v34[24]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v35; // [rsp+110h] [rbp+8h]
  _BYTE v36[24]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v37; // [rsp+130h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v33[6] = -2LL;
  v27 = a2;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v8 = ParseAppUserModelId(a1, 0LL, (unsigned __int16 **)pv);
  v9 = a1;
  v10 = pv[0];
  if ( v8 >= 0 )
    v9 = (const WCHAR *)pv[0];
  v26 = v9;
  v20 = 0LL;
  v29 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v36, &v26) + 24);
  v28 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v34, &v27) + 24);
  v33[0] = &v28;
  v33[1] = &v29;
  v20 = 0LL;
  if ( CoGetApartmentType(pAptType, pAptQualifier) < 0 || pAptType[0] && pAptType[0] != APTTYPE_MAINSTA )
    v11 = 33;
  else
    v11 = 65;
  LODWORD(v21) = 0;
  v22 = 0LL;
  *(_QWORD *)&v31 = v33;
  *((_QWORD *)&v31 + 1) = &v22;
  v32 = &v21;
  v12 = 0LL;
  v33[7] = 0LL;
  v13 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = &IAppViewDataSourceAdapter::`vftable';
    v13[3] = 1;
    *(_QWORD *)v13 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v14 = off_180214058;
    *((_OWORD *)v14 + 1) = v31;
    *((_QWORD *)v14 + 4) = v32;
    v12 = (IUnknown *)v14;
  }
  v30 = v12;
  v15 = Windows::Internal::ComTaskPool::RunTask(1, v11, 0, 0, v12, 0LL);
  if ( v12 )
  {
    v30 = 0LL;
    ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  }
  if ( v15 >= 0 )
  {
    v15 = v21;
    if ( (int)v21 >= 0 )
      v15 = AgileGitPtr::CopyLocal((AgileGitPtr *)&v22, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, &v20);
  }
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v35 = 0LL;
  v37 = 0LL;
  if ( v15 >= 0 )
  {
    v33[2] = a1;
    v33[3] = L"Windows.Launch";
    v33[4] = v20;
    v33[5] = a6;
    v17 = ActivateExperienceWithPropertySetCore__lambda_1494137edbeae93f79446e9df68cd743_(a3);
    v15 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v17);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xBF,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v15);
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    pv[0] = 0LL;
  }
  return (unsigned int)v15;
}
