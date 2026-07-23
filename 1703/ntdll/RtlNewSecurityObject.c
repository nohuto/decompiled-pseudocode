/*
 * XREFs of RtlNewSecurityObject @ 0x180086680
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 */

NTSTATUS __cdecl RtlNewSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        BOOLEAN IsDirectoryObject,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return sub_180047D44(
           (__int64)ParentDescriptor,
           CreatorDescriptor,
           NewDescriptor,
           0LL,
           0,
           IsDirectoryObject,
           0,
           Token,
           GenericMapping,
           0LL);
}
