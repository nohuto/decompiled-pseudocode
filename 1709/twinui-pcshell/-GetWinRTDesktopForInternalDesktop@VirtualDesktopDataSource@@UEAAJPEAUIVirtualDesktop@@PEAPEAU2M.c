/*
 * XREFs of ?GetWinRTDesktopForInternalDesktop@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B53D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B5478 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktop(
        RTL_SRWLOCK *this,
        struct IVirtualDesktop *a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a3)
{
  RTL_SRWLOCK *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int WinRTDesktopForInternalDesktopInternal; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = this + 37;
  AcquireSRWLockExclusive(this + 37);
  if ( this[12].Ptr )
  {
    WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                               (VirtualDesktopDataSource *)&this[-2],
                                               a2,
                                               a3);
    v7 = WinRTDesktopForInternalDesktopInternal;
    if ( WinRTDesktopForInternalDesktopInternal >= 0 )
      goto LABEL_6;
    v8 = (unsigned int)WinRTDesktopForInternalDesktopInternal;
    v9 = 180LL;
  }
  else
  {
    v7 = -2147019873;
    v8 = 2147947423LL;
    v9 = 178LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
    (const char *)v8);
LABEL_6:
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return v7;
}
