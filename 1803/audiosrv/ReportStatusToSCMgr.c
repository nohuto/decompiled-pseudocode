/*
 * XREFs of ReportStatusToSCMgr @ 0x18005A598
 * Callers:
 *     ?ServiceCtrl@@YAKKKPEAX0@Z @ 0x180008910 (-ServiceCtrl@@YAKKKPEAX0@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180058F10 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x18005A520 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 *     ServiceStart @ 0x18005A5FC (ServiceStart.c)
 *     ?OnServiceShutdown@@YAXPEAXE@Z @ 0x1800E6480 (-OnServiceShutdown@@YAXPEAXE@Z.c)
 *     ?ShutdownKeepaliveThread@@YAKPEAX@Z @ 0x1800E6600 (-ShutdownKeepaliveThread@@YAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReportStatusToSCMgr(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = 0;
  dword_18018AFEC = a1;
  dword_18018AFF4 = a2;
  dword_18018B000 = a3;
  if ( a1 == 4 )
    v3 = 193;
  dword_18018AFF0 = v3;
  if ( a1 == 4 || a1 == 1 )
    dword_18018AFFC = 0;
  else
    dword_18018AFFC = dword_180189230++;
  return SetServiceStatus(sshStatusHandle, (LPSERVICE_STATUS)&ssStatus);
}
