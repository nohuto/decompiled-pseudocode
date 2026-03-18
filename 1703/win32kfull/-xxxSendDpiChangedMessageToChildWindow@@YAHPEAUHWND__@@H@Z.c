/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01BF4E8
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00FB81C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, int a2)
{
  __int64 result; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v7[5]; // [rsp+40h] [rbp-28h] BYREF

  result = HMValidateHandleNoSecure(a1, 1);
  v4 = (struct tagWND *)result;
  if ( result )
  {
    v7[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v7;
    v7[1] = result;
    ++*(_DWORD *)(result + 8);
    xxxSendMessage(result, 739 - (a2 != 0), 0, 0);
    if ( a2 )
      xxxSetWindowPos(v4, 0LL, 0LL, 0LL, 0, 0, 55);
    ThreadUnlock1(v6, v5);
    return 1LL;
  }
  return result;
}
