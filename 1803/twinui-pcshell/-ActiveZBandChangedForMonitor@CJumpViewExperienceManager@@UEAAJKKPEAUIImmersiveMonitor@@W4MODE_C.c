/*
 * XREFs of ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007B200
 * Callers:
 *     <none>
 * Callees:
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18007B1C8 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z @ 0x180128884 (-IsBelowImmersiveLauncher@ZBandHelpers@@YA_NW4ZBID@@@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // r8d
  __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 136) != 2 || !(unsigned __int8)ZBandHelpers::IsBelowImmersiveLauncher(a3) && v4 != 13 )
    return 0LL;
  v6 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)(v5 - 32), 0);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFE,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v6,
    v8);
  return v7;
}
