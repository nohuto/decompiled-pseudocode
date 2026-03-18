/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1404D6F40
 * Callers:
 *     NtUnmapViewOfSection @ 0x1404D6F24 (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtUnmapViewOfSectionEx(ULONG_PTR a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  if ( KeGetCurrentThread()->PreviousMode == 1 && a2 > 0x7FFFFFFEFFFFLL )
    return 3221225497LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 0x77566D4Du, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = MiUnmapViewOfSection((ULONG_PTR)Object);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v4;
  }
  return result;
}
