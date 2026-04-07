/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000F590 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18002BE34 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002C010 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x18002C110 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18002C46C (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x18002C534 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x18002C76C (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18002CB64 (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180032598 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18003E4E0 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18003E5F0 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18003E6C0 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18003E720 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x180041920 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180070084 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180079C18 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x180083E2C (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180084A64 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x1800853C0 (-ModeChange@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180085418 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800854A0 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180085520 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180085A00 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x180085DFC (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18008A434 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18008B2B8 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18008B3E4 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18008B5E0 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x18008B964 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180099A30 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(CWindowList *a1, int a2, __int64 a3, unsigned int a4, char a5)
{
  unsigned int v7; // ebx
  int v8; // edx
  int v9; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // eax
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // r9d
  struct CMagnifierControl *v29; // rax
  int v30; // eax
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  struct CMagnifierControl *v36; // rax
  int v37; // eax
  struct CMagnifierControl *v38; // rax
  int v39; // eax
  struct CMagnifierControl *v40; // rax
  int v41; // eax
  struct CMagnifierControl *v42; // rax
  int v43; // eax
  struct CMagnifierControl *v44; // rax
  int v45; // eax
  struct CMagnifierControl *v46; // rax
  int v47; // eax
  int v48; // edx
  const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *v49; // rdx
  int v50; // edx
  int v51; // edx
  int v52; // edx
  int v53; // edx
  CScreenRotation *v54; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int v56; // eax
  struct CMagnifierControl *v57; // rax
  int v58; // eax
  struct CMagnifierControl *v59; // rax
  int v60; // eax
  struct CMagnifierControl *v61; // rax
  int v62; // eax
  int v63; // edx
  unsigned int v64; // [rsp+20h] [rbp-20h]
  unsigned __int64 v65[2]; // [rsp+30h] [rbp-10h] BYREF

  v7 = -2147467263;
  if ( a2 == 1073741852 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow(a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( !a5 )
  {
    if ( a2 > 1073741892 )
    {
      v22 = a2 - 1073741897;
      if ( !v22 )
      {
        if ( a4 != 8 )
          return v7;
        CWindowList::EndTransition(a1, (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
        return 0;
      }
      v24 = v22 - 12;
      if ( !v24 )
      {
        if ( a4 != 12 )
          return v7;
        CImmersiveIconicBitmapRegistry::SetNotifyWindow(
          *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 33),
          *(HWND *)(a3 + 4));
        return 0;
      }
      v63 = v24 - 28;
      if ( !v63 )
      {
        if ( a4 != 28 )
          return v7;
        CContactManager::OnTextTether(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
          (const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *)a3);
        return 0;
      }
      if ( v63 != 5 )
        return v7;
      if ( a4 == 8 )
        return (unsigned int)CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
      v28 = -2003303421;
      v64 = 585;
      v7 = -2003303421;
LABEL_79:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v64);
      return v7;
    }
    if ( a2 == 1073741892 )
    {
      if ( a4 != 20 )
        return v7;
      CContactManager::OnTether(
        *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
        (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
      return 0;
    }
    v17 = a2 - 1073741861;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 9;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            if ( v20 == 19 && a4 == 12 )
            {
              CContactManager::OnShowContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
                (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
              return 0;
            }
            return v7;
          }
          if ( a4 != 8 )
            return v7;
          v21 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
          v7 = v21;
          if ( v21 >= 0 )
            return v7;
          v64 = 536;
        }
        else
        {
          v21 = CWindowList::ModeChange(a1);
          v7 = v21;
          if ( v21 >= 0 )
            return v7;
          v64 = 530;
        }
      }
      else
      {
        v21 = CWindowList::StartupEnd(a1);
        v7 = v21;
        if ( v21 >= 0 )
          return v7;
        v64 = 526;
      }
    }
    else
    {
      v21 = CWindowList::StartupBegin(a1);
      v7 = v21;
      if ( v21 >= 0 )
        return v7;
      v64 = 522;
    }
    goto LABEL_77;
  }
  if ( a2 > 1073741921 )
  {
    if ( a2 > 1073741930 )
    {
      v50 = a2 - 1073741931;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( v52 )
          {
            v53 = v52 - 1;
            if ( v53 )
            {
              if ( v53 == 2 && a4 == 4 )
              {
                v54 = (CScreenRotation *)*((_QWORD *)a1 + 63);
                if ( !v54 )
                  return 0;
                return (unsigned int)CScreenRotation::SkipAnimationDelays(v54);
              }
              return v7;
            }
            if ( a4 != 112 )
            {
              v7 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1C5u);
              return v7;
            }
            v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                                           *(_QWORD *)(a3 + 4));
            if ( MagnifierControlForDesktop )
            {
              v56 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, 1073741934LL, a3);
              v7 = v56;
              if ( v56 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x1CFu);
            }
          }
          else
          {
            if ( a4 != 16 )
            {
              v7 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1B5u);
              return v7;
            }
            v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v57 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                    *(_QWORD *)(a3 + 4));
            if ( v57 )
            {
              v58 = CMagnifierControl::OnMagnifierApiMessage(v57, 1073741933LL, a3);
              v7 = v58;
              if ( v58 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x1BEu);
            }
          }
        }
        else
        {
          if ( a4 != 24 )
          {
            v7 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1A5u);
            return v7;
          }
          v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v59 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                  *(_QWORD *)(a3 + 12));
          if ( v59 )
          {
            v60 = CMagnifierControl::OnMagnifierApiMessage(v59, 1073741932LL, a3);
            v7 = v60;
            if ( v60 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x1AEu);
          }
        }
      }
      else
      {
        if ( a4 != 44 )
        {
          v7 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x195u);
          return v7;
        }
        v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v61 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                *(_QWORD *)(a3 + 12));
        if ( v61 )
        {
          v62 = CMagnifierControl::OnMagnifierApiMessage(v61, 1073741931LL, a3);
          v7 = v62;
          if ( v62 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x19Eu);
        }
      }
