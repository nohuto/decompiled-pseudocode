/*
 * XREFs of ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC058
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     xxxInterSendMsgEx @ 0x1C00A1890 (xxxInterSendMsgEx.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01CAB78 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01CACA4 (-AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReferenceMsgData(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (gdwMitConfig & 4) != 0 )
    return CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, a1, a2, a3);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 36) |= 0x20u;
  result = (int)a2;
  ++*(_BYTE *)((int)a2 + a1 + 48);
  return result;
}
