/*
 * XREFs of xxxFocusSetInputContext @ 0x1C008585C
 * Callers:
 *     xxxDeactivate @ 0x1C0051FE8 (xxxDeactivate.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxSendFocusMessages @ 0x1C0085538 (xxxSendFocusMessages.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01405C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00E34AC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall xxxFocusSetInputContext(__int64 *a1, int a2, int a3)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a1[21];
  if ( (*(_BYTE *)(v5 + 102) & 1) == 0 && *(_WORD *)(v5 + 8) != *(_WORD *)(gpsi + 882LL) )
  {
    v7 = a1[2];
    v8 = *(_QWORD *)(v7 + 752);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v7 + 464) & 1) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = v13;
        v13[1] = v8;
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v10 = *a1;
        if ( a3 )
          QueueNotifyTransformableMessage((struct tagWND *)v8, 0x287u, 24LL - (a2 != 0), v10, 0, 0);
        else
          xxxSendMessage(v8, 647LL, 24LL - (a2 != 0), v10);
        ThreadUnlock1(v12, v11);
      }
    }
  }
}
