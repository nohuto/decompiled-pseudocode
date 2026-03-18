/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0115768
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C00B69F0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01149E0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  CTouchProcessor *v7; // rdi
  __int64 ThreadPointerData; // rdx
  int v10; // ecx
  CTouchProcessor *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  v7 = gpTouchProcessor;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1072),
                        a3,
                        (unsigned int *)&v12,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( a4 != 1 && a4 != (_DWORD)v12 )
  {
    v10 = 1629;
    goto LABEL_3;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerDataWithHistory(
                        v7,
                        ThreadPointerData,
                        a4,
                        a5,
                        a6,
                        (struct tagPOINTER_INFO *)a7) )
  {
LABEL_2:
    v10 = 87;
LABEL_3:
    UserSetLastError(v10);
    return 0LL;
  }
  return 1LL;
}
