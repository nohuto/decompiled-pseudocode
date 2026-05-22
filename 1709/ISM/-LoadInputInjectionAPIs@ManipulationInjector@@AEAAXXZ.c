/*
 * XREFs of ?LoadInputInjectionAPIs@ManipulationInjector@@AEAAXXZ @ 0x1800C2738
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C0560 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ManipulationInjector::LoadInputInjectionAPIs(ManipulationInjector *this)
{
  HMODULE LibraryA; // rax
  FARPROC ProcAddress; // rax
  HMODULE v4; // rcx
  FARPROC v5; // rax
  bool v6; // zf
  unsigned int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_QWORD *)this + 100) )
  {
    LibraryA = LoadLibraryA("InputInjection.Dll");
    *((_QWORD *)this + 100) = LibraryA;
    if ( !LibraryA )
    {
      v7 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x5F8, v8, (const char *)v7);
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
      v9 = wil::verify_hresult<long>(0x80004005);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x608, v10, (const char *)v9);
      JUMPOUT(0x1800C27E4LL);
    }
  }
}
