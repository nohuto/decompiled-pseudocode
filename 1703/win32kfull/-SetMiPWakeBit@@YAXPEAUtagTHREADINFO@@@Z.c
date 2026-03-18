/*
 * XREFs of ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000718C
 * Callers:
 *     SetMiPPromotion @ 0x1C0007104 (SetMiPPromotion.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall SetMiPWakeBit(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdx

  v1 = 4LL;
  if ( (**((_DWORD **)a1 + 142) & 0x20) == 0 )
    v1 = 2LL;
  SetWakeBit(a1, v1);
}
