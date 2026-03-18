/*
 * XREFs of ?FreeThreadPointerHookData@@YAXPEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01CAFA8
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00F8720 (xxxCleanupThreadPointerInputInfo.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01CC0A8 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 * Callees:
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC234 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall FreeThreadPointerHookData(struct tagTHREADPOINTERDATA *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( (gdwMitConfig & 4) != 0 )
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *((_QWORD *)a1 + 3), 5LL, a1);
  else
    UnreferenceMsgData(*((_QWORD *)a1 + 3), 5LL, a1);
  Win32FreePool(a1, v2, v3);
}
