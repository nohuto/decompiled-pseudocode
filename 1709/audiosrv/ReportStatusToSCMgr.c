/*
 * XREFs of ReportStatusToSCMgr @ 0x1800ABDC8
 * Callers:
 *     AudioSrvStartupThread @ 0x1800ABA60 (AudioSrvStartupThread.c)
 *     OnServiceShutdown @ 0x1800ABC00 (OnServiceShutdown.c)
 *     ServiceCtrl @ 0x1800ABE90 (ServiceCtrl.c)
 *     ServiceMain @ 0x1800ABF40 (ServiceMain.c)
 *     ShutdownKeepaliveThread @ 0x1800AC290 (ShutdownKeepaliveThread.c)
 *     ServiceStart @ 0x1800AD388 (ServiceStart.c)
 * Callees:
 *     McTemplateU0qqqqqqq @ 0x1800ABB38 (McTemplateU0qqqqqqq.c)
 */

__int64 __fastcall ReportStatusToSCMgr(DWORD a1, DWORD a2, DWORD a3)
{
  DWORD v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx

  v3 = 0;
  ssStatus.dwCurrentState = a1;
  ssStatus.dwWin32ExitCode = a2;
  ssStatus.dwWaitHint = a3;
  if ( a1 == 4 )
    v3 = 193;
  ssStatus.dwControlsAccepted = v3;
  if ( a1 == 4 || a1 == 1 )
    ssStatus.dwCheckPoint = 0;
  else
    ssStatus.dwCheckPoint = dword_18014B208++;
  v5 = SetServiceStatus(sshStatusHandle, &ssStatus);
  if ( !v5 && (Microsoft_Windows_AudioEnableBits & 2) != 0 )
    McTemplateU0qqqqqqq(
      ssStatus.dwWin32ExitCode,
      v4,
      ssStatus.dwServiceType,
      ssStatus.dwCurrentState,
      ssStatus.dwControlsAccepted,
      ssStatus.dwWin32ExitCode,
      ssStatus.dwServiceSpecificExitCode,
      ssStatus.dwCheckPoint,
      ssStatus.dwWaitHint);
  return v5;
}
