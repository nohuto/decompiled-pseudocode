/*
 * XREFs of SeSetSecurityDescriptorInfo @ 0x1404F50B0
 * Callers:
 *     IopSetDeviceSecurityDescriptor @ 0x14044E0A0 (IopSetDeviceSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1404BF12C (CmpSetSecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404F3C20 (ObSetSecurityDescriptorInfo.c)
 * Callees:
 *     RtlpSetSecurityObject @ 0x1404F50F0 (RtlpSetSecurityObject.c)
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
             (_DWORD)Object,
             *SecurityInformation,
             (_DWORD)ModificationDescriptor,
             (_DWORD)ObjectsSecurityDescriptor,
             0,
             PoolType,
             (__int64)GenericMapping);
  else
    return -1073741609;
}
