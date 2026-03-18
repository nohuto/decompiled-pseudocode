/*
 * XREFs of GetPointerFrameArrivalTimesInternal @ 0x1C01BAF48
 * Callers:
 *     NtUserGetPointerFrameArrivalTimes @ 0x1C01DA0E0 (NtUserGetPointerFrameArrivalTimes.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01C5D10 (-GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerFrameArrivalTimesInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned __int64 ThreadPointerData; // r10

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    if ( (gdwMitConfig & 4) != 0
       ? CTouchProcessor::GetPointerDataArrivalTimes(gpTouchProcessor, ThreadPointerData, a3, a4)
       : GetPointerDataArrivalTimes(ThreadPointerData, a3, a4) )
    {
      return 1LL;
    }
  }
  UserSetLastError(87LL);
  return 0LL;
}
