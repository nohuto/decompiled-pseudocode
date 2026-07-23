/*
 * XREFs of SeComputeAutoInheritByObjectType @ 0x140034000
 * Callers:
 *     <none>
 * Callees:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140093C70 (SeComputeAutoInheritByObjectTypeEx.c)
 */

ULONG __stdcall SeComputeAutoInheritByObjectType(
        PVOID ObjectType,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR ParentSecurityDescriptor)
{
  int v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  SeComputeAutoInheritByObjectTypeEx(
    (int)ObjectType,
    (int)SecurityDescriptor,
    (int)ParentSecurityDescriptor,
    (int)&v4,
    0);
  return v4;
}
