/*
 * XREFs of ?LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ @ 0x1800AE4B4
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800AC2A0 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

void __fastcall ManipulationInjector::LoadInputInjectionAPIs(ManipulationInjector *this)
{
  HMODULE LibraryA; // rax
  FARPROC ProcAddress; // rax
  HMODULE v4; // rcx
  FARPROC v5; // rax
  bool v6; // zf
  unsigned int v7; // eax
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 100) )
  {
    LibraryA = LoadLibraryA("InputInjection.Dll");
    *((_QWORD *)this + 100) = LibraryA;
    if ( !LibraryA )
    {
      v7 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5F9,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v7);
      __debugbreak();
    }
    ProcAddress = GetProcAddress(LibraryA, "ApiInjectInitialize");
    v4 = (HMODULE)*((_QWORD *)this + 100);
    *((_QWORD *)this + 101) = ProcAddress;
    v5 = GetProcAddress(v4, "ApiInjectTouchEvent");
    v6 = *((_QWORD *)this + 101) == 0LL;
    *((_QWORD *)this + 102) = v5;
    if ( v6 || !v5 )
    {
      v8 = wil::verify_hresult<long>(0x80004005);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x609,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v8);
      JUMPOUT(0x1800AE56ELL);
    }
  }
}
