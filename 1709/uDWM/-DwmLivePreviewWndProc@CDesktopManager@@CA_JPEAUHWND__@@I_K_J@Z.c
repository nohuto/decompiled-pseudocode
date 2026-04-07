/*
 * XREFs of ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18006DF50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180034B78 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 */

LRESULT __fastcall CDesktopManager::DwmLivePreviewWndProc(HWND hWnd, UINT Msg, HWND wParam, LPARAM lParam)
{
  LRESULT v8; // rbx
  bool v9; // si
  char v10; // r15
  signed int v11; // eax
  signed int v12; // edi
  signed int v13; // edi
  signed int LastError; // eax
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp-38h] BYREF

  v16 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v9 = 0;
  v10 = 1;
  if ( Msg == 6 )
  {
    if ( !(_WORD)wParam )
    {
      v9 = 1;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 81) = 0LL;
      goto LABEL_26;
    }
    goto LABEL_29;
  }
  if ( Msg != 31 )
  {
    if ( Msg == 71 )
    {
      if ( (*(_BYTE *)(lParam + 32) & 0x40) != 0 )
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        v13 = 0;
        SetLastError(0);
        if ( SetForegroundWindow(hWnd) )
        {
          LockSetForegroundWindow(1u);
        }
        else
        {
          LastError = GetLastError();
          v13 = LastError;
          if ( LastError > 0 )
            v13 = (unsigned __int16)LastError | 0x80070000;
          if ( v13 >= 0 )
            v13 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x88Au);
        }
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v9 = v13 < 0;
LABEL_26:
        if ( !v9 )
          goto LABEL_28;
        goto LABEL_27;
      }
LABEL_29:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v16 = 0LL;
      v8 = DefWindowProcW(hWnd, Msg, (WPARAM)wParam, lParam);
      goto LABEL_30;
    }
    if ( Msg != 257 )
    {
      if ( Msg == 1028 )
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( !SetWindowPos(wParam, 0LL, 0, 0, 0, 0, lParam != 0 ? 67 : 83) )
        {
          v11 = GetLastError();
          v12 = v11;
          if ( v11 > 0 )
            v12 = (unsigned __int16)v11 | 0x80070000;
          if ( v12 >= 0 )
            v12 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x874u);
          v9 = wParam == hWnd;
        }
        v10 = 0;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        goto LABEL_26;
      }
      goto LABEL_29;
    }
    if ( (unsigned __int64)wParam - 91 > 1 )
      goto LABEL_29;
    v10 = 0;
  }
LABEL_27:
  CLivePreview::Activate(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 60), 0, 0LL, 0LL, 1, 0, 0, 0LL);
LABEL_28:
  if ( v10 )
    goto LABEL_29;
LABEL_30:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v8;
}
