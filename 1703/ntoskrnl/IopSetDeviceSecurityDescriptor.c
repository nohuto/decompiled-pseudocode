/*
 * XREFs of IopSetDeviceSecurityDescriptor @ 0x14044E0A0
 * Callers:
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptors @ 0x1405C9E68 (IopSetDeviceSecurityDescriptors.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404F50B0 (SeSetSecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall IopSetDeviceSecurityDescriptor(__int64 a1, DWORD *a2, void *a3, POOL_TYPE a4, PGENERIC_MAPPING a5)
{
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *GenericMapping; // r13
  volatile signed __int64 *v11; // rbx
  NTSTATUS v12; // ebp
  __int64 v14; // [rsp+30h] [rbp-38h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  GenericMapping = a5;
  while ( 1 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&IopSecurityResource, 1u);
    v11 = *(volatile signed __int64 **)(a1 + 272);
    if ( v11 && _InterlockedExchangeAdd64(v11 - 2, 1uLL) <= 0 )
      __fastfail(0xEu);
    ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v11;
    v12 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, a4, GenericMapping);
    if ( v12 < 0 )
      break;
    v12 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor);
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
    if ( v12 < 0 )
      goto LABEL_8;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&IopSecurityResource, 1u);
    if ( *(volatile signed __int64 **)(a1 + 272) == v11 )
    {
      *(_QWORD *)(a1 + 272) = v14;
      *(_DWORD *)(*(_QWORD *)(a1 + 312) + 32LL) &= ~0x800u;
      ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
LABEL_8:
      ObDereferenceSecurityDescriptor(v11);
      return (unsigned int)v12;
    }
    ExReleaseResourceLite((PERESOURCE)&IopSecurityResource);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    ObDereferenceSecurityDescriptor(v11);
    ObDereferenceSecurityDescriptor(v14);
  }
  if ( v11 )
    goto LABEL_8;
  return (unsigned int)v12;
}
