/*
 * XREFs of IopAllocateFileObjectExtension @ 0x1400478A0
 * Callers:
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     IopGetSetSpecificExtension @ 0x140050EF0 (IopGetSetSpecificExtension.c)
 *     IoGetFileObjectFilterContext @ 0x140051164 (IoGetFileObjectFilterContext.c)
 *     IoSetOplockPrivateFoExt @ 0x1400529AC (IoSetOplockPrivateFoExt.c)
 *     IoSetOplockKeyContext @ 0x14014ECE0 (IoSetOplockKeyContext.c)
 *     IoSetIoPriorityHintIntoFileObject @ 0x1401F4190 (IoSetIoPriorityHintIntoFileObject.c)
 *     IopSetFileObjectExtensionFlag @ 0x1401F46EC (IopSetFileObjectExtensionFlag.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048BEC8 (IopAllocateFoExtensionsOnCreate.c)
 *     IopSymlinkSetFoExtension @ 0x140579944 (IopSymlinkSetFoExtension.c)
 *     IopSetFileObjectIosbRange @ 0x14068A5DC (IopSetFileObjectIosbRange.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     IopVerifierExAllocatePool_1 @ 0x14004B4A8 (IopVerifierExAllocatePool_1.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateFileObjectExtension(__int64 a1, __int64 *a2)
{
  void *v2; // rax
  void *v3; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rbp
  __int64 v8; // rcx
  void *Pool_1; // rax

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
      Pool_1 = (void *)IopVerifierExAllocatePool_1(v8, 80LL);
      v7 = (__int64)Pool_1;
      if ( !Pool_1 )
        return 3221225626LL;
      memset(Pool_1, 0, 0x50uLL);
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
