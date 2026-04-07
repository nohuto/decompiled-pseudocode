/*
 * XREFs of ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18003F540
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003DF00 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::RegisterWindowClass(
        const unsigned __int16 *a1,
        __int64 (*a2)(HWND, unsigned int, unsigned __int64, __int64),
        unsigned __int16 *a3)
{
  unsigned int v4; // edi
  signed int v5; // ebx
  ATOM v6; // ax
  signed int LastError; // eax
  WNDCLASSW WndClass; // [rsp+30h] [rbp-58h] BYREF

  if ( dword_1800C1A64 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C1A64);
    if ( dword_1800C1A64 == -1 )
    {
      dword_1800C1898 = -2147023486;
      Init_thread_footer(&dword_1800C1A64);
    }
  }
  v4 = 0;
  WndClass.style = 0;
  v5 = 0;
  memset_0(&WndClass.lpfnWndProc, 0, 0x40uLL);
  WndClass.lpszClassName = L"LivePreview";
  WndClass.lpfnWndProc = (WNDPROC)CDesktopManager::DwmLivePreviewWndProc;
  WndClass.hInstance = g_hInstance;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  SetLastError(0);
  v6 = RegisterClassW(&WndClass);
  *a3 = v6;
  if ( !v6 )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C1898, 1u, v5, 0x6E3u);
  }
  if ( v5 != -2147023486 )
    return (unsigned int)v5;
  return v4;
}
