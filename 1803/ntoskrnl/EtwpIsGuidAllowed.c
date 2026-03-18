/*
 * XREFs of EtwpIsGuidAllowed @ 0x140591820
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x14058C6E4 (EtwpIsRegEntryAllowed.c)
 *     EtwpAddRegEntryToGroup @ 0x14058F4F0 (EtwpAddRegEntryToGroup.c)
 *     EtwpDisallowedGuidAddition @ 0x1407A5704 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     bsearch @ 0x140188C00 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  unsigned __int16 v5; // ax
  bool v6; // di

  v2 = (signed __int64 *)(a1 + 704);
  ExAcquirePushLockSharedEx(a1 + 704, 0LL);
  v5 = *(_WORD *)(a1 + 1048);
  if ( v5 )
    v6 = bsearch(a2, *(const void **)(a1 + 1056), v5, 0x10uLL, EtwpCompareGuid) == 0LL;
  else
    v6 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
