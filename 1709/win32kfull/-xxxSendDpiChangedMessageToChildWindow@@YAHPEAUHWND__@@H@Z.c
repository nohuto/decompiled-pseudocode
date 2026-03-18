/*
 * XREFs of ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01C2DFC
 * Callers:
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

ULONG_PTR __fastcall xxxSendDpiChangedMessageToChildWindow(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  ULONG_PTR result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v9 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
    v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v13;
    v13[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    xxxSendMessage(v9);
    if ( v4 )
      xxxSetWindowPos((struct tagWND *)v9, 0LL, 0LL, 0LL, 0, 0, 55);
    ThreadUnlock1(v12, v11);
    return 1LL;
  }
  return result;
}
