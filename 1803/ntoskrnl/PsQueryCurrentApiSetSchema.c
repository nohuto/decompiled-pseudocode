/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1405FB2D8
 * Callers:
 *     MiResolveImageReferences @ 0x1405FABA8 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1406533B4 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x1401618C8 (MmQueryApiSetSchema.c)
 */

__int64 PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 129);
  MmQueryApiSetSchema(&v1, &v2);
  return *(_QWORD *)v1;
}
