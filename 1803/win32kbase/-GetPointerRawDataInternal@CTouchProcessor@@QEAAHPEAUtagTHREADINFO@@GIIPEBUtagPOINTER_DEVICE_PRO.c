/*
 * XREFs of ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0115DCC
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x1C00B7280 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0115E70 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        unsigned int a7,
        int *a8)
{
  CTouchProcessor *v8; // rdi
  unsigned int v9; // ebx
  unsigned __int64 ThreadPointerData; // rax

  v8 = gpTouchProcessor;
  v9 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        gpTouchProcessor,
                        (struct tagTHREADINFO *)((char *)a2 + 1072),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    LOBYTE(v9) = (unsigned int)CTouchProcessor::GetPointerRawDataWithHistory(v8, ThreadPointerData, a4, a5, a6, a7, a8) != 0;
    return v9;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
