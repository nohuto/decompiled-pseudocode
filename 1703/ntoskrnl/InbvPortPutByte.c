/*
 * XREFs of InbvPortPutByte @ 0x14026B10C
 * Callers:
 *     HdlspPutData @ 0x14078F170 (HdlspPutData.c)
 *     HdlspSendStringAtBaud @ 0x14078F530 (HdlspSendStringAtBaud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvPortPutByte(unsigned int a1)
{
  return ((__int64 (__fastcall *)(char *))PortPutByte)((char *)&Port + 16 * a1);
}
