/*
 * XREFs of wil::details::functor_wrapper_void__lambda_833c74d31cece91b209e772662a30093__&___ptr64_::Run @ 0x1800851D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::details::functor_wrapper_void__lambda_833c74d31cece91b209e772662a30093______ptr64_::Run(
        __int64 a1)
{
  _QWORD **v1; // rbx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v5; // [rsp+50h] [rbp+10h] BYREF

  v1 = *(_QWORD ***)(a1 + 8);
  if ( *((_DWORD *)*v1 + 36) )
  {
    v5 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)*v1[1] + 24LL))(
           *v1[1],
           &IID_IImmersiveWindowMessageService,
           &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
           &v5) >= 0 )
    {
      if ( *((_DWORD *)*v1 + 36) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *((_DWORD *)*v1 + 36) = 0;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( *((_DWORD *)*v1 + 37) )
  {
    v5 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, SID *, GUID *, __int64 *))(*(_QWORD *)*v1[1] + 24LL))(
           *v1[1],
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v5) >= 0 )
    {
      if ( *((_DWORD *)*v1 + 37) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      *((_DWORD *)*v1 + 37) = 0;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( *((_DWORD *)*v1 + 38) )
  {
    v5 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)*v1[1] + 24LL))(
           *v1[1],
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           &v5) >= 0 )
    {
      if ( *((_DWORD *)*v1 + 38) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
      *((_DWORD *)*v1 + 38) = 0;
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*v1)[17] + 48LL))((*v1)[17], *v1[1], 0LL);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return 0LL;
}
