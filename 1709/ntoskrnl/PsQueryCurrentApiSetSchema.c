/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1405960C0
 * Callers:
 *     MiResolveImageReferences @ 0x1404DC360 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1405EFECC (ExIsMultiSessionSku.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x14012C5B8 (MmQueryApiSetSchema.c)
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
