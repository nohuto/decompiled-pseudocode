/*
 * XREFs of RtlConvertToAutoInheritSecurityObject @ 0x1800D1F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlConvertToAutoInheritSecurityObject(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping)
{
  return RtlConvertToAutoInheritSecurityObject_0(
           ParentDescriptor,
           CurrentSecurityDescriptor,
           NewSecurityDescriptor,
           ObjectType,
           IsDirectoryObject,
           GenericMapping);
}
