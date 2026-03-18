/*
 * XREFs of EtwpUseDescriptorTypeUm @ 0x14070A468
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall EtwpUseDescriptorTypeUm(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // ebx
  unsigned __int8 v4; // al
  PVOID v5; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  result = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = *(_BYTE *)(a1 + 8);
    v5 = Object;
    if ( v4 < 2u )
      *((_BYTE *)Object + 102) = v4;
    else
      v3 = -1073741811;
    ObfDereferenceObject(v5);
    return v3;
  }
  return result;
}
