/*
 * XREFs of ?TabletModeChanged@ShellPositionerManager@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1802BA760
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerManager::TabletModeChanged(__int64 a1, int a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != *(_DWORD *)(a1 + 32) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, bool, bool))(*(_QWORD *)(a1 - 24) + 40LL))(
           a1 - 24,
           *(_DWORD *)(a1 + 32) == 1,
           a2 == 1);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        443LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v4);
    *(_DWORD *)(a1 + 32) = a2;
  }
  return 0LL;
}
