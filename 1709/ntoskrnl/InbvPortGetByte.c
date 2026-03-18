/*
 * XREFs of InbvPortGetByte @ 0x140295370
 * Callers:
 *     HdlspDispatch @ 0x1407CBE10 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1407CC508 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

bool __fastcall InbvPortGetByte(unsigned int a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return (unsigned __int16)((__int64 (__fastcall *)(char *, __int64, __int64, _QWORD))PortGetByte)(
                             (char *)&Port + 16 * a1,
                             a2,
                             a3,
                             0LL) == 0;
}
