/*
 * XREFs of ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01CC1A8
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C00F8720 (xxxCleanupThreadPointerInputInfo.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01CC41C (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     EditionUnlinkAndFreeThreadPointerData @ 0x1C01CE450 (EditionUnlinkAndFreeThreadPointerData.c)
 * Callees:
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC234 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall UnlinkAndFreeThreadPointerData(struct tagTHREADINPUTPOINTERLIST *a1, struct tagTHREADPOINTERDATA *a2)
{
  __int64 v4; // rdx
  struct tagTHREADPOINTERDATA **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8

  v4 = *(_QWORD *)a2;
  if ( *(struct tagTHREADPOINTERDATA **)(v4 + 8) != a2
    || (v5 = (struct tagTHREADPOINTERDATA **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct tagTHREADPOINTERDATA *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (gdwMitConfig & 4) != 0 )
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *((_QWORD *)a2 + 3), 4LL, a2);
  else
    UnreferenceMsgData(*((_QWORD *)a2 + 3), 4LL, a2);
  Win32FreePool(a2, v6, v7);
  --*((_DWORD *)a1 + 4);
}
