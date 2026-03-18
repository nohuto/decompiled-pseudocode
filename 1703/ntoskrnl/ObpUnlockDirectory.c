/*
 * XREFs of ObpUnlockDirectory @ 0x140041474
 * Callers:
 *     NtSetInformationObject @ 0x1404276F0 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14044E76C (ObpMarkDirectoryObjectsTemporary.c)
 *     NtQueryDirectoryObject @ 0x14047C040 (NtQueryDirectoryObject.c)
 *     ObpLookupDirectoryEntryEx @ 0x1404F72C0 (ObpLookupDirectoryEntryEx.c)
 *     ObpLookupDirectoryUsingHash @ 0x1404F7410 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
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
