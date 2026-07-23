/*
 * XREFs of RtlSetSecurityObject @ 0x180050300
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
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

  return sub_18004FBBC(
           *(__int64 *)&SecurityInformation,
           SecurityInformation,
           (__int64)ModificationDescriptor,
           ObjectsSecurityDescriptor,
           0,
           v6,
           GenericMapping,
           TokenHandle);
}
