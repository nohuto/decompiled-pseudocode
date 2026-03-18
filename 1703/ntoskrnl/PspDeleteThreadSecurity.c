/*
 * XREFs of PspDeleteThreadSecurity @ 0x1404F81A8
 * Callers:
 *     PspThreadDelete @ 0x1404F7FA0 (PspThreadDelete.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspDeleteThreadSecurity(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  result = *(unsigned int *)(a1 + 1736);
  if ( (result & 8) != 0 )
  {
    result = ObfDereferenceObject((PVOID)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL));
    v3 = *(void **)(a1 + 1904);
    if ( v3 )
    {
      result = ObfDereferenceObject(v3);
      *(_QWORD *)(a1 + 1904) = 0LL;
    }
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1736), 0xFFFFFFF7);
  }
  *(_QWORD *)(a1 + 1640) = 0LL;
  return result;
}
