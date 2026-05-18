/*
 * XREFs of ?StartLaunchAppService@@YAJXZ @ 0x1800036E8
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B20 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?DoStackCapture@@YAXJI@Z @ 0x1800039E0 (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 */

__int64 StartLaunchAppService(void)
{
  unsigned int v0; // ebx
  HANDLE EventW; // rax
  void *v2; // rsi
  signed int v3; // eax
  signed int v4; // ecx
  SC_HANDLE v5; // rbp
  signed int LastError; // eax
  signed int v7; // ecx
  SC_HANDLE v8; // rdi
  signed int v9; // eax
  signed int v10; // ecx
  signed int v11; // eax
  unsigned int v12; // edx
  signed int v13; // ecx
  _SERVICE_STATUS ServiceStatus; // [rsp+20h] [rbp-38h] BYREF

  memset(&ServiceStatus, 0, sizeof(ServiceStatus));
  v0 = 0;
  SetLastError(0);
  EventW = CreateEventW(0LL, 0, 0, L"Global\\SC_AutoStartPhase1Done");
  v2 = EventW;
  if ( EventW )
  {
    WaitForSingleObject(EventW, 0xFFFFFFFF);
    SetLastError(0);
    v5 = OpenSCManagerW(0LL, 0LL, 1u);
    if ( !v5 )
    {
      LastError = GetLastError();
      v7 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v7 = LastError;
      if ( v7 >= 0 )
        v7 = -2003304445;
      v0 = v7;
      DoStackCapture(v7, 0x1Du);
      goto LABEL_33;
    }
    SetLastError(0);
    v8 = OpenServiceW(v5, L"LaunchAppSvc", 0x14u);
    if ( !v8 )
    {
      v9 = GetLastError();
      v10 = (unsigned __int16)v9 | 0x80070000;
      if ( v9 <= 0 )
        v10 = v9;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v0 = v10;
      DoStackCapture(v10, 0x21u);
      goto LABEL_32;
    }
    SetLastError(0);
    if ( !QueryServiceStatus(v8, &ServiceStatus) )
    {
      v11 = GetLastError();
      v12 = 35;
LABEL_26:
      v13 = (unsigned __int16)v11 | 0x80070000;
      if ( v11 <= 0 )
        v13 = v11;
      if ( v13 >= 0 )
        v13 = -2003304445;
      v0 = v13;
      DoStackCapture(v13, v12);
      goto LABEL_31;
    }
    if ( ServiceStatus.dwCurrentState != 2 )
    {
      if ( ServiceStatus.dwCurrentState == 4 )
        goto LABEL_31;
      StartServiceW(v8, 0, 0LL);
    }
    SetLastError(0);
    if ( !(unsigned int)WaitServiceState(v8, 8LL, 0xFFFFFFFFLL) )
    {
      v11 = GetLastError();
      v12 = 59;
      goto LABEL_26;
    }
LABEL_31:
    CloseServiceHandle(v8);
LABEL_32:
    CloseServiceHandle(v5);
LABEL_33:
    CloseHandle(v2);
    return v0;
  }
  v3 = GetLastError();
  v4 = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    v4 = v3;
  if ( v4 >= 0 )
    v4 = -2003304445;
  v0 = v4;
  DoStackCapture(v4, 0x19u);
  return v0;
}
