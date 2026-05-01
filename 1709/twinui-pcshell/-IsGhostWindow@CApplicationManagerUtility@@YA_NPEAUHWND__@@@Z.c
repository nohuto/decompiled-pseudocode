/*
 * XREFs of ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BD98
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x1800119C0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z @ 0x18002BEC4 (-GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 */

bool __fastcall CApplicationManagerUtility::IsGhostWindow(HWND hWnd, HWND a2)
{
  if ( dword_1802BAD78 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802BAD78);
    if ( dword_1802BAD78 == -1 )
    {
      word_1802BAD7C = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1802BAD78);
    }
  }
  return (unsigned __int16)GetClassLongW(hWnd, -32) == (unsigned __int16)word_1802BAD7C;
}
