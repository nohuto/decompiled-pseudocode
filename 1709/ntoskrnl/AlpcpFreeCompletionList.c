/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406DD928
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140464584 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1404EB08C (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406DE134 (AlpcpUnregisterCompletionListDatabase.c)
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
