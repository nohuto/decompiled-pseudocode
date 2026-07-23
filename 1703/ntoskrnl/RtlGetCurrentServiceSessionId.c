/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x140085340
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x1404622D8 (SepValidateReferencedCachedHandles.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1406EA6A0 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return **(_DWORD **)(PsGetServerSiloGlobals(CurrentServerSilo) + 1072);
}
