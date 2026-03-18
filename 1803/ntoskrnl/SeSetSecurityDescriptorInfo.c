/*
 * XREFs of SeSetSecurityDescriptorInfo @ 0x1404EB190
 * Callers:
 *     ObSetSecurityDescriptorInfo @ 0x1404EB030 (ObSetSecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140603064 (IopSetDeviceSecurityDescriptor.c)
 * Callees:
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfo(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             0,
             *SecurityInformation,
             (_DWORD)ModificationDescriptor,
             (_DWORD)ObjectsSecurityDescriptor,
             0,
             PoolType,
             (__int64)GenericMapping,
             0LL);
  else
    return -1073741609;
}
