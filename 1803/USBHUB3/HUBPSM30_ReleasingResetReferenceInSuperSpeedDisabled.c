/*
 * XREFs of HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled @ 0x1C000F060
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseResetReference @ 0x1C000DA00 (HUBMUX_ReleaseResetReference.c)
 */

__int64 __fastcall HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled(__int64 a1)
{
  HUBMUX_ReleaseResetReference(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
