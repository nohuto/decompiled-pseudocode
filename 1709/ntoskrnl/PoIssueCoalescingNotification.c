/*
 * XREFs of PoIssueCoalescingNotification @ 0x140240D30
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x14046F484 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x1406FA100 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExReferenceCallBackBlock @ 0x1400A5550 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  signed __int64 *v2; // rdi
  __int64 v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  _BYTE v8[4]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+24h] [rbp-14h]
  __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v2 = (signed __int64 *)&PopCoalescingCallbackRoutine;
  v9 = a2;
  v3 = 32LL;
  v8[0] = *(_BYTE *)(a1 + 32);
  do
  {
    v4 = ExReferenceCallBackBlock(v2);
    v5 = v4;
    if ( v4 )
    {
      if ( LOBYTE(v4[4].Count) != v8[0] )
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, _BYTE *, __int64))v4[1].Count)(v4, v8, v10);
      _m_prefetchw(v2);
      v6 = *v2;
      while ( ((unsigned __int64)v5 ^ v6) < 0xF )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v2, v6 + 1, v6);
        if ( v7 == v6 )
          goto LABEL_9;
      }
      ExReleaseRundownProtection_0(v5);
    }
LABEL_9:
    ++v2;
    --v3;
  }
  while ( v3 );
}
