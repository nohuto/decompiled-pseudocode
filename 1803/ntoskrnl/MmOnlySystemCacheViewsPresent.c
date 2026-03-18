/*
 * XREFs of MmOnlySystemCacheViewsPresent @ 0x1400820DC
 * Callers:
 *     CcCoherencyFlushAndPurgeCache @ 0x140082000 (CcCoherencyFlushAndPurgeCache.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1400E1590 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

char __fastcall MmOnlySystemCacheViewsPresent(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // bl
  unsigned __int8 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = MiLockSectionControlArea(a1, 1LL, &v4);
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)(v1 + 40) == *(unsigned int *)(v1 + 88);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 72));
  __writecr8(v4);
  return v2;
}
