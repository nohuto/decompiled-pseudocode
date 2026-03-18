/*
 * XREFs of IsShellThreadMiPEnabled @ 0x1C00CCD80
 * Callers:
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0007080 (NtUserAutoPromoteMouseInPointer.c)
 *     IsMouseInPointerActive @ 0x1C00CCE6C (IsMouseInPointerActive.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _IsMiPShellThreadEnabled @ 0x1C01BD020 (_IsMiPShellThreadEnabled.c)
 *     NtUserPromoteMouseInPointer @ 0x1C01DE420 (NtUserPromoteMouseInPointer.c)
 *     xxxMNEndMenuStateInternal @ 0x1C01EB320 (xxxMNEndMenuStateInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellThreadMiPEnabled(_QWORD *a1)
{
  __int64 v1; // r8
  int v3; // eax
  _QWORD *i; // rcx

  v1 = a1[48];
  if ( a1[47] != *(_QWORD *)(*(_QWORD *)(a1[51] + 8LL) + 168LL) )
    return 0LL;
  v3 = 0;
  for ( i = gaptiShellMiP; !*i || *(_QWORD *)(*i + 384LL) != v1; ++i )
  {
    if ( (unsigned int)++v3 >= 6 )
      return 0LL;
  }
  return 1LL;
}
