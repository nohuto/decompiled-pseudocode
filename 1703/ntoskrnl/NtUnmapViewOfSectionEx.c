/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x14047B280
 * Callers:
 *     NtUnmapViewOfSection @ 0x14047B264 (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtUnmapViewOfSectionEx(HANDLE ProcessHandle, PVOID BaseAddress, ULONG Flags)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741583;
  if ( KeGetCurrentThread()->PreviousMode == 1 && (unsigned __int64)BaseAddress > 0x7FFFFFFEFFFFLL )
    return -1073741799;
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)ProcessHandle, 2002152781, (__int64)&Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    v6 = MiUnmapViewOfSection(Object, BaseAddress, Flags);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v6;
  }
  return result;
}
