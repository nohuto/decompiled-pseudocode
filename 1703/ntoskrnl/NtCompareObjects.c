/*
 * XREFs of NtCompareObjects @ 0x140452490
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtCompareObjects(void *a1, void *a2)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v7; // [rsp+58h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(a1, 0, 0LL, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = ObReferenceObjectByHandle(a2, 0, 0LL, PreviousMode, &v7, 0LL);
    if ( v5 >= 0 )
    {
      v5 = v7 != Object ? 0xC00001AC : 0;
      ObfDereferenceObject(v7);
    }
    ObfDereferenceObject(Object);
    return v5;
  }
  return result;
}
