/*
 * XREFs of ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C5704
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0008850 (xxxCleanupThreadPointerInputInfo.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01C7444 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall FreeThreadPointerHookData(struct tagTHREADPOINTERDATA *a1)
{
  if ( (gdwMitConfig & 4) != 0 )
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *((_QWORD *)a1 + 3), 5LL, a1);
  else
    UnreferenceMsgData(*((_QWORD *)a1 + 3), 5LL, a1);
  Win32FreePool(a1);
}
