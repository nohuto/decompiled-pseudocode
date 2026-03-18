/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01BF748
 * Callers:
 *     NtUserPromotePointer @ 0x1C01EA5A0 (NtUserPromotePointer.c)
 *     xxxDefPointerProc @ 0x1C020F46C (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB58C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     xxxPromotePointerDataToMouse @ 0x1C01CED74 (xxxPromotePointerDataToMouse.c)
 */

int __fastcall xxxPromotePointerToMouse(unsigned __int16 a1, unsigned int a2)
{
  __int64 v3; // rdx
  unsigned __int64 ThreadPointerData; // r9
  HWND *v6; // [rsp+20h] [rbp-18h]

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL), a1, 0LL, 0LL, v6);
  if ( ThreadPointerData )
  {
    if ( (gdwMitConfig & 4) != 0 )
      return CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, ThreadPointerData, a2);
    else
      return xxxPromotePointerDataToMouse(ThreadPointerData, a2);
  }
  else
  {
    UserSetLastError(87LL, v3);
    return 0;
  }
}
