/*
 * XREFs of _lambda_e4ee804990591e655a0497df19d4e172_::operator() @ 0x1801F1640
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e4ee804990591e655a0497df19d4e172___::Run @ 0x1801F3290 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e4ee804990591e655a0497df19d4e172___--Run.c)
 * Callees:
 *     ??$?0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z @ 0x18008C068 (--$-0$0DM@@StringReference@Internal@Windows@@QEAA@AEAY0DM@$$CBG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e4ee804990591e655a0497df19d4e172_::operator()(HWND *a1)
{
  DWORD WindowThreadProcessId; // ebx
  const unsigned __int16 (*v2)[60]; // rdx
  HSTRING *v3; // rax
  int ActivationFactory; // eax
  int v5; // eax
  int v6; // eax
  DWORD dwProcessId; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v11[8]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h]
  HSTRING string; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v12 = -2LL;
  WindowThreadProcessId = GetWindowThreadProcessId(*a1, &dwProcessId);
  v10 = 0LL;
  v3 = Windows::Internal::StringReference::StringReference(&string, v2);
  ActivationFactory = RoGetActivationFactory(*v3, &GUID_365b4229_bffa_4446_8dc8_a293bebbe536, &v10);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2054LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v9 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v10 + 48LL))(
         v10,
         dwProcessId,
         WindowThreadProcessId,
         &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2060LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 48LL))(v9, v11);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      2063LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
