/*
 * XREFs of EtwpIsGuidAllowed @ 0x1404F2BA0
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1404F2698 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x1405533E4 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x1405C7F38 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x14016A470 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  unsigned __int16 v5; // ax
  bool v6; // di

  v2 = (signed __int64 *)(a1 + 688);
  ExAcquirePushLockSharedEx(a1 + 688, 0LL);
  v5 = *(_WORD *)(a1 + 880);
  if ( v5 )
    v6 = bsearch(
           a2,
           *(const void **)(a1 + 888),
           v5,
           0x10uLL,
           (int (__cdecl *)(const void *, const void *))EtwpCompareGuid) == 0LL;
  else
    v6 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
