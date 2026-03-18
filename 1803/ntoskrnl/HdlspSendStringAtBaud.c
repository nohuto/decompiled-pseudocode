/*
 * XREFs of HdlspSendStringAtBaud @ 0x14083A070
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140838CE0 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 *     HdlspEnableTerminal @ 0x140839434 (HdlspEnableTerminal.c)
 *     HdlspGetLine @ 0x1408394FC (HdlspGetLine.c)
 *     HdlspPutString @ 0x140839D8C (HdlspPutString.c)
 *     HdlspPutWideString @ 0x140839F08 (HdlspPutWideString.c)
 *     HdlspSendBlueScreenInfo @ 0x140839FCC (HdlspSendBlueScreenInfo.c)
 * Callees:
 *     InbvPortPutByte @ 0x1402CAC50 (InbvPortPutByte.c)
 */

char __fastcall HdlspSendStringAtBaud(_BYTE *a1, __int64 a2, __int64 a3)
{
  char result; // al
  _BYTE *v4; // rbx

  result = *a1;
  v4 = a1;
  while ( result )
  {
    LOBYTE(a2) = result;
    InbvPortPutByte(*((_DWORD *)HeadlessGlobals + 14), a2, a3);
    result = *++v4;
  }
  return result;
}
