/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0120AB0
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0003F50 (NtUserGetPointerInfoList.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C011F7F0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  __int64 *v7; // rdi
  __int64 ThreadPointerData; // rsi
  int v10; // ecx
  __int64 v12; // [rsp+28h] [rbp-10h]
  CTouchProcessor *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = this;
  v7 = *(__int64 **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1056),
                        a3,
                        (unsigned int *)&v13,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    LODWORD(v12) = a3;
    WPP_RECORDER_SF_d(v7[1], 2u, 4u, 0x131u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids, v12);
LABEL_3:
    v10 = 87;
LABEL_4:
    UserSetLastError(v10);
    return 0LL;
  }
  if ( a4 != 1 && a4 != (_DWORD)v13 )
  {
    WPP_RECORDER_SF_(v7[1], 2u, 0xBu, 0x132u, (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    v10 = 1629;
    goto LABEL_4;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerData((CTouchProcessor *)v7, ThreadPointerData, a4, a5, a6) )
  {
    WPP_RECORDER_SF_q(
      v7[1],
      2u,
      0xBu,
      0x133u,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids,
      ThreadPointerData);
    goto LABEL_3;
  }
  return 1LL;
}
