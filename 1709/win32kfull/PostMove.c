/*
 * XREFs of PostMove @ 0x1C00CF348
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0104150 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01C0328 (-PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z.c)
 */

void __fastcall PostMove(struct tagQ *a1)
{
  if ( (gdwMitConfig & 1) != 0 )
    PostPendingMouseMove();
  else
    PostMoveToPwnd(a1, (struct tagWND *)gdwMitConfig, 0);
}
