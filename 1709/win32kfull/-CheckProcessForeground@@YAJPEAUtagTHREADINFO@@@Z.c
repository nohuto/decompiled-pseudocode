/*
 * XREFs of ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0085D70
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C0048A94 (xxxDesktopThreadWaiter.c)
 *     xxxGetInputEvent @ 0x1C0086730 (xxxGetInputEvent.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C00A8320 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UpdateProcessPriorityForSpinning @ 0x1C0085DB8 (UpdateProcessPriorityForSpinning.c)
 */

__int64 __fastcall CheckProcessForeground(struct tagTHREADINFO *a1)
{
  *(_QWORD *)(*((_QWORD *)a1 + 57) + 8LL) = 0LL;
  *(_DWORD *)(*((_QWORD *)a1 + 57) + 28LL) = *((_DWORD *)a1 + 116) & 0xFFFFFBFF;
  *((_DWORD *)a1 + 116) &= ~0x400u;
  UpdateProcessPriorityForSpinning();
  return 0LL;
}
