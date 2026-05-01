/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18018EF10
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_673908d937c0411dbdcd60700f9c4b37___::Run @ 0x18016D890 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_673908d937c0411dbdcd60700f9c4b37___--Run.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180180A68 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047C58 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0___ @ 0x18018F5E8 (ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0___.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_5d878536394a9e5d6c15e6b3f5940618___ @ 0x18018FECC (Windows--Internal--ComTaskPool--WrapWithTask__lambda_5d878536394a9e5d6c15e6b3f5940618___.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801930C8 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  bool v10; // al
  int v11; // ebx
  IUnknown **v12; // rax
  int v13; // ebx
  const WCHAR *v14; // rcx
  const WCHAR *v15; // rcx
  int v16; // eax
  void *v17; // rcx
  void *v19; // [rsp+38h] [rbp-D0h] BYREF
  const WCHAR *v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  const WCHAR *v22; // [rsp+50h] [rbp-B8h] BYREF
  APTTYPE pAptType[2]; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID pv[3]; // [rsp+60h] [rbp-A8h] BYREF
  const unsigned __int16 *v25; // [rsp+78h] [rbp-90h] BYREF
  const WCHAR **v26; // [rsp+80h] [rbp-88h]
  __int64 *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+98h] [rbp-70h] BYREF
  PVOID v30; // [rsp+A0h] [rbp-68h] BYREF
  PVOID Reserved1; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v32[3]; // [rsp+B0h] [rbp-58h] BYREF
  HSTRING_HEADER v33; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING_HEADER v34; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+28h]

  v32[2] = -2LL;
  v20 = a2;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v8 = ParseAppUserModelId(a1, 0LL, (unsigned __int16 **)pv);
  v9 = a1;
  if ( v8 >= 0 )
    v9 = (const WCHAR *)pv[0];
  v22 = v9;
  v19 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, &v22)[1].Reserved.Reserved1;
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, &v20)[1].Reserved.Reserved1;
  v32[0] = &v30;
  v32[1] = &Reserved1;
  v19 = 0LL;
  v10 = CoGetApartmentType(pAptType, &pAptQualifier) >= 0
     && (pAptType[0] == APTTYPE_STA || pAptType[0] == APTTYPE_MAINSTA);
  v11 = v10 ? 0x20 : 0;
  LODWORD(v21) = 0;
  v20 = 0LL;
  v25 = (const unsigned __int16 *)v32;
  v26 = &v20;
  v27 = &v21;
  v12 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_5d878536394a9e5d6c15e6b3f5940618___(
                       &v22,
                       &v25);
  v13 = Windows::Internal::ComTaskPool::RunTask(1, v11 + 33, 0, 0, *v12, 0LL);
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v13 >= 0 )
  {
    v13 = v21;
    if ( (int)v21 >= 0 )
      v13 = AgileGitPtr::CopyLocal((AgileGitPtr *)&v20, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, &v19);
  }
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  if ( v13 >= 0 )
  {
    v25 = a1;
    v26 = (const WCHAR **)L"Windows.Launch";
    v27 = (__int64 *)v19;
    v28 = a6;
    v16 = ActivateExperienceWithPropertySetCore__lambda_7bec014655fe4d535cb5642aa7e0e9b0_(a3);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE0,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v16);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC2,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB9,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v13);
  }
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v13;
}
