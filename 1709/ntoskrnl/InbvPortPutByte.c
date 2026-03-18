/*
 * XREFs of InbvPortPutByte @ 0x140295674
 * Callers:
 *     HdlspPutData @ 0x1407CCCA0 (HdlspPutData.c)
 *     HdlspSendStringAtBaud @ 0x1407CD074 (HdlspSendStringAtBaud.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall InbvPortPutByte(unsigned int a1)
{
  return ((__int64 (__fastcall *)(char *))PortPutByte)((char *)&Port + 16 * a1);
}
