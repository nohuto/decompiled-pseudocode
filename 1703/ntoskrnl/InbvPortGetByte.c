/*
 * XREFs of InbvPortGetByte @ 0x14026AEFC
 * Callers:
 *     HdlspDispatch @ 0x14078E340 (HdlspDispatch.c)
 *     HdlspGetLine @ 0x14078E9D8 (HdlspGetLine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
