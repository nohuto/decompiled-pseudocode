/*
 * XREFs of PsGetCurrentServerSiloName @ 0x1407146C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 *PsGetCurrentServerSiloName()
{
  _WORD *v0; // rax
  __int64 *v1; // rcx

  v0 = (char *)PsGetCurrentServerSiloGlobals() + 1064;
  v1 = &PspDefaultSiloName;
  if ( *v0 )
    return (__int64 *)v0;
  return v1;
}
