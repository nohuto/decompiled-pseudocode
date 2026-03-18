/*
 * XREFs of xxxDefPointerProc @ 0x1C020F46C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxPromotePointerToMouse @ 0x1C01BF748 (xxxPromotePointerToMouse.c)
 *     SetMiPPromotion @ 0x1C01C0CFC (SetMiPPromotion.c)
 *     xxxPromotePointerDataToMouse @ 0x1C01CED74 (xxxPromotePointerDataToMouse.c)
 */

__int64 __fastcall xxxDefPointerProc(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( (_WORD)a3 == 1 )
  {
    SetMiPPromotion(gptiCurrent, a2);
  }
  else if ( (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000u);
  }
  else
  {
    xxxPromotePointerDataToMouse(a4, 0x10000000u, a3, a4);
  }
  return 0LL;
}
