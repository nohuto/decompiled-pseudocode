/*
 * XREFs of ObpMarkDirectoryTreeTemporary @ 0x1405874B0
 * Callers:
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140587528 (ObpMarkDirectoryObjectsTemporary.c)
 */

void __fastcall ObpMarkDirectoryTreeTemporary(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v2; // rdi
  PVOID v3; // rbx

  ObpMarkDirectoryObjectsTemporary(a1);
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
    v3 = ObpPendingObjectDirectoryList;
    if ( ObpPendingObjectDirectoryList )
    {
      v2 = (void *)*((_QWORD *)ObpPendingObjectDirectoryList + 1);
      ObpPendingObjectDirectoryList = *(PVOID *)ObpPendingObjectDirectoryList;
    }
    ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    if ( !v2 )
      break;
    ObpMarkDirectoryObjectsTemporary(v2);
    ObfDereferenceObject(v2);
  }
}
