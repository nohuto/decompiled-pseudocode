/*
 * XREFs of ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618
 * Callers:
 *     UnlinkSendListSms @ 0x1C0049380 (UnlinkSendListSms.c)
 *     xxxInterSendMsgEx @ 0x1C0058A60 (xxxInterSendMsgEx.c)
 *     FreePointerMessageParams @ 0x1C01BAE2C (FreePointerMessageParams.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01C51E0 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C5704 (-FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01C72CC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C758C (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnreferenceMsgData(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( (gdwMitConfig & 4) != 0 )
    return CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, a1, a2, a3);
  else
    return PointerList::UnreferenceMsgData(a1);
}
