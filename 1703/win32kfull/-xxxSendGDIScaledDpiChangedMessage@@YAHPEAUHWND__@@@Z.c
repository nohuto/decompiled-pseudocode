/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01BF58C
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BF624 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 */

__int64 __fastcall xxxSendGDIScaledDpiChangedMessage(unsigned __int64 a1)
{
  __int64 result; // rax
  struct tagWND *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[5]; // [rsp+40h] [rbp-28h] BYREF

  result = HMValidateHandleNoSecure(a1, 1);
  v2 = (struct tagWND *)result;
  if ( result )
  {
    v5[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v5;
    v5[1] = result;
    ++*(_DWORD *)(result + 8);
    if ( (*(_DWORD *)(result + 304) & 0x40000000) != 0 )
      xxxSendMessage(result, 741, 0, 0);
    xxxSetWindowPos(v2, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v4, v3);
    return 1LL;
  }
  return result;
}
