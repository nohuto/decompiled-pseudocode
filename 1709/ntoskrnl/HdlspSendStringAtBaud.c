/*
 * XREFs of HdlspSendStringAtBaud @ 0x1407CD074
 * Callers:
 *     HdlspBugCheckProcessing @ 0x1407CBCE0 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x1407CBE10 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x1407CC430 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1407CC508 (HdlspGetLine.c)
 *     HdlspPutString @ 0x1407CCD90 (HdlspPutString.c)
 *     HdlspPutWideString @ 0x1407CCF0C (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x1407CCFD0 (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x140295674 (InbvPortPutByte.c)
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
