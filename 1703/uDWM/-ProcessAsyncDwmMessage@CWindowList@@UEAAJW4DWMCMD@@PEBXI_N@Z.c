/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80
 * Callers:
 *     <none>
 * Callees:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x1800065A4 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18000DB08 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180013ABC (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x1800166B4 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x180033208 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x1800334AC (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x180033588 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180033848 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x1800339C8 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x180034054 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800424F4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x180042604 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x1800426D4 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x1800427A8 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x180049FC4 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800745E8 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007DBEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x180082FBC (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180083BAC (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x180084480 (-ModeChange@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800844D8 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084560 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800845E0 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180084910 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x1800850C4 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x180089A7C (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008A934 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008ACC4 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180094D78 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(CWindowList *a1, int a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // r9d
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  struct CMagnifierControl *v29; // rax
  int v30; // eax
  struct CMagnifierControl *v31; // rax
  int v32; // eax
  struct CMagnifierControl *v33; // rax
  int v34; // eax
  struct CMagnifierControl *v35; // rax
  int v36; // eax
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int v38; // eax
  int v39; // edx
  int v40; // edx
  int v41; // edx
  int v42; // edx
  CScreenRotation *v43; // rcx
  struct CMagnifierControl *v44; // rax
  int v45; // eax
  int v46; // edx
  const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *v47; // rdx
  struct CMagnifierControl *v48; // rax
  int v49; // eax
  struct CMagnifierControl *v50; // rax
  int v51; // eax
  int v52; // edx
  unsigned int v53; // [rsp+20h] [rbp-20h]
  unsigned __int64 v54[2]; // [rsp+30h] [rbp-10h] BYREF

  v6 = -2147467263;
  if ( a2 == 1073741852 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow(a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( !a5 )
  {
    if ( a2 > 1073741892 )
    {
      v19 = a2 - 1073741897;
      if ( !v19 )
      {
        if ( a4 != 8 )
          return v6;
        CWindowList::EndTransition(
          (struct _RTL_CRITICAL_SECTION *)a1,
          (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
        return 0;
      }
      v22 = v19 - 12;
      if ( !v22 )
      {
        if ( a4 != 12 )
          return v6;
        CImmersiveIconicBitmapRegistry::SetNotifyWindow(
          *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 27),
          *(HWND *)(a3 + 4));
        return 0;
      }
      v52 = v22 - 23;
      if ( !v52 )
      {
        if ( a4 != 28 )
          return v6;
        CContactManager::OnTextTether(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
          (const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *)a3);
        return 0;
      }
      if ( v52 != 2 )
        return v6;
      if ( a4 == 8 )
        return (unsigned int)CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
      v24 = -2003303421;
      v53 = 536;
      v6 = -2003303421;
LABEL_68:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, v53);
      return v6;
    }
    if ( a2 == 1073741892 )
    {
      if ( a4 != 20 )
        return v6;
      CContactManager::OnTether(
        *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
        (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
      return 0;
    }
    v13 = a2 - 1073741861;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 9;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            if ( v16 == 19 && a4 == 12 )
            {
              CContactManager::OnShowContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
                (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
              return 0;
            }
            return v6;
          }
          if ( a4 != 8 )
            return v6;
          v17 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
          v6 = v17;
          if ( v17 >= 0 )
            return v6;
          v53 = 487;
        }
        else
        {
          v17 = CWindowList::ModeChange(a1);
          v6 = v17;
          if ( v17 >= 0 )
            return v6;
          v53 = 481;
        }
      }
      else
      {
        v17 = CWindowList::StartupEnd(a1);
        v6 = v17;
        if ( v17 >= 0 )
          return v6;
        v53 = 477;
      }
    }
    else
    {
      v17 = CWindowList::StartupBegin(a1);
      v6 = v17;
      if ( v17 >= 0 )
        return v6;
      v53 = 473;
    }
    goto LABEL_66;
  }
  if ( a2 > 1073741888 )
  {
    if ( a2 <= 1073741923 )
    {
      if ( a2 == 1073741923 )
      {
        if ( a4 != 232 )
        {
          v6 = -2003303421;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x165u);
          return v6;
        }
        v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                                       *(_QWORD *)(a3 + 224));
        if ( MagnifierControlForDesktop )
        {
          v38 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, 1073741923LL, a3);
          v6 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x16Eu);
        }
      }
      else
      {
        v25 = a2 - 1073741906;
        if ( !v25 )
        {
          if ( a4 == 28 )
          {
            CWindowList::RegisterSharedVirtualDesktopVisual(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
              *(HWND *)(a3 + 4),
              *(union _LARGE_INTEGER *)(a3 + 12),
              *(void **)(a3 + 20));
          }
          else
          {
            v6 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x1B8u);
          }
          return v6;
        }
        v26 = v25 - 13;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              if ( v28 != 1 )
                return v6;
              if ( a4 != 232 )
              {
                v6 = -2003303421;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x155u);
                return v6;
              }
              v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v29 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                      *(_QWORD *)(a3 + 224));
              if ( v29 )
              {
                v30 = CMagnifierControl::OnMagnifierApiMessage(v29, 1073741922LL, a3);
                v6 = v30;
                if ( v30 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x15Eu);
              }
            }
            else
            {
              if ( a4 != 120 )
              {
                v6 = -2003303421;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x145u);
                return v6;
              }
              v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v31 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                      *(_QWORD *)(a3 + 12));
              if ( v31 )
              {
                v32 = CMagnifierControl::OnMagnifierApiMessage(v31, 1073741921LL, a3);
                v6 = v32;
                if ( v32 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x14Eu);
              }
            }
          }
          else
          {
            if ( a4 != 20 )
            {
              v6 = -2003303421;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x135u);
              return v6;
            }
            v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v33 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                    *(_QWORD *)(a3 + 12));
            if ( v33 )
            {
              v34 = CMagnifierControl::OnMagnifierApiMessage(v33, 1073741920LL, a3);
              v6 = v34;
              if ( v34 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x13Eu);
            }
          }
        }
        else
        {
          if ( a4 != 24 )
          {
            v6 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x125u);
            return v6;
          }
          v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v35 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
                  *(_QWORD *)(a3 + 12));
          if ( v35 )
          {
            v36 = CMagnifierControl::OnMagnifierApiMessage(v35, 1073741919LL, a3);
            v6 = v36;
            if ( v36 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x12Eu);
          }
        }
      }
      goto LABEL_104;
    }
    v39 = a2 - 1073741926;
    if ( !v39 )
    {
      if ( a4 != 112 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x175u);
        return v6;
      }
      v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v50 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
              *(_QWORD *)(a3 + 4));
      if ( v50 )
      {
        v51 = CMagnifierControl::OnMagnifierApiMessage(v50, 1073741926LL, a3);
        v6 = v51;
        if ( v51 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x17Eu);
      }
      goto LABEL_104;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      if ( a4 != 28 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x185u);
        return v6;
      }
      v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v48 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
              *(_QWORD *)(a3 + 4));
      if ( v48 )
      {
        v49 = CMagnifierControl::OnMagnifierApiMessage(v48, 1073741927LL, a3);
        v6 = v49;
        if ( v49 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x18Eu);
      }
      goto LABEL_104;
    }
    v41 = v40 - 1;
    if ( v41 )
    {
      v42 = v41 - 1;
      if ( v42 )
      {
        if ( v42 == 2 && a4 == 4 )
        {
          v43 = (CScreenRotation *)*((_QWORD *)a1 + 63);
          if ( !v43 )
            return 0;
          return (unsigned int)CScreenRotation::SkipAnimationDelays(v43);
        }
        return v6;
      }
      if ( a4 != 44 )
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x195u);
        return v6;
      }
      v54[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v44 = CWindowList::GetMagnifierControlForDesktop(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 51),
              *(_QWORD *)(a3 + 12));
      if ( v44 )
      {
        v45 = CMagnifierControl::OnMagnifierApiMessage(v44, 1073741929LL, a3);
        v6 = v45;
        if ( v45 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x19Eu);
      }
