/*
 * XREFs of CmpFreeSiloContextCallback @ 0x1406F7BE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     CmpStopSiloKeyLockTracker @ 0x1406F6F64 (CmpStopSiloKeyLockTracker.c)
 */

ULONG_PTR **__fastcall CmpFreeSiloContextCallback(ULONG_PTR a1)
{
  ULONG_PTR **result; // rax
  void *v3; // rcx

  result = CmpStopSiloKeyLockTracker(a1);
  v3 = *(void **)(a1 + 32);
  if ( v3 )
    return (ULONG_PTR **)ObfDereferenceObject(v3);
  return result;
}
