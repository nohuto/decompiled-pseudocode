/*
 * XREFs of DwmpCreateSessionProcess @ 0x180002E90
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?OneCoreSkipDwmLaunch@@YA_NXZ @ 0x180002E14 (-OneCoreSkipDwmLaunch@@YA_NXZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003C6C (-DoStackCapture@@YAXJI@Z.c)
 *     __security_check_cookie @ 0x180006270 (__security_check_cookie.c)
 */

__int64 __fastcall DwmpCreateSessionProcess(int a1)
{
  HANDLE Thread; // rbx
  signed int LastError; // eax
  signed int v3; // ecx
  HMODULE ModuleHandleA; // rax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  bool v8; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v9; // [rsp+34h] [rbp-65h] BYREF
  LPVOID lpParameter; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  GUID *v12; // [rsp+60h] [rbp-39h]
  int v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+6Ch] [rbp-2Dh]
  unsigned int *v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  LPVOID *p_lpParameter; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  bool *v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+9Ch] [rbp+3h]
  GUID *v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  unsigned __int16 *v27; // [rsp+B0h] [rbp+17h]
  int v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+BCh] [rbp+23h]
  unsigned __int16 *v30; // [rsp+C0h] [rbp+27h]
  int v31; // [rsp+C8h] [rbp+2Fh]
  int v32; // [rsp+CCh] [rbp+33h]

  v9 = 0;
  Thread = 0LL;
  LODWORD(lpParameter) = a1;
  if ( OneCoreSkipDwmLaunch() )
  {
    v9 = 1;
  }
  else if ( gDwmFirstLaunch )
  {
    SetLastError(0);
    Thread = CreateThread(
               0LL,
               0LL,
               (LPTHREAD_START_ROUTINE)DwmpCreateSessionProcessWorker,
               (LPVOID)(unsigned int)lpParameter,
               0,
               0LL);
    if ( !Thread )
    {
      LastError = GetLastError();
      v3 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v3 = LastError;
      if ( v3 >= 0 )
        v3 = -2003304445;
      v9 = v3;
      DoStackCapture(v3, 0x5E5u);
    }
  }
  else
  {
    DwmpCreateSessionProcessWorker((PVOID)(unsigned int)lpParameter);
  }
  if ( hProvider > 5u
    && (qword_18000C010 & 0x400000000000LL) != 0
    && (qword_18000C018 & 0x400000000000LL) == qword_18000C018 )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = &gDwmInitTelemetryActivityId;
    v15 = &v9;
    v16 = 4;
    v19 = 4;
    p_lpParameter = &lpParameter;
    v13 = 16;
    ModuleHandleA = GetModuleHandleA("wininit.exe");
    v22 = 1;
    v25 = 16;
    v28 = 2;
    v8 = ModuleHandleA != 0LL;
    v21 = &v8;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v24 = &gDwmInitTargetAppSessionGuid;
    v27 = &gBootId;
    v30 = &gSessionId;
    v31 = 2;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180009895, v5, v6, 9u, &pData);
  }
  if ( Thread )
    CloseHandle(Thread);
  return v9;
}
