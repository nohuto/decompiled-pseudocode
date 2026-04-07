/*
 * XREFs of ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003B144
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003B0AC (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180084680 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x180084A84 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 */

__int64 __fastcall CWindowList::GetWindowAttribute(CWindowList *this, struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  unsigned int v4; // edi
  HWND v5; // rdx
  int CaptionButtonBounds; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2147024872;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( *((_DWORD *)a2 + 4) != 8 )
  {
    if ( *((_DWORD *)a2 + 4) == 5 )
    {
      if ( *((_DWORD *)a2 + 5) != 16 )
        goto LABEL_5;
      CaptionButtonBounds = CWindowList::GetCaptionButtonBounds(this, v5, (struct tagRECT *)((char *)a2 + 24));
    }
    else
    {
      if ( *((_DWORD *)a2 + 4) != 12 )
      {
        v4 = -2147024809;
        goto LABEL_5;
      }
      if ( *((_DWORD *)a2 + 5) != 20 )
        goto LABEL_5;
      CaptionButtonBounds = CWindowList::GetNcAdornmentInfoAttribute(
                              this,
                              v5,
                              (struct MILCMD_DWM_WINDOWATTRIBUTE *)((char *)a2 + 24));
    }
    goto LABEL_4;
  }
  if ( *((_DWORD *)a2 + 5) == 16 )
  {
    CaptionButtonBounds = CWindowList::GetExtendedFrameBounds(this, v5, (struct tagRECT *)((char *)a2 + 24));
LABEL_4:
    v4 = CaptionButtonBounds;
  }
LABEL_5:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
