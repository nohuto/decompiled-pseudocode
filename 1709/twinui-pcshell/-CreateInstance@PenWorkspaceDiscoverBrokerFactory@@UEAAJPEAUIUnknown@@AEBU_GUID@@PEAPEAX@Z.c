/*
 * XREFs of ?CreateInstance@PenWorkspaceDiscoverBrokerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E4DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PenWorkspaceDiscoverBrokerFactory::CreateInstance(
        PenWorkspaceDiscoverBrokerFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int v4; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    v4 = -2147221232;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)0x80040110LL);
    return v4;
  }
  v6 = (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 2))(*((_QWORD *)this + 2), a3, a4);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xFB,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)v6);
    return v4;
  }
  return 0LL;
}
