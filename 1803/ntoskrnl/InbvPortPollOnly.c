/*
 * XREFs of InbvPortPollOnly @ 0x1402CABE4
 * Callers:
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall InbvPortPollOnly(unsigned int a1)
{
  __int64 v1; // rbx
  char result; // al

  if ( a1 >= 4 || !*((_QWORD *)&Ports + 5 * a1) )
    return 0;
  v1 = 5LL * a1;
  result = *((_BYTE *)&Ports + 40 * a1 + 33);
  if ( !result )
  {
    result = (*(unsigned int (__fastcall **)(char *, char *))(UartHardwareDriver + 16))(
               (char *)&Ports + 40 * a1,
               (char *)&Ports + 40 * a1 + 32) == 0;
    *((_BYTE *)&Ports + 8 * v1 + 33) = result;
  }
  return result;
}
