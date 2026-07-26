/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0021274
 * Callers:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00211E4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0052500 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0052B90 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C0060660 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060A74 (ndisMResetCompleteStage2.c)
 *     ndisMKillOpen @ 0x1C00FB908 (ndisMKillOpen.c)
 *     ndisCreateNotifyQueue @ 0x1C0102EC8 (ndisCreateNotifyQueue.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C0106800 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C0106F50 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000C850 (NdisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C00FBAD4 (ndisMFinishClose.c)
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
