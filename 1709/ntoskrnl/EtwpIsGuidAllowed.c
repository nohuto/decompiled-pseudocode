/*
 * XREFs of EtwpIsGuidAllowed @ 0x14048E60C
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1404901C0 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x1404EFD60 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x140743A34 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140743BBC (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x14015EEB0 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  unsigned __int16 v5; // ax
  bool v6; // di

  v2 = (signed __int64 *)(a1 + 704);
  ExAcquirePushLockSharedEx(a1 + 704, 0LL);
  v5 = *(_WORD *)(a1 + 2192);
  if ( v5 )
    v6 = bsearch(a2, *(const void **)(a1 + 2200), v5, 0x10uLL, EtwpCompareGuid) == 0LL;
  else
    v6 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
