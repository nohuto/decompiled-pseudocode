/*
 * XREFs of ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C0114DA4
 * Callers:
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00B6830 (NtUserGetPointerFrameArrivalTimes.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C0114510 (-GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameArrivalTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 ThreadPointerData; // rax
  __int64 v10; // [rsp+28h] [rbp-10h]

  v5 = (__int64 *)gpTouchProcessor;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1072),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    LODWORD(v10) = a3;
    WPP_RECORDER_SF_D(v5[1], 2u, 0xBu, 0x144u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids, v10);
LABEL_3:
    UserSetLastError(87);
    return 0LL;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerDataArrivalTimes((CTouchProcessor *)v5, ThreadPointerData, a4, a5) )
  {
    WPP_RECORDER_SF_(v5[1], 2u, 0xBu, 0x145u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_3;
  }
  return 1LL;
}
