/*
 * XREFs of ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B7A30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x1800B8010 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1801DB1A4 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@_ea_1801DB1A4.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaking(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int MonitorInformation; // eax
  __int16 v5; // bx
  __int64 v6; // rdx
  __int64 v7; // r8
  bool v9; // [rsp+40h] [rbp-48h] BYREF
  int v10; // [rsp+44h] [rbp-44h] BYREF
  struct tagRECT v11; // [rsp+48h] [rbp-40h] BYREF
  _WORD v12[4]; // [rsp+58h] [rbp-30h] BYREF
  struct tagRECT v13; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)((char *)this - 96),
                         a2,
                         &v13,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v10,
                         &v9,
                         &v11,
                         0LL);
  v5 = v10;
  if ( MonitorInformation < 0 )
  {
    v6 = 646LL;
LABEL_15:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorInformation);
    goto LABEL_16;
  }
  v7 = 81LL;
  if ( *((_BYTE *)a2 + 52) )
  {
    v7 = 82LL;
  }
  else if ( v10 )
  {
    switch ( v10 )
    {
      case 1:
        v7 = 80LL;
        break;
      case 2:
        v7 = 77LL;
        break;
      case 3:
        v7 = 79LL;
        break;
    }
  }
  else
  {
    v7 = 78LL;
  }
  LODWORD(v7) = v7 | 0x200000;
  MonitorInformation = CExperienceManagerAnimationHelper::Begin((char *)this + 448, *((_QWORD *)this + 29), v7);
  if ( MonitorInformation < 0 )
  {
    v6 = 676LL;
    goto LABEL_15;
  }
LABEL_16:
  v12[1] = *((_WORD *)this + 256);
  v12[0] = 0;
  v12[2] = v5;
  v12[3] = 0;
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v12, 8LL, 0LL);
  return 0LL;
}
