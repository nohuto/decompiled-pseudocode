/*
 * XREFs of ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C01200E4
 * Callers:
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C00E7EC0 (NtUserGetPointerFrameArrivalTimes.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C011F950 (-GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameArrivalTimesInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 *v6; // rbx
  __int64 ThreadPointerData; // rax
  __int64 v10; // [rsp+28h] [rbp-10h]

  v6 = *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1056),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    LODWORD(v10) = a3;
    WPP_RECORDER_SF_d(v6[1], 2u, 0xBu, 0x12Fu, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids, v10);
LABEL_3:
    UserSetLastError(87);
    return 0LL;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerDataArrivalTimes((CTouchProcessor *)v6, ThreadPointerData, a4, a5) )
  {
    WPP_RECORDER_SF_(v6[1], 2u, 0xBu, 0x130u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    goto LABEL_3;
  }
  return 1LL;
}
