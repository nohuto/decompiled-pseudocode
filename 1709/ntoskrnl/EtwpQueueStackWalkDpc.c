/*
 * XREFs of EtwpQueueStackWalkDpc @ 0x14027FC0C
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x14027FA30 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FA3C0 (ExAcquireRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpQueueStackWalkDpc(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int Number; // r8d

  if ( _interlockedbittestandset((volatile signed __int32 *)a2 + 212, 1u) )
    return 259LL;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 282) + 416LL) + 8LL * *a2),
          1u) )
    return 3221225473LL;
  *((_QWORD *)a2 + 107) = *a3;
  *((_QWORD *)a2 + 108) = a1;
  Number = KeGetCurrentPrcb()->Number;
  if ( !*((_QWORD *)a2 + 116) )
    *((_WORD *)a2 + 437) = Number + 1280;
  if ( KeInsertQueueDpc((PRKDPC)(a2 + 218), a2, 0LL) )
    return 0LL;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 282) + 416LL) + 8LL * *a2),
    1u);
  return 3221225626LL;
}
