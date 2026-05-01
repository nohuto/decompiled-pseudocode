/*
 * XREFs of ?PerformDelayedInitialization@PenWorkspaceDiscoverBrokerFactory@@UEAAJXZ @ 0x1800E4CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::PerformDelayedInitialization(
        PenWorkspaceDiscoverBrokerFactory *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 3) + 48LL) + 40LL))(*((_QWORD *)this + 3) + 48LL);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xE2,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
