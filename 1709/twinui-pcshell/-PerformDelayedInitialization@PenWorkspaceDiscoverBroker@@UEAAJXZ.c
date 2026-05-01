/*
 * XREFs of ?PerformDelayedInitialization@PenWorkspaceDiscoverBroker@@UEAAJXZ @ 0x1800E48C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::PerformDelayedInitialization(PenWorkspaceDiscoverBroker *this)
{
  __int64 v1; // r10
  unsigned int v2; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
  {
    v2 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)0x8000FFFFLL);
    return v2;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 96LL))(
         *((_QWORD *)this + 3),
         ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 48) >> 64));
  v2 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xB4,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v4);
    return v2;
  }
  return 0LL;
}
