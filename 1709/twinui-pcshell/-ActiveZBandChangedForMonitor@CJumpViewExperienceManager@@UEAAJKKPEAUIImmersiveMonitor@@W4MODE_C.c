/*
 * XREFs of ?ActiveZBandChangedForMonitor@CJumpViewExperienceManager@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1800BD4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1800BDB08 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::ActiveZBandChangedForMonitor(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 136) != 2 || ((a3 - 1) & 0xFFFFFFFB) != 0 && (unsigned int)(a3 - 8) > 4 && a3 != 13 )
    return 0LL;
  v3 = CJumpViewExperienceManager::DismissImpl((CJumpViewExperienceManager *)(a1 - 32), 0);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x105,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
