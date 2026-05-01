/*
 * XREFs of ?IsGhostWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A49C
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18001129C (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z @ 0x18002A5CC (-GetRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@_N@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x180193FE8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180194048 (_Init_thread_header.c)
 */

bool __fastcall CApplicationManagerUtility::IsGhostWindow(HWND hWnd, HWND a2)
{
  if ( dword_180244F88 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180244F88);
    if ( dword_180244F88 == -1 )
    {
      word_180244F8C = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_180244F88);
    }
  }
  return (unsigned __int16)GetClassLongW(hWnd, -32) == (unsigned __int16)word_180244F8C;
}
