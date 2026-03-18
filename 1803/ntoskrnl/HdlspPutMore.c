/*
 * XREFs of HdlspPutMore @ 0x140839CEC
 * Callers:
 *     HdlspProcessDumpCommand @ 0x140839A68 (HdlspProcessDumpCommand.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 *     HdlspPutString @ 0x140839D8C (HdlspPutString.c)
 */

char __fastcall HdlspPutMore(bool *a1)
{
  char result; // al
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v4[16]; // [rsp+28h] [rbp-20h] BYREF

  Interval.QuadPart = -100000LL;
  HdlspPutString("----Press <Enter> for more----");
  while ( !HdlspGetLine(v4, 0xAuLL) )
  {
    if ( (HeadlessGlobals[6] & 2) == 0 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  *a1 = v4[0] == 3;
  do
    result = HdlspGetLine(v4, 0xAuLL);
  while ( result );
  return result;
}
