/*
 * XREFs of xxxDefPointerProc @ 0x1C020DC48
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     SetMiPPromotion @ 0x1C0007104 (SetMiPPromotion.c)
 *     xxxPromotePointerToMouse @ 0x1C01BBA34 (xxxPromotePointerToMouse.c)
 *     xxxPromotePointerDataToMouse @ 0x1C01CA940 (xxxPromotePointerDataToMouse.c)
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
