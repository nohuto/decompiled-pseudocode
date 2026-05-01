/*
 * XREFs of ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800F2D80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800032F0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1800F2E94 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetWindowOwner(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  wil::details *v5; // rcx
  const char *v6; // r9
  int LastErrorFailHr; // eax
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
  {
    PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(this, a2, a3);
    SetWindowPos(a2, a3, 0, 0, 0, 0, 0x13u);
    SetWindowPos(a3, a2, 0, 0, 0, 0, 0x13u);
  }
  SetLastError(0);
  if ( SetWindowLongPtrW(a2, -8, (LONG_PTR)a3) || !GetLastError() )
  {
    if ( a3 )
      SetWindowPos(a2, a3, 0, 0, 0, 0, 0x13u);
    v8 = 0;
  }
  else
  {
    if ( GetLastError() == 1400 )
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
    else
      LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x39,
                          (__int64)"internal\\Shell\\inc\\OwnedWindowHelpers.h",
                          v6);
    v8 = LastErrorFailHr;
  }
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1B3,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
