/*
 * XREFs of ObpMarkDirectoryTreeTemporary @ 0x140551288
 * Callers:
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x140551300 (ObpMarkDirectoryObjectsTemporary.c)
 */

void __fastcall ObpMarkDirectoryTreeTemporary(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v2; // rdi
  __int64 v3; // r8
  __int64 v4; // r9
  PVOID v5; // rbx

  ObpMarkDirectoryObjectsTemporary(a1);
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL);
    v5 = ObpPendingObjectDirectoryList;
    if ( ObpPendingObjectDirectoryList )
    {
      v2 = (void *)*((_QWORD *)ObpPendingObjectDirectoryList + 1);
      ObpPendingObjectDirectoryList = *(PVOID *)ObpPendingObjectDirectoryList;
    }
    ExReleasePushLockEx((ULONG_PTR)&ObpPendingObjectDirectoryListLock, 0LL, v3, v4);
    KeLeaveCriticalRegion();
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    if ( !v2 )
      break;
    ObpMarkDirectoryObjectsTemporary(v2);
    ObfDereferenceObject(v2);
  }
}
