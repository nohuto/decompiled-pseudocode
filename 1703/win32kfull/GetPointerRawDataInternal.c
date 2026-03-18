/*
 * XREFs of GetPointerRawDataInternal @ 0x1C01BB260
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x1C01DA810 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01C669C (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerRawDataInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  unsigned int v9; // ebx
  unsigned __int64 ThreadPointerData; // r10
  int PointerRawDataWithHistory; // eax

  v9 = 0;
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    if ( (gdwMitConfig & 4) != 0 )
      PointerRawDataWithHistory = CTouchProcessor::GetPointerRawDataWithHistory(
                                    gpTouchProcessor,
                                    ThreadPointerData,
                                    a3,
                                    a4,
                                    a5,
                                    a6,
                                    a7);
    else
      PointerRawDataWithHistory = GetPointerRawDataWithHistory(ThreadPointerData, a3, a4, a5, a6, a7);
    LOBYTE(v9) = PointerRawDataWithHistory != 0;
    return v9;
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
