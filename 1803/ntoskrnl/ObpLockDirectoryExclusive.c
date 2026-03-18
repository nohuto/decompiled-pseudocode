/*
 * XREFs of ObpLockDirectoryExclusive @ 0x1400A5628
 * Callers:
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140551300 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1408A15F4 (ObInitSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
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
