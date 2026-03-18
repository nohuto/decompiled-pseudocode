/*
 * XREFs of PopFreeUnicodeString @ 0x140525474
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x140524BE4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1405250AC (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForAudio @ 0x1405E90A0 (PopAvlFindOrMakeStatsForAudio.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
