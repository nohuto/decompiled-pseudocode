/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1C01BB9C4
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1C01D7580 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01C7CE0 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v2; // rcx
  int v4; // [rsp+48h] [rbp+10h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL), a1, 0LL, &v4, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( !v4 )
  {
    v2 = 5LL;
    goto LABEL_3;
  }
  if ( !(unsigned int)xxxDiscardPointerWindowFrameMessages(gptiCurrent, ThreadPointerData) )
  {
LABEL_2:
    v2 = 87LL;
LABEL_3:
    UserSetLastError(v2);
    return 0LL;
  }
  return 1LL;
}
