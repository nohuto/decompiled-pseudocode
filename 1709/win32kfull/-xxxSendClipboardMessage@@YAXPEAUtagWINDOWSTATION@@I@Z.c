/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00C5834
 * Callers:
 *     xxxDisownClipboard @ 0x1C00C4CC4 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00C55F4 (xxxEmptyClipboard.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v14[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[3]; // [rsp+68h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 10);
  v5 = a2;
  if ( v4 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v14[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v14;
    v14[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( v5 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(
              (__int64 *)v4,
              775LL,
              0LL,
              0LL,
              2,
              5000,
              (__int64 *)&BugCheckParameter3,
              1u,
              0) )
        xxxSendNotifyMessage((struct tagWND *)v4, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v9 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v4 + 16) + 400LL), 0LL, 2LL);
      v11 = v9;
      if ( v9 )
        PushW32ThreadLock(v9, v15, (__int64)ReleaseWakeReference, v10);
      xxxSendTransformableMessageTimeout((__int64 *)v4, v5, 0LL, 0LL, 64, 0, (__int64 *)&BugCheckParameter3, 1u, 0);
      if ( v11 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v15, v7, v12, v13);
    }
    ThreadUnlock1(v8, v7);
  }
}
