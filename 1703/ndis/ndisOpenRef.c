/*
 * XREFs of ndisOpenRef @ 0x1C001CA54
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOpenRef(__int64 a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
  *(_BYTE *)(a1 + 10) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1, v2);
}
