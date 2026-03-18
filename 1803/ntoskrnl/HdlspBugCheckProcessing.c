/*
 * XREFs of HdlspBugCheckProcessing @ 0x140838CE0
 * Callers:
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _stricmp @ 0x140188310 (_stricmp.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 *     HdlspProcessDumpCommand @ 0x140839A68 (HdlspProcessDumpCommand.c)
 *     HdlspSendStringAtBaud @ 0x14083A070 (HdlspSendStringAtBaud.c)
 */

__int64 HdlspBugCheckProcessing()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  const char *v3; // rcx
  char Str1[80]; // [rsp+20h] [rbp-68h] BYREF

  result = HdlspGetLine(Str1, 0x50uLL);
  if ( (_BYTE)result )
  {
    if ( !stricmp(Str1, "?") || !stricmp(Str1, "help") )
    {
      HdlspSendStringAtBaud("\r\n");
      HdlspSendStringAtBaud("d        Display all log entries, paging is on.\r\n");
      HdlspSendStringAtBaud("help     Display this list.\r\n");
      HdlspSendStringAtBaud("restart  Restart the system immediately.\r\n");
      HdlspSendStringAtBaud("?        Display this list.\r\n");
      v3 = "\r\n";
    }
    else
    {
      if ( !stricmp(Str1, "d") )
      {
        LOBYTE(v1) = 1;
        HdlspProcessDumpCommand(v1);
        return HdlspSendStringAtBaud("\n\r!SAC>");
      }
      if ( !stricmp(Str1, "restart") )
      {
        v2 = 10LL;
        do
        {
          KeStallExecutionProcessor(0x186A0u);
          --v2;
        }
        while ( v2 );
        HalReturnToFirmware(3LL);
      }
      v3 = "Type ? or Help for a list of commands.\r\n";
    }
    HdlspSendStringAtBaud(v3);
    return HdlspSendStringAtBaud("\n\r!SAC>");
  }
  return result;
}
