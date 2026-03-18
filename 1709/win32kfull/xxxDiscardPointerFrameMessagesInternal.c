/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1C01BF6E0
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1C01E3D90 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB58C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01CC920 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  HWND *v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+48h] [rbp+10h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL), a1, 0LL, &v6, v5);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( !v6 )
  {
    v3 = 5LL;
    goto LABEL_3;
  }
  if ( !(unsigned int)xxxDiscardPointerWindowFrameMessages(gptiCurrent, ThreadPointerData) )
  {
LABEL_2:
    v3 = 87LL;
LABEL_3:
    UserSetLastError(v3, v2);
    return 0LL;
  }
  return 1LL;
}
