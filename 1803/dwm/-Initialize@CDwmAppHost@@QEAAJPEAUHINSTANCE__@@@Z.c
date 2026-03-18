/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022F0
 * Callers:
 *     WinMain @ 0x140001AC0 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001D20 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020F0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400027D0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     _Init_thread_footer @ 0x140003498 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1400034F8 (_Init_thread_header.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400041C8 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007180 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2, __int64 a3, __int64 a4)
{
  CDwmAppHost *v5; // rcx
  int v6; // ebx
  CDwmAppHost *v7; // rcx
  signed int LastError; // eax

  if ( dword_14000E960 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_14000E960, 4LL, a3, a4);
    if ( dword_14000E960 == -1 )
    {
      dword_14000E8C8 = -2147024348;
      Init_thread_footer(&dword_14000E960);
    }
  }
  g_dwmAppHost = a2;
  HIDWORD(qword_14000E8E0) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)&qword_14000E908);
  v6 = CDwmAppHost::InitializeWindow(v5);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000E8C8, 1u, v6, 0x20u);
    return (unsigned int)v6;
  }
  v6 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &g_dwmAppHost + 1, &dword_14000E8E8);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000E8C8, 1u, v6, 0x23u);
    return (unsigned int)v6;
  }
  SetLastError(0);
  if ( !(unsigned int)RegisterSessionPort(*(&g_dwmAppHost + 1)) )
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000E8C8, 1u, v6, 0x26u);
  }
  if ( v6 < 0 )
  {
    CDwmAppHost::ReportEventWithDword(v7, 1u, 0xC0002344, v6);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000E8C8, 1u, v6, 0x32u);
    return (unsigned int)v6;
  }
  CDwmAppHost::ReportEventW(v7, 4u, 0x40002343u, 0LL);
  if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
  {
    DWMGhostInitialize();
    *(&uExitCode + 1) = 1;
  }
  return 0LL;
}
