/*
 * XREFs of ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180160080
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRECT@@@Z @ 0x18015FC5C (-DecideDrawingArea@ImeNotificationExperienceManager@@AEAAJAEAUSize@Foundation@Windows@@PEAUtagRE.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::OnViewPropertiesChanging(
        ImeNotificationExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  const char *v3; // r9
  int v4; // eax
  __int64 result; // rax
  struct tagRECT v6; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    *(_QWORD *)&v6.left = 0LL;
    *(_QWORD *)&v6.right = 0LL;
    if ( (int)ImeNotificationExperienceManager::DecideDrawingArea(
                this,
                (struct CSingleViewShellExperience *)((char *)a2 + 44),
                &v6) >= 0 )
    {
      if ( *((_QWORD *)this + 4) )
      {
        v4 = CSingleViewShellExperience::SetPosition((ImeNotificationExperienceManager *)((char *)this + 8), &v6);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            179LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9B,
                           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
                           v3);
  }
  return result;
}
