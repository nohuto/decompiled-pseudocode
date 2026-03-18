/*
 * XREFs of ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01205C8
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0003F50 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01202E0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned __int8 *a9)
{
  CTouchProcessor *v9; // rdi
  __int64 ThreadPointerData; // rdx
  int v12; // ecx
  CTouchProcessor *v14; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

  v14 = this;
  v9 = *(CTouchProcessor **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1056),
                        a3,
                        &v15,
                        (int *)&v14,
                        0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( !(_DWORD)v14 )
  {
    v12 = 5;
    goto LABEL_3;
  }
  if ( a4 != 1 && a4 != v15 )
  {
    v12 = 1629;
    goto LABEL_3;
  }
  if ( !(unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(v9, ThreadPointerData, a4, a5, a6, a7, a8, a9) )
  {
LABEL_2:
    v12 = 87;
LABEL_3:
    UserSetLastError(v12);
    return 0LL;
  }
  return 1LL;
}
