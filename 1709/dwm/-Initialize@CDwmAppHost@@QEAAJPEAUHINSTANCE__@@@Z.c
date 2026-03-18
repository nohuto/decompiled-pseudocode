/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1400022B0
 * Callers:
 *     wWinMain @ 0x140001A80 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001910 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140001CE0 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x1400020B0 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002790 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     _Init_thread_footer @ 0x140003B98 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003BF8 (_Init_thread_header.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x14000470C (IsDWMGhostHandleGhostMsgPresent.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007800 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2, __int64 a3, __int64 a4)
{
  CDwmAppHost *v5; // rcx
  int v6; // ebx
  CDwmAppHost *v7; // rcx
  signed int LastError; // eax

  if ( dword_14000FA20 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_14000FA20, 4LL, a3, a4);
    if ( dword_14000FA20 == -1 )
    {
      dword_14000F988 = -2147024348;
      Init_thread_footer(&dword_14000FA20);
    }
  }
  g_dwmAppHost = a2;
  HIDWORD(qword_14000F9A0) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)&qword_14000F9C8);
  v6 = CDwmAppHost::InitializeWindow(v5);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F988, 1u, v6, 0x20u);
    return (unsigned int)v6;
  }
  v6 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &g_dwmAppHost + 1, &dword_14000F9A8);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F988, 1u, v6, 0x23u);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F988, 1u, v6, 0x26u);
  }
  if ( v6 < 0 )
  {
    CDwmAppHost::ReportEventWithDword(v7, 1u, 0xC0002344, v6);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_14000F988, 1u, v6, 0x32u);
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
