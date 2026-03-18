/*
 * XREFs of AlpcpFreeCompletionList @ 0x140748648
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1404DAA48 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x14052E020 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140748C68 (AlpcpUnregisterCompletionListDatabase.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}
