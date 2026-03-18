/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01BBA34
 * Callers:
 *     NtUserPromotePointer @ 0x1C01DE4A0 (NtUserPromotePointer.c)
 *     xxxDefPointerProc @ 0x1C020DC48 (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

int __fastcall xxxPromotePointerToMouse(unsigned __int16 a1, unsigned int a2)
{
  unsigned __int64 ThreadPointerData; // r9

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL), a1, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    if ( (gdwMitConfig & 4) != 0 )
      return CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, ThreadPointerData, a2);
    else
      return xxxPromotePointerDataToMouse(ThreadPointerData, a2);
  }
  else
  {
    UserSetLastError(87LL);
    return 0;
  }
}
