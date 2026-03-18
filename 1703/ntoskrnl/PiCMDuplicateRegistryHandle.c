/*
 * XREFs of PiCMDuplicateRegistryHandle @ 0x14043E3D8
 * Callers:
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceKey @ 0x14043DDA0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14043DF64 (PiCMOpenObjectKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14059AAF8 (PiCMOpenDeviceInterfaceKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PiCMDuplicateRegistryHandle(
        void *a1,
        __int64 a2,
        ACCESS_MASK a3,
        KPROCESSOR_MODE a4,
        HANDLE *Handle)
{
  NTSTATUS v7; // edi
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
    v7 = ObOpenObjectByPointer(Object, 0x440u, 0LL, a3, (POBJECT_TYPE)CmKeyObjectType, a4, Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
