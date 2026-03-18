/*
 * XREFs of PoIssueCoalescingNotification @ 0x14022D7D4
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x14045B5F8 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x1406C9520 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14008BC80 (ExReferenceCallBackBlock.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
  v3 = 8LL;
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
      ExReleaseRundownProtection(v5);
    }
LABEL_9:
    ++v2;
    --v3;
  }
  while ( v3 );
}
