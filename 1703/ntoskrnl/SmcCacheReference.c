/*
 * XREFs of SmcCacheReference @ 0x140704240
 * Callers:
 *     SmcGetCacheStats @ 0x140704518 (SmcGetCacheStats.c)
 *     SmcStoreCreate @ 0x140704688 (SmcStoreCreate.c)
 *     SmcStoreDelete @ 0x1407048D4 (SmcStoreDelete.c)
 *     SmcStoreResize @ 0x140704BA4 (SmcStoreResize.c)
 *     SmcVolumePnpNotification @ 0x140705110 (SmcVolumePnpNotification.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

struct _EX_RUNDOWN_REF __fastcall SmcCacheReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rbx
  BOOLEAN v5; // dl

  v3.Count = 0LL;
  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 32LL * (a2 & 0xF));
  v5 = ExAcquireRundownProtection(v4 + 1);
  if ( v5 )
  {
    if ( (v4[3].Count & 0xFFF) == a2 >> 4 )
    {
      v3.Count = v4->Count;
      v5 = 0;
    }
    if ( v5 )
      ExReleaseRundownProtection(v4 + 1);
  }
  return v3;
}
