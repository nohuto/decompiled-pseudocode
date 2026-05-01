/*
 * XREFs of ?PerformDelayedInitialization@PenWorkspaceDiscoverBroker@@UEAAJXZ @ 0x180192850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBroker::PerformDelayedInitialization(PenWorkspaceDiscoverBroker *this)
{
  __int64 v1; // r10
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 3);
  if ( !v1 )
  {
    v2 = -2147418113;
    v3 = 179LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 96LL))(
         *((_QWORD *)this + 3),
         ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 40) >> 64));
  if ( v2 < 0 )
  {
    v3 = 180LL;
    goto LABEL_3;
  }
  return 0LL;
}
