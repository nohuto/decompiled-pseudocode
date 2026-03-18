/*
 * XREFs of HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased @ 0x1C000DB5C
 * Callers:
 *     HUBHSM_CheckingPSMInterruptReferencesOnReset @ 0x1C00074B0 (HUBHSM_CheckingPSMInterruptReferencesOnReset.c)
 *     HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt @ 0x1C00074F0 (HUBHSM_CheckingPSMInterruptReferencesOnResetInNoInterrupt.c)
 *     HUBHSM_CheckingPSMInterruptReferencesOnStop @ 0x1C0007520 (HUBHSM_CheckingPSMInterruptReferencesOnStop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // al
  int v3; // ecx
  unsigned int v4; // ebx

  v1 = a1 + 2312;
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2312));
  v3 = *(_DWORD *)(v1 + 20);
  if ( v3 )
    _InterlockedOr((volatile signed __int32 *)(v1 + 32), 1u);
  v4 = 2041;
  if ( !v3 )
    v4 = 2057;
  _InterlockedOr((volatile signed __int32 *)(v1 + 32), 2u);
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v2);
  return v4;
}
