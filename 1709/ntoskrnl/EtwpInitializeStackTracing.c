/*
 * XREFs of EtwpInitializeStackTracing @ 0x1404EC7C0
 * Callers:
 *     EtwpInitLoggerContext @ 0x1404EC878 (EtwpInitLoggerContext.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall EtwpInitializeStackTracing(__int64 a1)
{
  _SLIST_ENTRY *v2; // rdi
  __int64 v3; // rbp

  InitializeSListHead((PSLIST_HEADER)(a1 + 96));
  v2 = (_SLIST_ENTRY *)(a1 + 112);
  v3 = 12LL;
  do
  {
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 96), v2);
    v2 += 6;
    --v3;
  }
  while ( v3 );
  KeInitializeDpc((PRKDPC)(a1 + 24), (PKDEFERRED_ROUTINE)EtwpStackWalkDpc, 0LL);
  *(_BYTE *)(a1 + 25) = 2;
}
