/*
 * XREFs of ?SubscribeToServices@PenWorkspaceDiscoverBrokerFactory@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E4C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::SubscribeToServices(
        PenWorkspaceDiscoverBrokerFactory *this,
        struct IServiceProvider *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)(*((_QWORD *)this + 3) + 48LL) + 32LL))(
         *((_QWORD *)this + 3) + 48LL,
         a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xDC,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
