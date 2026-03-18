/*
 * XREFs of InbvPortGetByte @ 0x1402CAA2C
 * Callers:
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

bool __fastcall InbvPortGetByte(unsigned int a1, _BYTE *a2)
{
  bool result; // al

  if ( a1 >= 4 || !*((_QWORD *)&Ports + 5 * a1) )
    return 0;
  if ( !*((_BYTE *)&Ports + 40 * a1 + 33) )
    return (*(unsigned int (__fastcall **)(char *, _BYTE *))(UartHardwareDriver + 16))((char *)&Ports + 40 * a1, a2) == 0;
  *a2 = *((_BYTE *)&Ports + 40 * a1 + 32);
  result = 1;
  *((_BYTE *)&Ports + 40 * a1 + 33) = 0;
  return result;
}
