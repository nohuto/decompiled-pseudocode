/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x1404D6F40
 * Callers:
 *     NtUnmapViewOfSection @ 0x1404D6F24 (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  if ( KeGetCurrentThread()->PreviousMode == 1 && (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741799;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 0x77566D4Du, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v4 = MiUnmapViewOfSection((ULONG_PTR)Object);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v4;
  }
  return result;
}
