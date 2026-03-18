/*
 * XREFs of InbvPortPollOnly @ 0x140295638
 * Callers:
 *     HdlspDispatch @ 0x1407CBE10 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x1407CC508 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

bool __fastcall InbvPortPollOnly(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // [rsp+40h] [rbp+8h] BYREF

  LOBYTE(a4) = 1;
  return (unsigned __int16)((__int64 (__fastcall *)(char *, char *, _QWORD, __int64))PortGetByte)(
                             (char *)&Port + 16 * a1,
                             &v5,
                             0LL,
                             a4) == 0;
}
