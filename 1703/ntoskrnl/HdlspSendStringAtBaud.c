/*
 * XREFs of HdlspSendStringAtBaud @ 0x14078F530
 * Callers:
 *     HdlspBugCheckProcessing @ 0x14078E20C (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x14078E340 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x14078E910 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x14078E9D8 (HdlspGetLine.c)
 *     HdlspPutString @ 0x14078F260 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x14078F3C8 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x14078F48C (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x14026B10C (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1)
{
  char result; // al
  _BYTE *v2; // rbx

  result = *a1;
  v2 = a1;
  while ( result )
  {
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14));
    result = *++v2;
  }
  return result;
}
