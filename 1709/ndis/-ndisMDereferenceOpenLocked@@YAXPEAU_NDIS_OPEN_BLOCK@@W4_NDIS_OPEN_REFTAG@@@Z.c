/*
 * XREFs of ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0001B74
 * Callers:
 *     NdisClOpenAddressFamilyEx @ 0x1C0051340 (NdisClOpenAddressFamilyEx.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00519D0 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisMReset @ 0x1C00606A0 (ndisMReset.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060AB4 (ndisMResetCompleteStage2.c)
 *     ndisMKillOpen @ 0x1C00FF208 (ndisMKillOpen.c)
 *     ndisCreateNotifyQueue @ 0x1C010BE58 (ndisCreateNotifyQueue.c)
 *     NdisCmCloseAddressFamilyComplete @ 0x1C010F810 (NdisCmCloseAddressFamilyComplete.c)
 *     NdisCmOpenAddressFamilyComplete @ 0x1C010FF60 (NdisCmOpenAddressFamilyComplete.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0006C70 (NdisDereferenceWithTag.c)
 *     ndisMFinishClose @ 0x1C00FF3D8 (ndisMFinishClose.c)
 */

void __fastcall ndisMDereferenceOpenLocked(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  int v3; // ebx

  v1 = (KSPIN_LOCK *)(a1 + 696);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 696));
  NdisDereferenceWithTag(*(_QWORD *)(a1 + 688));
  v3 = --*(_DWORD *)(a1 + 228);
  KeReleaseSpinLockFromDpcLevel(v1);
  if ( !v3 )
    ndisMFinishClose(a1);
}
