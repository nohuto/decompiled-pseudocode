/*
 * XREFs of ObpUnlockDirectory @ 0x1400190C8
 * Callers:
 *     ObpReleaseLookupContext @ 0x14001908C (ObpReleaseLookupContext.c)
 *     NtQueryDirectoryObject @ 0x140484130 (NtQueryDirectoryObject.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     NtSetInformationObject @ 0x140566540 (NtSetInformationObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x14056EC10 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x14056ED60 (ObpLookupDirectoryUsingHash.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140587528 (ObpMarkDirectoryObjectsTemporary.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1, __int64 a2)
{
  void *v3; // rcx

  ExReleasePushLockEx(a1 + 296, 0LL);
  v3 = *(void **)a2;
  *(_DWORD *)(a2 + 32) = -286387660;
  ObfDereferenceObject(v3);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 30) = 0;
  KeLeaveCriticalRegion();
}
