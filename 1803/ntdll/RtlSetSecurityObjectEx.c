/*
 * XREFs of RtlSetSecurityObjectEx @ 0x1800D25C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlSetSecurityObjectEx(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  int v7; // [rsp+28h] [rbp-20h]

  return sub_1800785AC(
           *(__int64 *)&SecurityInformation,
           SecurityInformation,
           (__int64)ModificationDescriptor,
           ObjectsSecurityDescriptor,
           AutoInheritFlags,
           v7,
           (__int64)GenericMapping,
           TokenHandle);
}
