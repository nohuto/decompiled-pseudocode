/*
 * XREFs of ObpLockDirectoryExclusive @ 0x140024034
 * Callers:
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     NtSetInformationObject @ 0x140566540 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140587528 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140843034 (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

LONG_PTR __fastcall ObpLockDirectoryExclusive(__int64 a1, void *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  LONG_PTR result; // rax

  *(_DWORD *)(a1 + 32) = -1431694796;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a2 + 296, 0LL);
  *(_DWORD *)(a1 + 32) = -859041228;
  result = ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 257;
  return result;
}
