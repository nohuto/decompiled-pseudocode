/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C011F6C0
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C00E7CE0 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C011F750 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1C01391AC (ApiSetDoesPointerHaveSingleCursor.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  CTouchProcessor *v5; // rsi
  unsigned __int64 ThreadPointerData; // rdi

  v5 = *(CTouchProcessor **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1056),
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
  else if ( !(unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData(v5, ThreadPointerData, a4) )
  {
LABEL_2:
    UserSetLastError(87);
    return 0LL;
  }
  return 1LL;
}
