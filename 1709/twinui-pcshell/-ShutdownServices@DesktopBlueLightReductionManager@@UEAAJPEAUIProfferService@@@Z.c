/*
 * XREFs of ?ShutdownServices@DesktopBlueLightReductionManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800864C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DesktopBlueLightReductionManager::ShutdownServices(
        DesktopBlueLightReductionManager *this,
        struct IProfferService *a2)
{
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 17) + 56LL))(*((_QWORD *)this + 17));
    if ( v2 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0xAA,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAD,
                           (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
                           v3);
  }
  return result;
}
