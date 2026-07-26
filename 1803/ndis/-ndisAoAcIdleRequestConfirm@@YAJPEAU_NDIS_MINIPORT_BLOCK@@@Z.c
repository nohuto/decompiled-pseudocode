/*
 * XREFs of ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072C0C
 * Callers:
 *     NdisMIdleNotificationConfirm @ 0x1C006FC80 (NdisMIdleNotificationConfirm.c)
 * Callees:
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00F69DC (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisAoAcIdleRequestConfirm(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // al

  AoAc = a1->AoAc;
  v2 = a1;
  v3 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  *(_WORD *)&AoAc->SSIdleConfirmed = 257;
  KeReleaseSpinLock(&AoAc->Lock, v3);
  LODWORD(v2) = ndisRequestNicQuiet(v2, 1u);
  v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  AoAc->SSIdleConfirmInProgress = 0;
  KeReleaseSpinLock(&AoAc->Lock, v4);
  return (unsigned int)v2;
}
