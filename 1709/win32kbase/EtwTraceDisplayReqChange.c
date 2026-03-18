/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C0076EA8
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0076738 (UserPowerInfoCallout.c)
 * Callees:
 *     McTemplateK0qhq @ 0x1C00E32A8 (McTemplateK0qhq.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al

  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C0188DA8 - 1;
    if ( (unsigned __int8)(byte_1C0188DA8 - 1) > 2u && (qword_1C0188D90 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C0188D98 & 0x2000000000008000LL) == qword_1C0188D98 )
      {
        result = (char)Microsoft_Windows_Win32kEnableBits;
        if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return McTemplateK0qhq(
                   a1,
                   (unsigned int)&DisplayReqChangeEvent,
                   0x8000,
                   a4,
                   gProtocolType == 0,
                   dword_1C0190F68);
      }
    }
  }
  return result;
}
