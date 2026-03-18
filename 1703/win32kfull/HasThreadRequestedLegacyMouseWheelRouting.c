/*
 * XREFs of HasThreadRequestedLegacyMouseWheelRouting @ 0x1C01A02A4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C00F2A40 (GetAppCompatFlags2QuadWord.c)
 */

__int64 __fastcall HasThreadRequestedLegacyMouseWheelRouting(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 376) + 768LL) & 0x8000) != 0
     || (GetAppCompatFlags2QuadWord(a1) & 0x10000000000000LL) != 0) )
  {
    return 1;
  }
  return v1;
}
