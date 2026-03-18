/*
 * XREFs of PsQueryCurrentApiSetSchema @ 0x1404569F0
 * Callers:
 *     MiResolveImageReferences @ 0x1404F8F54 (MiResolveImageReferences.c)
 *     ExIsMultiSessionSku @ 0x1405D3D00 (ExIsMultiSessionSku.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     MmQueryApiSetSchema @ 0x140036358 (MmQueryApiSetSchema.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 */

__int64 PsQueryCurrentApiSetSchema()
{
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( PsIsCurrentThreadInServerSilo() )
    return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 125);
  MmQueryApiSetSchema(&v1, &v2);
  return *(_QWORD *)v1;
}