LABEL_104:
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v54);
      return v6;
    }
    v46 = *(_DWORD *)(a3 + 4);
    if ( v46 )
    {
      v47 = (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)(unsigned int)(v46 - 1);
      if ( (_DWORD)v47 )
      {
        if ( (_DWORD)v47 != 1 )
        {
          v6 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1B2u);
          return v6;
        }
        v17 = CWindowList::OnWindowArrangementEnd(a1, v47);
        v6 = v17;
        if ( v17 >= 0 )
          return v6;
        v53 = 431;
      }
      else
      {
        v17 = CWindowList::OnWindowArrangementContinue(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
        v6 = v17;
        if ( v17 >= 0 )
          return v6;
        v53 = 428;
      }
    }
    else
    {
      v17 = CWindowList::OnWindowArrangementStart(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
      v6 = v17;
      if ( v17 >= 0 )
        return v6;
      v53 = 425;
    }
LABEL_66:
    v24 = v17;
    goto LABEL_68;
  }
  if ( a2 == 1073741888 )
  {
    if ( a4 - 21 > 0x13D7 )
      return v6;
    if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
      return v6;
    if ( a4 != *(_DWORD *)(a3 + 8) + 20 )
      return v6;
    v17 = CContactManager::OnMultiContact(
            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
            (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
    v6 = v17;
    if ( v17 >= 0 )
      return v6;
    v53 = 198;
    goto LABEL_66;
  }
  if ( a2 == 1073741848 )
    return 0;
  if ( a2 <= 1073741848 )
  {
    v7 = a2 - 1073741832;
    if ( !v7 )
    {
      if ( a4 != 28 )
        return v6;
      return (unsigned int)CWindowList::IconChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      v18 = v8 - 4;
      if ( !v18 )
      {
        if ( a4 != 20 )
          return v6;
        CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
        return 0;
      }
      v20 = v18 - 1;
      if ( !v20 )
      {
        if ( a4 != 12 )
          return v6;
        return (unsigned int)CWindowList::DesktopCreate(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
      }
      if ( v20 == 2 && a4 == 12 )
      {
        CWindowList::DesktopFree(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
        return 0;
      }
    }
    else if ( a4 == 12 )
    {
      return (unsigned int)CWindowList::TextChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE *)a3);
    }
    return v6;
  }
  v11 = a2 - 1073741867;
  if ( v11 )
  {
    v12 = v11 - 2;
    if ( !v12 )
    {
      if ( a4 != 16 )
        return v6;
      CWindowList::AnimationChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
      return 0;
    }
    v21 = v12 - 5;
    if ( v21 )
    {
      v23 = v21 - 6;
      if ( !v23 )
      {
        if ( a4 != 8 )
          return v6;
        return (unsigned int)CWindowList::RotationModeChange(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
      }
      if ( v23 != 7 )
        return v6;
      if ( a4 != 56 )
        return v6;
      v17 = CContactManager::OnContact(
              *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 18),
              (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
      v6 = v17;
      if ( v17 >= 0 )
        return v6;
      v53 = 175;
    }
    else
    {
      GetDesktopID(1LL, v54);
      v17 = CDesktopManager::SendSwitchModeCommand(v54[0]);
      v6 = v17;
      if ( v17 >= 0 )
        return v6;
      v53 = 460;
    }
    goto LABEL_66;
  }
  if ( a4 > 0x18 && *(_DWORD *)(a3 + 20) < 0xFFFFFFE8 && a4 >= *(_DWORD *)(a3 + 20) + 24 && !*(_DWORD *)(a3 + 4) )
    return (unsigned int)CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
  return v6;
}
