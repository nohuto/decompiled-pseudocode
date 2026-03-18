/*
 * XREFs of IsInsideMenuLoop @ 0x1C00CAF40
 * Callers:
 *     zzzAttachToQueue @ 0x1C00B66AC (zzzAttachToQueue.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsInsideMenuLoop(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *(_QWORD *)(a1 + 528);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 8) & 4) != 0;
  return v2;
}
