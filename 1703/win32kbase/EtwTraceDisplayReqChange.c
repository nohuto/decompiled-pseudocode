/*
 * XREFs of EtwTraceDisplayReqChange @ 0x1C0064654
 * Callers:
 *     UserPowerInfoCallout @ 0x1C0063D28 (UserPowerInfoCallout.c)
 * Callees:
 *     Template_qhq @ 0x1C00DC790 (Template_qhq.c)
 */

char __fastcall EtwTraceDisplayReqChange(int a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al

  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x2000000000008000LL) != 0 )
  {
    result = byte_1C0186D98 - 1;
    if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u && (qword_1C0186D80 & 0x2000000000008000LL) != 0 )
    {
      result = 0;
      if ( (qword_1C0186D88 & 0x2000000000008000LL) == qword_1C0186D88 )
      {
        result = Microsoft_Windows_Win32kEnableBits;
        if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
          return Template_qhq(a1, (unsigned int)&DisplayReqChangeEvent, 0x8000, a4, gProtocolType == 0, dword_1C018C238);
      }
    }
  }
  return result;
}
