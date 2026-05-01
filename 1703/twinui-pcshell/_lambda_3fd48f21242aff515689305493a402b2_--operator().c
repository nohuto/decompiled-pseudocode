/*
 * XREFs of _lambda_3fd48f21242aff515689305493a402b2_::operator() @ 0x180083688
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_3fd48f21242aff515689305493a402b2__&___ptr64_::Run @ 0x1800853F0 (wil--details--functor_wrapper_void__lambda_3fd48f21242aff515689305493a402b2__-___ptr64_--Run.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_3fd48f21242aff515689305493a402b2_::operator()(_QWORD **a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v10; // [rsp+50h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+18h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[17] + 32LL))((*a1)[17], *a1[1], 0LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x68,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v2);
  v12 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)*a1[1] + 24LL))(
         *a1[1],
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         &v12);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6B,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD *))(*(_QWORD *)v12 + 24LL))(
         v12,
         30LL,
         (unsigned __int64)(*a1 + 10) & -(__int64)(*a1 != 0LL),
         *a1 + 18);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6C,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v4);
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(*(_QWORD *)*a1[1] + 24LL))(
         *a1[1],
         &SID_IImmersiveMonitorService,
         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
         &v11);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v11 + 24LL))(
         v11,
         (unsigned __int64)(*a1 + 11) & -(__int64)(*a1 != 0LL),
         (__int64)*a1 + 148);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v6);
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)*a1[1] + 24LL))(
         *a1[1],
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         &v10);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD *))(*(_QWORD *)v10 + 32LL))(
         v10,
         (unsigned __int64)(*a1 + 12) & -(__int64)(*a1 != 0LL),
         *a1 + 19);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v8);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
}
