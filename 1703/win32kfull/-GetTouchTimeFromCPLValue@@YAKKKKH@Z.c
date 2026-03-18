/*
 * XREFs of ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01E6F24
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     GetTouchHoldTime @ 0x1C01E7470 (GetTouchHoldTime.c)
 * Callees:
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0119BB0 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 */

__int64 __fastcall GetTouchTimeFromCPLValue(unsigned int a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ecx

  v5 = a3;
  if ( !gTouchMonitor && !(unsigned int)LoadPointerDeviceTouchSettings() )
    return a1;
  v8 = HIDWORD(off_1C0324060[2 * v5 + 1]);
  if ( v8 == -1 )
    v8 = (unsigned int)off_1C0324060[2 * v5 + 1];
  if ( v8 > 0x64 || v8 == 50 )
    return a1;
  v9 = 100 - v8;
  if ( !a4 )
    v9 = v8;
  return a1 + a2 * v9 / 0x64 - (a2 >> 1);
}
