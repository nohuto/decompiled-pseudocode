/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x140603064
 * Callers:
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140602FC4 (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404EB190 (SeSetSecurityDescriptorInfo.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, DWORD *a2, void *a3, POOL_TYPE a4, PGENERIC_MAPPING a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *GenericMapping; // r13
  volatile signed __int64 *v11; // rbx
  int v12; // ebp
  unsigned int v13; // edx
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  GenericMapping = a5;
  while ( 1 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 3, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v11;
    v12 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, a4, GenericMapping);
    if ( v12 < 0 )
      break;
    v12 = ObLogSecurityDescriptor((char *)ObjectsSecurityDescriptor, &v15, 1u);
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
    if ( v12 < 0 )
      goto LABEL_13;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = v15;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v13 = 2;
LABEL_8:
      ObDereferenceSecurityDescriptor((__int64)v11, v13);
      return (unsigned int)v12;
    }
    ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ObDereferenceSecurityDescriptor((__int64)v11, 1u);
    ObDereferenceSecurityDescriptor(v15, 1u);
  }
  if ( v11 )
  {
LABEL_13:
    v13 = 1;
    goto LABEL_8;
  }
  return (unsigned int)v12;
}
