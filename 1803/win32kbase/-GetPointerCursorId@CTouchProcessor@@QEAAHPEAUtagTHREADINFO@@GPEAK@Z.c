/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C011424C
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C00B6680 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01142E0 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C013D4DC (ApiSetDoesPointerHaveSingleCursor.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  CTouchProcessor *v4; // rdi
  unsigned __int64 ThreadPointerData; // rsi

  v4 = gpTouchProcessor;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1072),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( (unsigned int)ApiSetDoesPointerHaveSingleCursor() )
  {
    *a4 = 0;
  }
  else if ( !(unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData(v4, ThreadPointerData, a4) )
  {
LABEL_2:
    UserSetLastError(87);
    return 0LL;
  }
  return 1LL;
}
