/*
 * XREFs of IsThreadMiPEnabled @ 0x1C00CF820
 * Callers:
 *     IsMouseInPointerActive @ 0x1C00CF7DC (IsMouseInPointerActive.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C01E2FF0 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C01EA540 (NtUserPromoteMouseInPointer.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01F7150 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsThreadMiPEnabled(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 776LL) & 4) != 0 || (*(_DWORD *)(a1 + 1184) & 0x2000000) != 0;
}
