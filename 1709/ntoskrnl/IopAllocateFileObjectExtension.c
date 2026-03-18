/*
 * XREFs of IopAllocateFileObjectExtension @ 0x140060ED0
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140024360 (IoSetOplockPrivateFoExt.c)
 *     IopGetSetSpecificExtension @ 0x140024EE4 (IopGetSetSpecificExtension.c)
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IoGetFileObjectFilterContext @ 0x140110FA0 (IoGetFileObjectFilterContext.c)
 *     IoSetOplockKeyContext @ 0x14014862C (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1401F9B70 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSetFileObjectExtensionFlag @ 0x1401FA25C (IopSetFileObjectExtensionFlag.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404922C4 (IopAllocateFoExtensionsOnCreate.c)
 *     IopSymlinkSetFoExtension @ 0x1405E0514 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x1406B622C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x1406B8098 (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x140024EB4 (IopVerifierExAllocatePool_0.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rbp
  __int64 v9; // rcx
  PVOID Pool_0; // rax

  v2 = *(void **)(a1 + 208);
  v3 = 0LL;
  if ( v2 )
  {
    if ( v2 == IopRevocationExtension )
    {
      return 3221225626LL;
    }
    else
    {
      if ( a2 )
        *a2 = (__int64)v2;
      return 0LL;
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
    v8 = *(_QWORD *)(a1 + 208);
    if ( !v8 )
    {
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
      __writecr8(CurrentIrql);
      Pool_0 = IopVerifierExAllocatePool_0(v9, 0x58uLL);
      v8 = (__int64)Pool_0;
      if ( !Pool_0 )
        return 3221225626LL;
      memset(Pool_0, 0, 0x58uLL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)v8;
        v8 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), v8);
      }
    }
    if ( a2 )
      *a2 = v8;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
    __writecr8(CurrentIrql);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
}
