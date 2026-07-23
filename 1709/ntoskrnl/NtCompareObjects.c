/*
 * XREFs of NtCompareObjects @ 0x14058CBFC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCompareObjects(HANDLE FirstObjectHandle, HANDLE SecondObjectHandle)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  signed int v5; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF
  PVOID v7; // [rsp+58h] [rbp+20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandle(FirstObjectHandle, 0, 0LL, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v5 = ObReferenceObjectByHandle(SecondObjectHandle, 0, 0LL, PreviousMode, &v7, 0LL);
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
