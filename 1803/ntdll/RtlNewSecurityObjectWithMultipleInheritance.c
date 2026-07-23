/*
 * XREFs of RtlNewSecurityObjectWithMultipleInheritance @ 0x1800D2240
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 */

NTSTATUS __cdecl RtlNewSecurityObjectWithMultipleInheritance(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CreatorDescriptor,
        PSECURITY_DESCRIPTOR *NewDescriptor,
        GUID **ObjectType,
        ULONG GuidCount,
        BOOLEAN IsDirectoryObject,
        ULONG AutoInheritFlags,
        HANDLE Token,
        PGENERIC_MAPPING GenericMapping)
{
  return sub_18002ED3C(
           (__int64)ParentDescriptor,
           CreatorDescriptor,
           NewDescriptor,
           (__int64)ObjectType,
           GuidCount,
           IsDirectoryObject,
           AutoInheritFlags,
           Token,
           GenericMapping,
           0LL);
}