LABEL_88:
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v65);
      return v7;
    }
    if ( a2 != 1073741930 )
    {
      v31 = a2 - 1073741922;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 1;
            if ( v34 )
            {
              v35 = v34 - 3;
              if ( v35 )
              {
                if ( v35 != 1 )
                  return v7;
                if ( a4 != 28 )
                {
                  v7 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x185u);
                  return v7;
                }
                v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
                EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                v36 = CWindowList::GetMagnifierControlForDesktop(
                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                        *(_QWORD *)(a3 + 4));
                if ( v36 )
                {
                  v37 = CMagnifierControl::OnMagnifierApiMessage(v36, 1073741929LL, a3);
                  v7 = v37;
                  if ( v37 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x18Eu);
                }
              }
              else
              {
                if ( a4 != 112 )
                {
                  v7 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x175u);
                  return v7;
                }
                v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
                EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                v38 = CWindowList::GetMagnifierControlForDesktop(
                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                        *(_QWORD *)(a3 + 4));
                if ( v38 )
                {
                  v39 = CMagnifierControl::OnMagnifierApiMessage(v38, 1073741928LL, a3);
                  v7 = v39;
                  if ( v39 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x17Eu);
                }
              }
            }
            else
            {
              if ( a4 != 232 )
              {
                v7 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x165u);
                return v7;
              }
              v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v40 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                      *(_QWORD *)(a3 + 224));
              if ( v40 )
              {
                v41 = CMagnifierControl::OnMagnifierApiMessage(v40, 1073741925LL, a3);
                v7 = v41;
                if ( v41 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x16Eu);
              }
            }
          }
          else
          {
            if ( a4 != 232 )
            {
              v7 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x155u);
              return v7;
            }
            v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v42 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                    *(_QWORD *)(a3 + 224));
            if ( v42 )
            {
              v43 = CMagnifierControl::OnMagnifierApiMessage(v42, 1073741924LL, a3);
              v7 = v43;
              if ( v43 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, 0x15Eu);
            }
          }
        }
        else
        {
          if ( a4 != 120 )
          {
            v7 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x145u);
            return v7;
          }
          v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v44 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                  *(_QWORD *)(a3 + 12));
          if ( v44 )
          {
            v45 = CMagnifierControl::OnMagnifierApiMessage(v44, 1073741923LL, a3);
            v7 = v45;
            if ( v45 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x14Eu);
          }
        }
      }
      else
      {
        if ( a4 != 20 )
        {
          v7 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x135u);
          return v7;
        }
        v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v46 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                *(_QWORD *)(a3 + 12));
        if ( v46 )
        {
          v47 = CMagnifierControl::OnMagnifierApiMessage(v46, 1073741922LL, a3);
          v7 = v47;
          if ( v47 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x13Eu);
        }
      }
      goto LABEL_88;
    }
    v48 = *(_DWORD *)(a3 + 4);
    if ( v48 )
    {
      v49 = (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)(unsigned int)(v48 - 1);
      if ( (_DWORD)v49 )
      {
        if ( (_DWORD)v49 != 1 )
        {
          v7 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1E3u);
          return v7;
        }
        v21 = CWindowList::OnWindowArrangementEnd(a1, v49);
        v7 = v21;
        if ( v21 >= 0 )
          return v7;
        v64 = 480;
      }
      else
      {
        v21 = CWindowList::OnWindowArrangementContinue(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
        v7 = v21;
        if ( v21 >= 0 )
          return v7;
        v64 = 477;
      }
    }
    else
    {
      v21 = CWindowList::OnWindowArrangementStart(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
      v7 = v21;
      if ( v21 >= 0 )
        return v7;
      v64 = 474;
    }
LABEL_77:
    v28 = v21;
    goto LABEL_79;
  }
  if ( a2 == 1073741921 )
  {
    if ( a4 != 24 )
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x125u);
      return v7;
    }
    v65[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v29 = CWindowList::GetMagnifierControlForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
            *(_QWORD *)(a3 + 12));
    if ( v29 )
    {
      v30 = CMagnifierControl::OnMagnifierApiMessage(v29, 1073741921LL, a3);
      v7 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x12Eu);
    }
    goto LABEL_88;
  }
  if ( a2 > 1073741867 )
  {
    v15 = a2 - 1073741869;
    if ( !v15 )
    {
      if ( a4 == 16 )
        CWindowList::AnimationChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
      v16 = a4 - 16;
      return v16 != 0 ? 0x80004001 : 0;
    }
    v23 = v15 - 5;
    if ( v23 )
    {
      v25 = v23 - 6;
      if ( !v25 )
      {
        if ( a4 != 8 )
          return v7;
        return (unsigned int)CWindowList::RotationModeChange(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
      }
      v26 = v25 - 7;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 == 18 )
          {
            if ( a4 == 28 )
            {
              CWindowList::RegisterSharedVirtualDesktopVisual(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 56),
                *(HWND *)(a3 + 4),
                *(union _LARGE_INTEGER *)(a3 + 12),
                *(void **)(a3 + 20));
            }
            else
            {
              v7 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1E9u);
            }
          }
          return v7;
        }
        if ( a4 - 21 > 0x13D7 )
          return v7;
        if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
          return v7;
        if ( a4 != *(_DWORD *)(a3 + 8) + 20 )
          return v7;
        v21 = CContactManager::OnMultiContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
        v7 = v21;
        if ( v21 >= 0 )
          return v7;
        v64 = 198;
      }
      else
      {
        if ( a4 != 56 )
          return v7;
        v21 = CContactManager::OnContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 22),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
        v7 = v21;
        if ( v21 >= 0 )
          return v7;
        v64 = 175;
      }
    }
    else
    {
      GetDesktopID(1LL, v65);
      v21 = CDesktopManager::SendSwitchModeCommand(v65[0]);
      v7 = v21;
      if ( v21 >= 0 )
        return v7;
      v64 = 509;
    }
    goto LABEL_77;
  }
  if ( a2 != 1073741867 )
  {
    v8 = a2 - 1073741832;
    if ( !v8 )
    {
      if ( a4 != 28 )
        return v7;
      return (unsigned int)CWindowList::IconChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a4 == 12 )
        return (unsigned int)CWindowList::TextChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE *)a3);
      return v7;
    }
    v12 = v9 - 4;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        if ( a4 != 12 )
          return v7;
        return (unsigned int)CWindowList::DesktopCreate(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
      }
      v14 = v13 - 2;
      if ( v14 )
      {
        if ( v14 == 8 )
          return 0;
        return v7;
      }
      if ( a4 == 12 )
        CWindowList::DesktopFree(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
      v16 = a4 - 12;
    }
    else
    {
      if ( a4 == 20 )
        CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
      v16 = a4 - 20;
    }
    return v16 != 0 ? 0x80004001 : 0;
  }
  if ( a4 > 0x18 && *(_DWORD *)(a3 + 20) < 0xFFFFFFE8 && a4 >= *(_DWORD *)(a3 + 20) + 24 && !*(_DWORD *)(a3 + 4) )
    return (unsigned int)CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
  return v7;
}
