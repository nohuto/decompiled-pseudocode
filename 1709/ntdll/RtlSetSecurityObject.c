/*
 * XREFs of RtlSetSecurityObject @ 0x18005AF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x18005A120 (RtlpSetSecurityObject.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlSetSecurityObject(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  int v6; // [rsp+28h] [rbp-20h]

  return RtlpSetSecurityObject(
           *(__int64 *)&SecurityInformation,
           SecurityInformation,
           (__int64)ModificationDescriptor,
           ObjectsSecurityDescriptor,
           0,
           v6,
           GenericMapping,
           TokenHandle);
}
