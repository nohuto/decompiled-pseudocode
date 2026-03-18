/*
 * XREFs of ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01C2EA8
 * Callers:
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01C2F48 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

ULONG_PTR __fastcall xxxSendGDIScaledDpiChangedMessage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG_PTR v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[5]; // [rsp+40h] [rbp-28h] BYREF

  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v8 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    v12[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v12;
    v12[1] = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( (*(_DWORD *)(v8 + 304) & 0x40000000) != 0 )
      xxxSendMessage(v8);
    xxxSetWindowPos((struct tagWND *)v8, 0LL, 0LL, 0LL, 0, 0, 32823);
    ThreadUnlock1(v11, v10);
    return 1LL;
  }
  return result;
}
