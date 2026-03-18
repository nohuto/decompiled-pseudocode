/*
 * XREFs of ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01C758C
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0008850 (xxxCleanupThreadPointerInputInfo.c)
 *     ?UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C77F8 (-UpdateThreadPointerList@@YAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     EditionUnlinkAndFreeThreadPointerData @ 0x1C01CA020 (EditionUnlinkAndFreeThreadPointerData.c)
 * Callees:
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall UnlinkAndFreeThreadPointerData(struct tagTHREADINPUTPOINTERLIST *a1, struct tagTHREADPOINTERDATA *a2)
{
  struct tagTHREADPOINTERDATA **v2; // rax
  __int64 v4; // rcx

  v2 = (struct tagTHREADPOINTERDATA **)*((_QWORD *)a2 + 1);
  v4 = *(_QWORD *)a2;
  if ( *(struct tagTHREADPOINTERDATA **)(*(_QWORD *)a2 + 8LL) != a2 || *v2 != a2 )
    __fastfail(3u);
  *v2 = (struct tagTHREADPOINTERDATA *)v4;
  *(_QWORD *)(v4 + 8) = v2;
  if ( (gdwMitConfig & 4) != 0 )
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, *((_QWORD *)a2 + 3), 4LL, a2);
  else
    UnreferenceMsgData(*((_QWORD *)a2 + 3), 4LL, a2);
  Win32FreePool(a2);
  --*((_DWORD *)a1 + 4);
}
