/*
 * XREFs of IopAllocateFileObjectExtension @ 0x140069670
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140068044 (IoSetOplockPrivateFoExt.c)
 *     IopSetFileObjectExtensionFlag @ 0x1400686C4 (IopSetFileObjectExtensionFlag.c)
 *     IoGetFileObjectFilterContext @ 0x1400688E4 (IoGetFileObjectFilterContext.c)
 *     IopGetSetSpecificExtension @ 0x1400694F0 (IopGetSetSpecificExtension.c)
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IoSetOplockKeyContext @ 0x14015AF04 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x140236E70 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopRevokeFileObjectForProcess @ 0x140237D18 (IopRevokeFileObjectForProcess.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404E36C8 (IopAllocateFoExtensionsOnCreate.c)
 *     IopSymlinkSetFoExtension @ 0x14057FB48 (IopSymlinkSetFoExtension.c)
 *     IoRegisterContainerNotification @ 0x140651FD0 (IoRegisterContainerNotification.c)
 *     IopSetFileObjectIosbRange @ 0x14071AF1C (IopSetFileObjectIosbRange.c)
 *     IoSetFileObjectIgnoreSharing @ 0x14071C760 (IoSetFileObjectIgnoreSharing.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14071CDA4 (IopSetFileMemoryPartitionInformation.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400694C0 (IopVerifierExAllocatePool_0.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbp
  __int64 v8; // rcx
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
    v7 = *(_QWORD *)(a1 + 208);
    if ( !v7 )
    {
      KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
      __writecr8(CurrentIrql);
      Pool_0 = IopVerifierExAllocatePool_0(v8, 0x58uLL);
      v7 = (__int64)Pool_0;
      if ( !Pool_0 )
        return 3221225626LL;
      memset(Pool_0, 0, 0x58uLL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 184));
      if ( *(_QWORD *)(a1 + 208) )
      {
        v3 = (void *)v7;
        v7 = *(_QWORD *)(a1 + 208);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a1 + 208), v7);
      }
    }
    if ( a2 )
      *a2 = v7;
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 184));
    __writecr8(CurrentIrql);
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
}
