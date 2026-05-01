/*
 * XREFs of ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800CFD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B0F78 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1800CFDA4 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetWindowOwner(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  wil::details *v5; // rcx
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a3 )
    PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(this, a2, a3);
  SetLastError(0);
  if ( SetWindowLongPtrW(a2, -8, (LONG_PTR)a3) || !GetLastError() )
  {
    if ( a3 )
      SetWindowPos(a2, a3, 0, 0, 0, 0, 0x13u);
    return 0LL;
  }
  else if ( GetLastError() == 1400 )
  {
    return wil::details::GetLastErrorFailHr(v5);
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1C0,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
}
