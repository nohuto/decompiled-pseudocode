/*
 * XREFs of ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01C048C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetMiPPromotion @ 0x1C01C0CFC (SetMiPPromotion.c)
 * Callees:
 *     SetWakeBit @ 0x1C00A0D10 (SetWakeBit.c)
 */

void __fastcall SetMiPWakeBit(struct tagTHREADINFO *a1)
{
  __int64 v1; // rdx

  v1 = 4LL;
  if ( (**((_DWORD **)a1 + 153) & 0x20) == 0 )
    v1 = 2LL;
  SetWakeBit((__int64)a1, v1);
}
