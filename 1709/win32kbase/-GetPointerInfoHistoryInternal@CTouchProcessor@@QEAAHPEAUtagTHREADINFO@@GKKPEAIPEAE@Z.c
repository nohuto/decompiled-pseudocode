/*
 * XREFs of ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0120A14
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0003F50 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C011FDA0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  CTouchProcessor *v8; // rdi
  __int64 ThreadPointerData; // rdx
  int v10; // ecx
  CTouchProcessor *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = this;
  v8 = *(CTouchProcessor **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1056),
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
  if ( !(unsigned int)CTouchProcessor::GetPointerDataWithHistory(v8, ThreadPointerData, a4, a5, a6, a7) )
  {
LABEL_2:
    v10 = 87;
LABEL_3:
    UserSetLastError(v10);
    return 0LL;
  }
  return 1LL;
}
