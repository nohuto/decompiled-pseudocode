/*
 * XREFs of ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01C1874
 * Callers:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01C14E4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01C1664 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 */

void __fastcall xxxSendOpenStatusNotify(PRKPROCESS **a1, struct tagIMEUI *a2, struct tagWND *a3, int a4)
{
  __int64 v4; // r9
  _BOOL8 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF

  v4 = (unsigned int)-a4;
  v6 = (_DWORD)v4 != 0;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 2) + 608LL) >= 0x400u && *((_QWORD *)a3 + 33) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, (__int64)a3, v4);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v10;
    v10[1] = a3;
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((__int64 *)a3, 642LL, v6 + 1, 0LL, 0, 0, 0LL, 1u, 1);
    ThreadUnlock1(v9, v8);
  }
  else
  {
    xxxSendMessageToUI(a1, a2, (__int64)a3, v6 + 1);
  }
}
