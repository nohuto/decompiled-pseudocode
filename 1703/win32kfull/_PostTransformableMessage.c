/*
 * XREFs of _PostTransformableMessage @ 0x1C00C9168
 * Callers:
 *     ?MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0005990 (-MiPIdleTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxSystemTimerProc @ 0x1C00174B0 (xxxSystemTimerProc.c)
 *     IdleTimerProc @ 0x1C004A1EC (IdleTimerProc.c)
 *     _PostTransformableMessageIL @ 0x1C00C8F84 (_PostTransformableMessageIL.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PostMousePointerLeaveAndCleanup @ 0x1C01BCC40 (PostMousePointerLeaveAndCleanup.c)
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0055300 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostTransformableMessage(__int64 a1, __int64 a2, __int64 a3, struct _LARGE_STRING *a4, int a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx

  v5 = 0;
  v6 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, a5);
  if ( v6 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
