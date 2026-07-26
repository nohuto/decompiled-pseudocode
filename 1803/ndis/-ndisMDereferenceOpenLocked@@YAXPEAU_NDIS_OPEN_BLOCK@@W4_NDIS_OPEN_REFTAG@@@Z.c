/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C280
 * Callers:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C1F0 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0051C90 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052330 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C00610B0 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C00614CC (ndisMResetCompleteStage2.c)
 *     ndisMKillOpen @ 0x1C0102BA4 (ndisMKillOpen.c)
 *     ndisCreateNotifyQueue @ 0x1C010DDE8 (ndisCreateNotifyQueue.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0111810 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0111F70 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AD90 (NdisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C0102F48 (ndisMFinishClose.c)
 */

void __fastcall ndisMDereferenceOpenLocked(__int64 a1, unsigned __int8 a2)
{
  KSPIN_LOCK *v2; // rdi
  int v5; // ebx

  v2 = (KSPIN_LOCK *)(a1 + 696);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 696));
  NdisDereferenceWithTag(*(_QWORD *)(a1 + 688), a2);
  v5 = --*(_DWORD *)(a1 + 228);
  KeReleaseSpinLockFromDpcLevel(v2);
  if ( !v5 )
    ndisMFinishClose(a1);
}
