/*
 * XREFs of ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x1400019E0
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400012E0 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     wWinMain @ 0x140001A80 (wWinMain.c)
 * Callees:
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x1400028C0 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140007800 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

void __fastcall CDwmAppHost::Shutdown(CDwmAppHost *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = uExitCode;
  if ( (_DWORD)a2 )
  {
    if ( !uExitCode )
      v3 = (unsigned int)a2;
    uExitCode = v3;
  }
  if ( *(&uExitCode + 1) == 1 )
  {
    DWMGhostSetInShutdown(this, a2, a3, v3);
    LODWORD(v3) = uExitCode;
    *(&uExitCode + 1) = 2;
  }
  if ( !hWnd )
  {
    if ( (_DWORD)v3 != -805305602 )
      CDwmAppHost::ReportEventWithDword(0LL, 4u, 0x40002331u, v3);
    CSettingsManager::Cleanup((CSettingsManager *)&qword_14000F9C8);
    if ( (int)*(&uExitCode + 1) >= 1 )
    {
      DWMGhostCleanup();
      *(&uExitCode + 1) = 0;
    }
    ExitProcess(uExitCode);
  }
  PostMessageW(hWnd, 0x10u, 0LL, 0LL);
}
