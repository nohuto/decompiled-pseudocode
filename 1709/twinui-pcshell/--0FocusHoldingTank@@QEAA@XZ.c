/*
 * XREFs of ??0FocusHoldingTank@@QEAA@XZ @ 0x180190474
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180189200 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009D91C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18017CCD4 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180183268 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ @ 0x18018F4D4 (-StartActivity@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXXZ.c)
 *     ?Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z @ 0x18018F61C (-Stop@CreateHoldingTankWindow@StartWindowTelemetry@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

FocusHoldingTank *__fastcall FocusHoldingTank::FocusHoldingTank(LONG_PTR dwNewLong)
{
  __int64 WindowInBand; // rax
  const char *v3; // r9
  const char *v4; // r9
  const char *v5; // r9
  WNDCLASSW WndClass; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v9; // [rsp+E8h] [rbp-20h]
  int *v10; // [rsp+F0h] [rbp-18h]
  int *v11; // [rsp+F8h] [rbp-10h]
  int v12; // [rsp+100h] [rbp-8h] BYREF
  char v13; // [rsp+104h] [rbp-4h]
  int v14; // [rsp+128h] [rbp+20h] BYREF
  const char *v15; // [rsp+130h] [rbp+28h]
  __int64 v16; // [rsp+138h] [rbp+30h]
  char v17; // [rsp+140h] [rbp+38h]
  __int64 v18; // [rsp+148h] [rbp+40h]
  _BYTE v19[144]; // [rsp+150h] [rbp+48h] BYREF
  __int64 v20; // [rsp+1E0h] [rbp+D8h]
  __int64 v21; // [rsp+1E8h] [rbp+E0h]
  __int64 v22; // [rsp+1F0h] [rbp+E8h]
  __int64 v23; // [rsp+1F8h] [rbp+F0h]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v18 = 1LL;
  *(_QWORD *)dwNewLong = 0LL;
  v8[2] = v8;
  *(_DWORD *)(dwNewLong + 8) = 0;
  v10 = &v14;
  *(_QWORD *)(dwNewLong + 16) = 0LL;
  v11 = &v12;
  v8[1] = 0LL;
  v15 = "CreateHoldingTankWindow";
  v8[3] = 0LL;
  v9 = 0;
  v12 = 0;
  v13 = 0;
  v17 = 0;
  v14 = 0;
  v16 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v19, 0, sizeof(v19));
  v22 = 0LL;
  v8[0] = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  v23 = 0LL;
  StartWindowTelemetry::CreateHoldingTankWindow::StartActivity((StartWindowTelemetry::CreateHoldingTankWindow *)v8);
  *(_DWORD *)(dwNewLong + 8) = GetCurrentThreadId();
  memset(&WndClass, 0, sizeof(WndClass));
  WndClass.lpfnWndProc = (WNDPROC)FocusHoldingTank::s_WndProc;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.lpszClassName = L"StartAndCortanaFocusHoldingTank";
  RegisterClassW(&WndClass);
  WindowInBand = CreateWindowInBand(
                   2097280LL,
                   L"StartAndCortanaFocusHoldingTank",
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   0LL,
                   6);
  *(_QWORD *)dwNewLong = WindowInBand;
  if ( !WindowInBand )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
      v3);
  if ( *(_QWORD *)dwNewLong )
  {
    SetLastError(0);
    if ( !SetWindowLongPtrW(*(HWND *)dwNewLong, -21, dwNewLong) && GetLastError() )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2A,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v4);
    if ( !SetWindowPos(*(HWND *)dwNewLong, 0LL, 0, 0, 0, 0, 0x57u) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x2E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\focusholdingtank.cpp",
        v5);
    StartWindowTelemetry::CreateHoldingTankWindow::Stop(
      (StartWindowTelemetry::CreateHoldingTankWindow *)v8,
      *(void **)dwNewLong);
  }
  v8[0] = &StartWindowTelemetry::CreateHoldingTankWindow::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v8);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v8);
  return (FocusHoldingTank *)dwNewLong;
}
