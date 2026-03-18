/*
 * XREFs of AlpcpFreeCompletionList @ 0x14056C968
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140473994 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x14055D284 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x14056C9C4 (AlpcpUnregisterCompletionListDatabase.c)
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
