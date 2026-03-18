/*
 * XREFs of CmpFreeSiloContextCallback @ 0x14066A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     CmpStopSiloKeyLockTracker @ 0x140668FF8 (CmpStopSiloKeyLockTracker.c)
 */

PVOID *__fastcall CmpFreeSiloContextCallback(ULONG_PTR a1)
{
  PVOID *result; // rax
  void *v3; // rcx

  result = CmpStopSiloKeyLockTracker(a1);
  v3 = *(void **)(a1 + 32);
  if ( v3 )
    return (PVOID *)ObfDereferenceObject(v3);
  return result;
}
