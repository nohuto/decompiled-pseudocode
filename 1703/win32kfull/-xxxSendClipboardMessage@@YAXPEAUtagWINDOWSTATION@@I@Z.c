/*
 * XREFs of ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00AE988
 * Callers:
 *     xxxDisownClipboard @ 0x1C00AE014 (xxxDisownClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00AE73C (xxxEmptyClipboard.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxSendClipboardMessage(struct tagWINDOWSTATION *a1, unsigned int a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD v8[3]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+68h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  if ( v2 )
  {
    v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v8;
    v8[1] = v2;
    ++*(_DWORD *)(v2 + 8);
    if ( a2 == 775 )
    {
      if ( !xxxSendTransformableMessageTimeout(v2, 0x307u, 0LL, 0LL, 2, 5000, (__int64 *)&BugCheckParameter3, 1, 0) )
        xxxSendNotifyMessage((struct tagWND *)v2, 0x307u, 0LL, 0LL, 1);
    }
    else
    {
      v6 = PsChargeProcessWakeCounter(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 376LL), 0LL, 2LL);
      v7 = v6;
      if ( v6 )
        PushW32ThreadLock(v6, v9, (__int64)ReleaseWakeReference);
      xxxSendTransformableMessageTimeout(v2, a2, 0LL, 0LL, 64, 0, (__int64 *)&BugCheckParameter3, 1, 0);
      if ( v7 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v9);
    }
    ThreadUnlock1(v5, v4);
  }
}
