/*
 * XREFs of FreeQEntry @ 0x1C00C9AFC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00B7D4C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DestroyThreadsMessages @ 0x1C00D8B00 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00D8B90 (FreeMessageList.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     FreePointerMessageParams @ 0x1C01BAE2C (FreePointerMessageParams.c)
 */

__int64 __fastcall FreeQEntry(unsigned int *a1)
{
  if ( (a1[25] & 8) != 0 && !a1[24] && (unsigned int)IsPointerInputMessage(a1[6]) )
    FreePointerMessageParams(a1);
  return Win32FreeToPagedLookasideList(QEntryLookaside, a1);
}
