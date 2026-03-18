/*
 * XREFs of ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0115808
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C00B69F0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C0114380 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  __int64 *v6; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 ThreadPointerData; // rsi
  int v13; // ecx
  __int64 v15; // [rsp+28h] [rbp-10h]
  CTouchProcessor *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = this;
  v6 = (__int64 *)gpTouchProcessor;
  if ( a5 != (unsigned int)GetPointerInfoSize(a4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        (CTouchProcessor *)v6,
                        (struct tagTHREADINFO *)((char *)a2 + 1072),
                        a3,
                        (unsigned int *)&v16,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
    LODWORD(v15) = a3;
    WPP_RECORDER_SF_D(v6[1], 2u, 4u, 0x146u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids, v15);
LABEL_5:
    v13 = 87;
LABEL_6:
    UserSetLastError(v13);
    return 0LL;
  }
  if ( a4 != 1 && a4 != (_DWORD)v16 )
  {
    WPP_RECORDER_SF_(v6[1], 2u, 0xBu, 0x147u, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    v13 = 1629;
    goto LABEL_6;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerData((CTouchProcessor *)v6, ThreadPointerData, a4, a5, a6) )
  {
    WPP_RECORDER_SF_q(
      v6[1],
      2u,
      0xBu,
      0x148u,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids,
      ThreadPointerData);
    goto LABEL_5;
  }
  return 1LL;
}
