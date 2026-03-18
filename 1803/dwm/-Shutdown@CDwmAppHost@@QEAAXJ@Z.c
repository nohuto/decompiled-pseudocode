/*
 * XREFs of ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140001A20
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001320 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     WinMain @ 0x140001AC0 (WinMain.c)
 * Callees:
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x140002900 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007180 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

void __fastcall CDwmAppHost::Shutdown(CDwmAppHost *this, UINT a2)
{
  UINT v2; // eax

  if ( a2 )
  {
    v2 = uExitCode;
    if ( !uExitCode )
      v2 = a2;
    uExitCode = v2;
  }
  if ( *(&uExitCode + 1) == 1 )
  {
    DWMGhostSetInShutdown(this);
    *(&uExitCode + 1) = 2;
  }
  if ( !hWnd )
  {
    if ( uExitCode != -805305602 )
      CDwmAppHost::ReportEventWithDword(0LL, 4u, 0x40002331u, uExitCode);
    CSettingsManager::Cleanup((CSettingsManager *)&qword_14000E908);
    if ( (int)*(&uExitCode + 1) >= 1 )
    {
      DWMGhostCleanup();
      *(&uExitCode + 1) = 0;
    }
    ExitProcess(uExitCode);
  }
  PostMessageW(hWnd, 0x10u, 0LL, 0LL);
}
