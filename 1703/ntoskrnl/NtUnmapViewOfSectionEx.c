/*
 * XREFs of NtUnmapViewOfSectionEx @ 0x14047B280
 * Callers:
 *     NtUnmapViewOfSection @ 0x14047B264 (NtUnmapViewOfSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtUnmapViewOfSectionEx(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
  if ( KeGetCurrentThread()->PreviousMode == 1 && a2 > 0x7FFFFFFEFFFFLL )
    return 3221225497LL;
  result = ObpReferenceObjectByHandleWithTag(a1, 2002152781, (__int64)&Object, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v6 = MiUnmapViewOfSection(Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x77566D4Du);
    return v6;
  }
  return result;
}
