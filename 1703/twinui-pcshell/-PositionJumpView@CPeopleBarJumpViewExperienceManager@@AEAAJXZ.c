/*
 * XREFs of ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x1800A53AC
 * Callers:
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A5010 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800A55B8 (-GetAppBarPositionForMonitor@CPeopleBarJumpViewExperienceManager@@AEAAJQEAUHMONITOR__@@PEAUtagRE.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x180181774 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CPeopleBarJumpViewExperienceManager::PositionJumpView(CPeopleBarJumpViewExperienceManager *this)
{
  const RECT *v2; // r14
  HMONITOR v3; // rax
  _DWORD *v4; // r15
  int AppBarPositionForMonitor; // ebx
  __int64 v6; // rdx
  int v8; // ebx
  HMONITOR v9; // r8
  HMONITOR v10; // r8
  LONG v11; // eax
  bool v12; // zf
  UINT v13; // r8d
  LONG left; // eax
  LONG v15; // eax
  const char *v16; // r9
  POINT anchorPoint; // [rsp+30h] [rbp-30h] BYREF
  SIZE windowSize; // [rsp+38h] [rbp-28h] BYREF
  RECT excludeRect; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  if ( *((int *)this + 86) <= 0 || *((int *)this + 87) <= 0 )
    return 0LL;
  v2 = (const RECT *)((char *)this + 312);
  *(_QWORD *)&excludeRect.left = 0LL;
  *(_QWORD *)&excludeRect.right = 0LL;
  v3 = MonitorFromRect((LPCRECT)((char *)this + 312), 1u);
  v4 = (_DWORD *)((char *)this + 300);
  AppBarPositionForMonitor = CPeopleBarJumpViewExperienceManager::GetAppBarPositionForMonitor(
                               this,
                               v3,
                               &excludeRect,
                               (CPeopleBarJumpViewExperienceManager *)((char *)this + 300));
  if ( AppBarPositionForMonitor < 0 )
  {
    v6 = 233LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)AppBarPositionForMonitor);
    return (unsigned int)AppBarPositionForMonitor;
  }
  windowSize = (SIZE)*((_QWORD *)this + 43);
  v8 = (unsigned int)MonitorFromRect(v2, 1u);
  windowSize.cx = ExperienceManagerUtils::ScaleByPerMonitorDPI(
                    (ExperienceManagerUtils *)(unsigned int)windowSize.cx,
                    v8,
                    v9);
  v11 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)(unsigned int)windowSize.cy, v8, v10);
  v12 = *v4 == -1;
  v13 = 0x10000;
  windowSize.cy = v11;
  if ( v12 )
    goto LABEL_18;
  switch ( *v4 )
  {
    case 0:
      left = *((_DWORD *)this + 80);
      goto LABEL_15;
    case 1:
      v13 = 65540;
      anchorPoint.x = (v2->left + *((_DWORD *)this + 80)) / 2;
      v15 = *((_DWORD *)this + 81);
      goto LABEL_16;
    case 2:
      left = v2->left;
      v13 = 65544;
      goto LABEL_15;
  }
  if ( *v4 != 3 )
  {
LABEL_18:
    AppBarPositionForMonitor = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11C,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)0x80004001LL);
LABEL_19:
    if ( AppBarPositionForMonitor < 0 )
    {
      v6 = 236LL;
      goto LABEL_5;
    }
    goto LABEL_21;
  }
  v13 = 65572;
  left = (v2->left + *((_DWORD *)this + 80)) / 2;
LABEL_15:
  anchorPoint.x = left;
  v15 = *((_DWORD *)this + 79);
LABEL_16:
  anchorPoint.y = v15;
  if ( !CalculatePopupWindowPosition(&anchorPoint, &windowSize, v13, &excludeRect, (RECT *)((char *)this + 328)) )
  {
    AppBarPositionForMonitor = wil::details::in1diag3::Return_GetLastError(
                                 retaddr,
                                 (void *)0x120,
                                 (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
                                 v16);
    goto LABEL_19;
  }
LABEL_21:
  if ( *((_QWORD *)this + 10) )
  {
    AppBarPositionForMonitor = CSingleViewShellExperience::SetPosition(
                                 (CPeopleBarJumpViewExperienceManager *)((char *)this + 56),
                                 (const struct tagRECT *)((char *)this + 328));
    if ( AppBarPositionForMonitor < 0 )
    {
      v6 = 241LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
