/*
 * XREFs of ?ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072CF8
 * Callers:
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C006EEDC (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisAoAcIsDataPathPdcActivatorPresent(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  char v2; // bl
  KIRQL v3; // al

  AoAc = a1->AoAc;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( AoAc->ComponentRefCounts[15] > 0 || AoAc->ComponentRefCounts[16] > 0 && ndisPowerRefManagementState == 1 )
    v2 = 1;
  KeReleaseSpinLock(&AoAc->Lock, v3);
  return v2;
}
