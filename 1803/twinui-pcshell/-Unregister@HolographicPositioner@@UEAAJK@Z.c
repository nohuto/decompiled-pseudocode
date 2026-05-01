/*
 * XREFs of ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x1801B1180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x18010E6B8 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall HolographicPositioner::Unregister(RTL_SRWLOCK *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = AgileRegistrationList::Unregister(this + 27, a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F5,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
