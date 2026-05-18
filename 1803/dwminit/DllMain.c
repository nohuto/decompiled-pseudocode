/*
 * XREFs of DllMain @ 0x180001600
 * Callers:
 *     dllmain_dispatch @ 0x1800082FC (dllmain_dispatch.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001210 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x18000128C (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 *     memset_0 @ 0x180007A10 (memset_0.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  HANDLE CurrentProcess; // rax
  struct _GUID *v4; // rdx
  unsigned __int16 *v5; // r8
  unsigned __int16 *v6; // r9
  DWORD CurrentProcessId; // eax
  GUID v8; // xmm0
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int dwOptionsa; // [rsp+28h] [rbp-E0h]
  DWORD dwOptions[2]; // [rsp+28h] [rbp-E0h]
  int samDesired; // [rsp+30h] [rbp-D8h]
  int lpSecurityAttributes; // [rsp+38h] [rbp-D0h]
  int phkResult; // [rsp+40h] [rbp-C8h]
  int lpdwDisposition; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+50h] [rbp-B8h]
  int v20; // [rsp+58h] [rbp-B0h]
  int v21; // [rsp+60h] [rbp-A8h]
  int v22; // [rsp+68h] [rbp-A0h]
  int v23; // [rsp+70h] [rbp-98h]
  DWORD hKey; // [rsp+78h] [rbp-90h] BYREF
  GUID hKey_8; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR Data[2]; // [rsp+98h] [rbp-70h] BYREF
  GUID *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  GUID *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  unsigned __int16 *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  unsigned __int16 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  WCHAR ValueName[40]; // [rsp+F8h] [rbp-10h] BYREF

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      DisableThreadLibraryCalls(hinstDLL);
      CurrentProcess = GetCurrentProcess();
      UtilGetProcessTelemetryAppSessionGuid(CurrentProcess, v4, v5, v6);
      EventActivityIdControl(3u, &gDwmInitTelemetryActivityId);
      memset_0(Data, 0, 0x4AuLL);
      v23 = gDwmInitTelemetryActivityId.Data4[7];
      v22 = gDwmInitTelemetryActivityId.Data4[6];
      v21 = gDwmInitTelemetryActivityId.Data4[5];
      v20 = gDwmInitTelemetryActivityId.Data4[4];
      v19 = gDwmInitTelemetryActivityId.Data4[3];
      lpdwDisposition = gDwmInitTelemetryActivityId.Data4[2];
      phkResult = gDwmInitTelemetryActivityId.Data4[1];
      lpSecurityAttributes = gDwmInitTelemetryActivityId.Data4[0];
      samDesired = gDwmInitTelemetryActivityId.Data3;
      dwOptionsa = gDwmInitTelemetryActivityId.Data2;
      if ( (int)StringCchPrintfW(
                  (wchar_t *)Data,
                  37LL,
                  L"%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X",
                  gDwmInitTelemetryActivityId.Data1,
                  dwOptionsa,
                  samDesired,
                  lpSecurityAttributes,
                  phkResult,
                  lpdwDisposition,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23) >= 0 )
      {
        *(_QWORD *)&hKey_8.Data1 = 0LL;
        if ( !RegCreateKeyExW(
                HKEY_LOCAL_MACHINE,
                L"Software\\Microsoft\\Windows\\DWM",
                0,
                0LL,
                1u,
                0xF003Fu,
                0LL,
                (PHKEY)&hKey_8,
                0LL) )
        {
          hKey = 0;
          CurrentProcessId = GetCurrentProcessId();
          if ( ProcessIdToSessionId(CurrentProcessId, &hKey) )
          {
            memset_0(ValueName, 0, 0x44uLL);
            dwOptions[0] = hKey;
            if ( (int)StringCchPrintfW(ValueName, 34LL, L"%s_%08X", L"DwmInitSessionActivityId", *(_QWORD *)dwOptions) >= 0 )
              RegSetKeyValueW(*(HKEY *)&hKey_8.Data1, 0LL, ValueName, 1u, Data, 0x4Au);
          }
          RegCloseKey(*(HKEY *)&hKey_8.Data1);
        }
      }
      v8 = (GUID)*((_OWORD *)off_18000E008 - 1);
      qword_18000E028 = 0LL;
      qword_18000E030 = 0LL;
      hKey_8 = v8;
      if ( !EventRegister(&hKey_8, TlgEnableCallback, &dword_18000E000, &RegHandle) )
        EventSetInformation(RegHandle, 2LL, off_18000E008, *(unsigned __int16 *)off_18000E008);
      if ( (unsigned int)dword_18000E000 > 5
        && (qword_18000E010 & 0x200000000000LL) != 0
        && (qword_18000E018 & 0x200000000000LL) == qword_18000E018 )
      {
        v27 = &gDwmInitTelemetryActivityId;
        v29 = &gDwmInitTargetAppSessionGuid;
        v31 = &gBootId;
        v33 = &gSessionId;
        v28 = 16LL;
        v30 = 16LL;
        v32 = 2LL;
        v34 = 2LL;
        TlgWrite(v9, &unk_18000AA78, v10, v11, 6u, Data);
      }
    }
  }
  else
  {
    EventUnregister(RegHandle);
    RegHandle = 0LL;
    dword_18000E000 = 0;
  }
  return 1;
}
