/*
 * XREFs of IsMouseInPointerActive @ 0x1C00CCE6C
 * Callers:
 *     ?IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C0007878 (-IsPointerMessageTouchpad@@YAHPEAUtagTHREADINFO@@_KG@Z.c)
 *     WakeSomeone @ 0x1C004C0C0 (WakeSomeone.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00CCEC8 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C010B570 (-ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z.c)
 * Callees:
 *     IsShellThreadMiPEnabled @ 0x1C00CCD80 (IsShellThreadMiPEnabled.c)
 */

_BOOL8 __fastcall IsMouseInPointerActive(_QWORD *a1, __int64 a2)
{
  return a2 != 1
      && !a1[66]
      && ((*(_DWORD *)(a1[47] + 768LL) & 4) != 0 || (unsigned int)IsShellThreadMiPEnabled(a1))
      && (!a2 || (*(_DWORD *)(a2 + 100) & 0x20) == 0);
}
