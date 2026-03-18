/*
 * XREFs of DelQEntry @ 0x1C00CC24C
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C00026B0 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C001A018 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     FindQMsg @ 0x1C0052B70 (FindQMsg.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00CBF40 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00CBF64 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DestroyThreadsMessages @ 0x1C00D8B00 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00D8B90 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C00FAC40 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0131A68 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0131B18 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C0198548 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     EditionDelQEntry @ 0x1C01B21B0 (EditionDelQEntry.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BAB6C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01BC668 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01C5538 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01C9AC4 (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C01DA4C0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01BAE2C (FreePointerMessageParams.c)
 */

__int64 __fastcall DelQEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v4; // rdx
  __int64 result; // rax

  v4 = *(_QWORD **)(a2 + 8);
  if ( v4 )
    *v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a1 == a2 )
    *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( *(_QWORD *)(a1 + 8) == a2 )
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  result = *(unsigned int *)(a2 + 100);
  if ( (result & 0x10000) == 0 && (result & 0x40000) == 0 )
    --*(_DWORD *)(a1 + 16);
  if ( a3 )
  {
    if ( (*(_DWORD *)(a2 + 100) & 8) != 0 && !*(_DWORD *)(a2 + 96) )
    {
      if ( (unsigned int)IsPointerInputMessage(*(unsigned int *)(a2 + 24)) )
        FreePointerMessageParams(a2);
    }
    return Win32FreeToPagedLookasideList(QEntryLookaside, a2);
  }
  return result;
}
