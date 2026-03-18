/*
 * XREFs of HUBMUX_ReleaseResetReference @ 0x1C000DA70
 * Callers:
 *     HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled @ 0x1C000F0D0 (HUBPSM30_ReleasingResetReferenceInSuperSpeedDisabled.c)
 *     HUBPSM30_ReleasingResetReferenceOnDeviceRemoval @ 0x1C000FEB0 (HUBPSM30_ReleasingResetReferenceOnDeviceRemoval.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 */

void __fastcall HUBMUX_ReleaseResetReference(volatile signed __int32 *a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)a1;
  _InterlockedAnd(a1 + 66, 0xFFFFFFEF);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 2328), 0xFFFFFFFF) == 1 )
    HUBSM_AddEvent(v1 + 1256, 2062);
}
