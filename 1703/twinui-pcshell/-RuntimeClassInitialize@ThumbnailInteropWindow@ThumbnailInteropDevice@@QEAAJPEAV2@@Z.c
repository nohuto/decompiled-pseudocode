/*
 * XREFs of ?RuntimeClassInitialize@ThumbnailInteropWindow@ThumbnailInteropDevice@@QEAAJPEAV2@@Z @ 0x180166D30
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VThumbnailInteropWindow@ThumbnailInteropDevice@@QEAV2@@wil@@YA?AV?$ComPtr@VThumbnailInteropWindow@ThumbnailInteropDevice@@@WRL@Microsoft@@$$QEBQEAVThumbnailInteropDevice@@@Z @ 0x1801674D4 (--$MakeAndInitializeOrThrow@VThumbnailInteropWindow@ThumbnailInteropDevice@@QEAV2@@wil@@YA-AV-$C.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___ @ 0x1800752F0 (wil--ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall ThumbnailInteropDevice::ThumbnailInteropWindow::RuntimeClassInitialize(
        ThumbnailInteropDevice::ThumbnailInteropWindow *this,
        struct ThumbnailInteropDevice *a2)
{
  HCURSOR CursorW; // rax
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // r8
  const char *v8; // r9
  unsigned int LastError; // ebx
  HWND *v10; // [rsp+60h] [rbp-39h] BYREF
  char v11; // [rsp+68h] [rbp-31h]
  int v12; // [rsp+70h] [rbp-29h] BYREF
  HWND **p_p_hWnd; // [rsp+78h] [rbp-21h]
  int v14; // [rsp+80h] [rbp-19h]
  WNDCLASSEXW v15; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  HWND *p_hWnd; // [rsp+110h] [rbp+77h] BYREF
  HWND hWnd; // [rsp+118h] [rbp+7Fh] BYREF

  v15.cbSize = 80;
  memset(&v15.style, 0, 0x4CuLL);
  v15.lpfnWndProc = (WNDPROC)CWRLImpWndProc<ThumbnailInteropDevice::ThumbnailInteropWindow>::s_WndProcBase;
  v15.hInstance = &_ImageBase;
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  v15.cbWndExtra = 8;
  v15.hCursor = CursorW;
  v15.lpszClassName = L"ThumbnailInterop";
  RegisterClassExW(&v15);
  hWnd = CreateWindowExW(0x280080u, L"ThumbnailInterop", 0LL, 0x80000000, 0, 0, 1, 1, 0LL, 0LL, &_ImageBase, this);
  if ( !hWnd )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x86,
             (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
             v5);
  p_hWnd = &hWnd;
  wil::ScopeExit__lambda_f9057347eb2ef0bad0470b7b5458da12___((__int64)&v10, &p_hWnd);
  LODWORD(p_hWnd) = 1;
  p_p_hWnd = &p_hWnd;
  v12 = 17;
  v14 = 4;
  if ( (unsigned int)SetWindowCompositionAttribute(v7, &v12) )
  {
    ShowWindow(hWnd, 4);
    result = 0LL;
    *((_QWORD *)this + 4) = a2;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x91,
                  (__int64)"pcshell\\twinui\\thumbnailinterop\\lib\\device.cpp",
                  v8);
    if ( v11 )
      DestroyWindow(*v10);
    return LastError;
  }
  return result;
}
