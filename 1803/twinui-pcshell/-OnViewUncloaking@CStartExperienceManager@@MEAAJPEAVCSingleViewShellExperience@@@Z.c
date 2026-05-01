/*
 * XREFs of ?OnViewUncloaking@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800772B0
 * Callers:
 *     ?Uncloak@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C4A4 (-Uncloak@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x1800765D0 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEA_N1PEAPEAUHMONITOR__@@@Z @ 0x180076E74 (-GetMonitorInformation@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@PEAUtagRECT.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewUncloaking(
        ExperienceManagerUtils **this,
        struct CSingleViewShellExperience *a2)
{
  int MonitorInformation; // eax
  __int16 v5; // bx
  int v6; // r8d
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-68h]
  bool v10; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+44h] [rbp-44h] BYREF
  struct tagRECT v12; // [rsp+48h] [rbp-40h] BYREF
  _WORD v13[4]; // [rsp+58h] [rbp-30h] BYREF
  struct tagRECT v14; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  MonitorInformation = CStartExperienceManager::GetMonitorInformation(
                         (CStartExperienceManager *)(this - 11),
                         a2,
                         &v14,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v11,
                         &v10,
                         &v12,
                         0LL);
  v5 = v11;
  if ( MonitorInformation < 0 )
  {
    v8 = 600LL;
LABEL_16:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)MonitorInformation,
      v9);
    goto LABEL_9;
  }
  v6 = 81;
  if ( *((_BYTE *)a2 + 52) )
  {
    v6 = 82;
  }
  else if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v6 = 80;
        break;
      case 2:
        v6 = 77;
        break;
      case 3:
        v6 = 79;
        break;
    }
  }
  else
  {
    v6 = 78;
  }
  MonitorInformation = CExperienceManagerAnimationHelper::Begin((__int64)(this + 57), this[30], v6 | 0x200000u);
  if ( MonitorInformation < 0 )
  {
    v8 = 630LL;
    goto LABEL_16;
  }
LABEL_9:
  v13[1] = *((_WORD *)this + 260);
  v13[0] = 0;
  v13[2] = v5;
  v13[3] = 0;
  RtlPublishWnfStateData(WNF_SHEL_START_VISIBILITY_CHANGED, 0LL, v13, 8LL, 0LL);
  return 0LL;
}
