/*
 * XREFs of EtwpCancelPendingStackwalkApcs @ 0x140129264
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA300 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeRemoveQueueApc @ 0x140126E68 (KeRemoveQueueApc.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     EtwpFinalizePendingApc @ 0x14027F99C (EtwpFinalizePendingApc.c)
 */

void __fastcall EtwpCancelPendingStackwalkApcs(unsigned int *a1)
{
  _BYTE *v2; // rdi
  unsigned int i; // esi

  v2 = a1 + 240;
  for ( i = 0; i < 0xC; ++i )
  {
    if ( *v2 == 18 && (unsigned __int8)KeRemoveQueueApc((__int64)v2) )
      EtwpFinalizePendingApc(a1, &a1[24 * i + 240]);
    v2 += 96;
  }
  if ( (unsigned __int8)KeRemoveQueueDpcEx(a1 + 218, 0LL) )
  {
    ExReleaseRundownProtectionCacheAwareEx(
      *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a1 + 282) + 416LL) + 8LL * *a1),
      1u);
    _interlockedbittestandreset((volatile signed __int32 *)a1 + 212, 1u);
  }
}
