/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400011C0
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1400010F0 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001130 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x14000776C (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 */

__int64 __fastcall CDwmAppHost::NotifyWndProc(CDwmAppHost *this, HWND a2, void *a3, WPARAM a4, const wchar_t *lParam)
{
  __int64 v5; // rbx
  __int64 result; // rax
  CDwmAppHost *v7; // rcx
  unsigned int v8; // edx

  v5 = 0LL;
  if ( (unsigned int)a3 >= 0x1B && (unsigned int)a3 < 0x31A )
    return DefWindowProcW(a2, (UINT)a3, a4, (LPARAM)lParam);
  if ( (_DWORD)a3 == 26 )
  {
    if ( a4 > 0x2019 || (unsigned int)a4 < 6 )
      return v5;
    switch ( (_DWORD)a4 )
    {
      case 6:
      case 0x2A:
        if ( !lParam )
          return v5;
        break;
      case 0x2F:
        if ( !lParam || _wcsicmp(lParam, L"devices") )
          return v5;
        break;
      case 0x2019:
        v8 = 256;
        goto LABEL_19;
      default:
        return v5;
    }
    v8 = 3;
LABEL_19:
    CDwmAppHost::LpcNotifySettingsChange(this, v8, a3);
    return v5;
  }
  if ( (unsigned int)a3 > 0x1A )
  {
    this = (CDwmAppHost *)(unsigned int)((_DWORD)a3 - 794);
    if ( (_DWORD)a3 != 794 )
    {
      v7 = (CDwmAppHost *)(unsigned int)((_DWORD)a3 - 1026);
      if ( (_DWORD)a3 == 1026 )
      {
        CDwmAppHost::OnReportEvent(v7, a4, 0LL, 0);
        return v5;
      }
      if ( (_DWORD)a3 == 1027 )
      {
        CDwmAppHost::OnReportEvent(v7, a4, (__int64)lParam, 1);
        return v5;
      }
      return DefWindowProcW(a2, (UINT)a3, a4, (LPARAM)lParam);
    }
    v8 = 4;
    goto LABEL_19;
  }
  switch ( (_DWORD)a3 )
  {
    case 2:
      PostQuitMessage(0);
      return 0LL;
    case 0x10:
      DestroyWindow(hWnd);
      result = 0LL;
      hWnd = 0LL;
      break;
    case 0x15:
      CDwmAppHost::LpcNotifySettingsChange(this, 8u, a3);
      return v5;
    default:
      return DefWindowProcW(a2, (UINT)a3, a4, (LPARAM)lParam);
  }
  return result;
}
