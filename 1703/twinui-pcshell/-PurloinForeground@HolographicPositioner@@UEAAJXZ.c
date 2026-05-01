/*
 * XREFs of ?PurloinForeground@HolographicPositioner@@UEAAJXZ @ 0x1800D9400
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8600 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1800C068C (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HolographicPositioner::PurloinForeground(
        HolographicPositioner *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int UserDisplayContext; // ebx
  __int64 v4; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v9,
                         a2);
  if ( UserDisplayContext < 0 )
  {
    v4 = 868LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  if ( v9 != 1 )
  {
    UserDisplayContext = -2147024891;
    v6 = 869LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  v7 = *((_QWORD *)this + 10);
  if ( !v7 )
  {
    UserDisplayContext = -2147467261;
    v6 = 873LL;
    goto LABEL_7;
  }
  UserDisplayContext = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  if ( UserDisplayContext < 0 )
  {
    v4 = 874LL;
    goto LABEL_3;
  }
  return 0LL;
}
