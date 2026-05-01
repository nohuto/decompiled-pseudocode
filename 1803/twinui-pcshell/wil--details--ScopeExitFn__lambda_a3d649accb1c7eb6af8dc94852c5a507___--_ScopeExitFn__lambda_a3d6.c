/*
 * XREFs of wil::details::ScopeExitFn__lambda_a3d649accb1c7eb6af8dc94852c5a507___::_ScopeExitFn__lambda_a3d649accb1c7eb6af8dc94852c5a507___ @ 0x1801D2858
 * Callers:
 *     _WindowEventDispatcher::AppViewActivationShowRequested_::_1_::dtor$5 @ 0x1801D3D97 (_WindowEventDispatcher--AppViewActivationShowRequested_--_1_--dtor$5.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_a3d649accb1c7eb6af8dc94852c5a507___::_ScopeExitFn__lambda_a3d649accb1c7eb6af8dc94852c5a507___(
        __int64 a1)
{
  _QWORD *v1; // rax
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 24LL))(*v1, 2147500037LL);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        637LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v2);
  }
}
