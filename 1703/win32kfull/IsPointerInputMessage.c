/*
 * XREFs of IsPointerInputMessage @ 0x1C00CC410
 * Callers:
 *     IsMiPPointerMessage @ 0x1C0007234 (IsMiPPointerMessage.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00527D0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     FreeQEntry @ 0x1C00C9AFC (FreeQEntry.c)
 *     _PostThreadMessageEx @ 0x1C00CBC7C (_PostThreadMessageEx.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     NtUserDispatchMessage @ 0x1C00CC2F0 (NtUserDispatchMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0131A68 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0131B18 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     ?FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z @ 0x1C019924C (-FindNodeQueuedMessageWorker@@YAPEAUtagQMSG@@PEAUtagQ@@_KHPEAPEAU2@@Z.c)
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BAB6C (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     NtUserfnPOINTERINPUT @ 0x1C01E2EF0 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessage(unsigned int a1)
{
  return a1 > 0x240 && a1 < 0x258 && a1 != 589;
}
