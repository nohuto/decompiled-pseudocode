/*
 * XREFs of wWinMain @ 0x140001A80
 * Callers:
 *     sub_1400036CC @ 0x1400036CC (sub_1400036CC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x1400019E0 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     McGenEventRegister @ 0x140001CC0 (McGenEventRegister.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140002200 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022B0 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x1400029E0 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140002AA0 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     _Init_thread_footer @ 0x140003B98 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003BF8 (_Init_thread_header.c)
 *     IsImmDisableIMEPresent @ 0x140004804 (IsImmDisableIMEPresent.c)
 *     IsCreateAppChromePresent @ 0x1400048D8 (IsCreateAppChromePresent.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  int v8; // ebx
  __int64 v9; // rdx
  signed int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  CDwmAppHost *v13; // rcx
  int v14; // eax
  CDwmAppHost *v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  CDwmAppHost *v18; // rcx
  int v19; // eax
  unsigned int v21; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( dword_14000FA28 > *(_DWORD *)(*ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_14000FA28, *ThreadLocalStoragePointer, lpCmdLine, nShowCmd);
    if ( dword_14000FA28 == -1 )
    {
      dword_14000F23C = -2147024348;
      Init_thread_footer(&dword_14000FA28);
    }
  }
  ProcessInformation[0] = 1;
  ModifyTokenPrivileges();
  CurrentProcess = GetCurrentProcess();
  SetPriorityClass(CurrentProcess, 0x80u);
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, ProcessInformation, 4u);
  if ( (unsigned __int8)IsImmDisableIMEPresent() )
  {
    SetLastError(0);
    if ( !ImmDisableIME(0xFFFFFFFF) )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      v21 = 147;
      if ( v8 >= 0 )
        v8 = -2003304445;
      goto LABEL_26;
    }
  }
  SetErrorMode(0xC001u);
  v8 = WerSetFlags(0x28u);
  if ( v8 == -2147467263 )
    v8 = 0;
  if ( v8 < 0 )
  {
    v21 = 168;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F230, 4u, v8, v21);
    goto LABEL_27;
  }
  SetLastError(0);
  if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
  {
    v10 = GetLastError();
    v8 = v10;
    if ( v10 > 0 )
      v8 = (unsigned __int16)v10 | 0x80070000;
    v21 = 180;
    if ( v8 >= 0 )
      v8 = -2003304445;
    goto LABEL_26;
  }
  McGenEventRegister(
    &Microsoft_Windows_Dwm_Dwm_Provider,
    v9,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context);
  McGenEventRegister(
    &Microsoft_Windows_Dwm_Udwm_Provider,
    v11,
    &Microsoft_Windows_Dwm_Udwm_Provider_Context,
    &Microsoft_Windows_Dwm_Udwm_Provider_Context);
  McGenEventRegister(
    &WERSVC_TRIGGER_PROVIDER_GUID,
    v12,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context);
  if ( (unsigned __int8)IsCreateAppChromePresent() || (v14 = CheckForDwmGroupSid(), v8 = v14, v14 >= 0) )
  {
    v17 = CDwmAppHost::Initialize(v13, hInstance);
    v8 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F230, 4u, v17, 0xC5u);
    }
    else
    {
      v19 = CDwmAppHost::Run(v18);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F230, 4u, v19, 0xC7u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F230, 4u, v14, 0xC2u);
  }
LABEL_27:
  CDwmAppHost::Shutdown(v15, (unsigned int)v8, v16);
  return v8;
}
