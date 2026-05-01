/*
 * XREFs of ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180096260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180096368 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096D0C (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180096F04 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnMessage(
        CActionCenterExperienceManager *this,
        int a2,
        char *a3,
        const WCHAR *a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ebx
  char *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 == 26 )
    {
      if ( (_DWORD)a3 == 67 )
      {
        v5 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)((char *)this - 56));
        v6 = v5;
        if ( v5 >= 0 )
          v6 = 0;
        else
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x23C,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
        if ( v6 < 0 )
        {
          v7 = (unsigned int)v6;
          v8 = 530LL;
LABEL_19:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v8,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)v7);
        }
      }
      else if ( a4 && CompareStringOrdinal(a4, -1, L"ImmersiveColorSet", -1, 0) == 2 )
      {
        v9 = CActionCenterExperienceManager::RaiseApplicationEvent(
               (CActionCenterExperienceManager *)((char *)this - 56),
               L"ThemeChanged",
               1);
        v10 = v9;
        if ( v9 >= 0 )
          v10 = 0;
        else
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x238,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v9);
        if ( v10 < 0 )
        {
          v7 = (unsigned int)v10;
          v8 = 534LL;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    v11 = (char *)this - 56;
    if ( a3 == v11 )
    {
      v12 = CActionCenterExperienceManager::OnTargetedMessage(v11, (unsigned __int16)a4);
      if ( v12 < 0 )
      {
        v7 = (unsigned int)v12;
        v8 = 524LL;
        goto LABEL_19;
      }
    }
  }
  return 0LL;
}
