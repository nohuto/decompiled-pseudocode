/*
 * XREFs of PoIssueCoalescingNotification @ 0x14027828C
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x14049367C (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x140761590 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     ExReferenceCallBackBlock @ 0x14003EA30 (ExReferenceCallBackBlock.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *i; // rbx
  signed __int64 *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _BYTE v9[4]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+24h] [rbp-14h]
  __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = 0LL;
  v10 = a2;
  v9[0] = *(_BYTE *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopCoalRegistrationListLock, 0LL);
  for ( i = (signed __int64 *)PopCoalRegistrationList;
        i != (signed __int64 *)&PopCoalRegistrationList;
        i = (signed __int64 *)*i )
  {
    v4 = i + 2;
    v5 = ExReferenceCallBackBlock(i + 2);
    v6 = v5;
    if ( v5 )
    {
      if ( *((_BYTE *)i - 16) != v9[0] )
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, _BYTE *, __int64))v5[1].Count)(v5, v9, v11);
      _m_prefetchw(v4);
      v7 = *v4;
      while ( ((unsigned __int64)v6 ^ v7) < 0xF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v4, v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_9;
      }
      ExReleaseRundownProtection(v6);
    }
LABEL_9:
    ;
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
}
