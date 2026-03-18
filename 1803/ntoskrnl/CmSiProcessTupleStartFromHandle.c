/*
 * XREFs of CmSiProcessTupleStartFromHandle @ 0x14017739C
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x14062C3D8 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmSiProcessTupleStartFromHandle(void *a1, void *a2)
{
  NTSTATUS v3; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Object = a1;
  v3 = ObReferenceObjectByHandle(a2, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
  if ( v3 < 0 )
  {
    if ( Object )
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    v3 = 0;
    qword_1403CA2E8 = (ULONG_PTR)Object;
    CmpRegistryProcess = (__int64)a2;
  }
  return (unsigned int)v3;
}
