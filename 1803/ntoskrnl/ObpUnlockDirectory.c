/*
 * XREFs of ObpUnlockDirectory @ 0x140061134
 * Callers:
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     NtQueryDirectoryObject @ 0x1404D2500 (NtQueryDirectoryObject.c)
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140551300 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpLookupDirectoryEntryEx @ 0x140558350 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x140558498 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
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
