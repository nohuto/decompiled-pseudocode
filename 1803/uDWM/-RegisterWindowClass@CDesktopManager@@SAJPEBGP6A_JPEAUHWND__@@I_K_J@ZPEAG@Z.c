/*
 * XREFs of ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18003C4C0
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003C5B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x180049178 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800491E4 (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
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

  if ( dword_1800CA26C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800CA26C);
    if ( dword_1800CA26C == -1 )
    {
      dword_1800CA104 = -2147023486;
      Init_thread_footer(&dword_1800CA26C);
    }
  }
  v4 = 0;
  v5 = 0;
  memset_0(&WndClass, 0, sizeof(WndClass));
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CA104, 1u, v5, 0x749u);
  }
  if ( v5 != -2147023486 )
    return (unsigned int)v5;
  return v4;
}
