/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x1404EB030
 * Callers:
 *     SeDefaultObjectMethod @ 0x1404C6D40 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x14055D0F0 (WmipSecurityMethod.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404EB190 (SeSetSecurityDescriptorInfo.c)
 *     ObAdjustSecurityQuota @ 0x1404EBC20 (ObAdjustSecurityQuota.c)
 *     SeComputeQuotaInformationSize @ 0x1404EBE30 (SeComputeQuotaInformationSize.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(
        _QWORD *Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // esi
  void *v11; // r14
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // al
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v18 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
  v11 = (void *)(*(Object - 1) & 0xFFFFFFFFFFFFFFF0uLL);
  ObjectsSecurityDescriptor = v11;
  v12 = SeSetSecurityDescriptorInfo(
          Object,
          SecurityInformation,
          ModificationDescriptor,
          &ObjectsSecurityDescriptor,
          PoolType,
          GenericMapping);
  if ( v12 < 0 )
  {
    ObjectsSecurityDescriptor = 0LL;
  }
  else
  {
    v12 = ObLogSecurityDescriptor((char *)ObjectsSecurityDescriptor, &v18, 0x10u);
    if ( v12 >= 0 )
    {
      v12 = SeComputeQuotaInformationSize(ObjectsSecurityDescriptor, &v19);
      if ( v12 >= 0 )
      {
        v12 = ObAdjustSecurityQuota(Object, v19);
        if ( v12 >= 0 )
        {
          v15 = _InterlockedExchange64(Object - 1, (v18 | 0xF) & -(__int64)(v18 != 0));
          v18 = 0LL;
          if ( v11 )
            v7 = (v15 & 0xF) + 1;
        }
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL, v13, v14);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v18 )
    ObDereferenceSecurityDescriptor(v18, 0x10u);
  if ( v11 && v7 )
    ObDereferenceSecurityDescriptor((__int64)v11, v7);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v12;
}
