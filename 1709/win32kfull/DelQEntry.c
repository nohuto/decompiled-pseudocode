/*
 * XREFs of DelQEntry @ 0x1C009EC10
 * Callers:
 *     ?HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0007524 (-HandleDeferredInput@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     ?RemoveEventMessage@@YAHPEAUtagQ@@KK@Z @ 0x1C00552F4 (-RemoveEventMessage@@YAHPEAUtagQ@@KK@Z.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C009E694 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C009E924 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     FindQMsg @ 0x1C00A86D0 (FindQMsg.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00AB4B0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     DestroyThreadsMessages @ 0x1C00C4FF0 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00C5090 (FreeMessageList.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SuspendThreadQueue @ 0x1C0105060 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0137D18 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0137DC8 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C01A40F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     EditionDelQEntry @ 0x1C01B5230 (EditionDelQEntry.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BEE4C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01C04B8 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01CAE8C (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     DelegateCoalescePointerMessage @ 0x1C01CDE1C (DelegateCoalescePointerMessage.c)
 *     NtUserGetRawInputBuffer @ 0x1C01E6910 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C009ECA8 (IsHiddenByInputService.c)
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01BF114 (FreePointerMessageParams.c)
 */

__int64 __fastcall DelQEntry(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // r8d

  v4 = *(_QWORD **)(a2 + 8);
  if ( v4 )
    *v4 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
  if ( *a1 == a2 )
    *a1 = *(_QWORD *)a2;
  if ( a1[1] == a2 )
    a1[1] = *(_QWORD *)(a2 + 8);
  result = IsHiddenByInputService(a2);
  if ( !(_DWORD)result )
    --*(_DWORD *)(v6 + 16);
  if ( v7 )
  {
    if ( (*(_DWORD *)(a2 + 100) & 8) != 0 && !*(_DWORD *)(a2 + 96) )
    {
      if ( (unsigned int)IsPointerInputMessage(*(unsigned int *)(a2 + 24), v6) )
        FreePointerMessageParams(a2);
    }
    return Win32FreeToPagedLookasideList(QEntryLookaside, a2);
  }
  return result;
}
