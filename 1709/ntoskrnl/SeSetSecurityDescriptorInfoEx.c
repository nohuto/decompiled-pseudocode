/*
 * XREFs of SeSetSecurityDescriptorInfoEx @ 0x140730100
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x140485700 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfoEx(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             (__int64)Object,
             *SecurityInformation,
             (__int64)ModificationDescriptor,
             ObjectsSecurityDescriptor,
             AutoInheritFlags,
             PoolType,
             (__int64)GenericMapping);
  else
    return -1073741609;
}
