/*
 * XREFs of UserLogError @ 0x1C0008700
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000B4AC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C009BF98 (RIMApplyPTPConfigRemedy.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1C0108634 (RIMTransformPhysicalPointToScreen.c)
 * Callees:
 *     <none>
 */

void __fastcall UserLogError(int a1)
{
  _DWORD *ErrorLogEntry; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(gpWin32kDriverObject, 0x30u);
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a1;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
