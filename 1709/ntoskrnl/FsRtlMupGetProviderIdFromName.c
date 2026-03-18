/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x1406B0900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  if ( pFsRtlpMupCalls )
    return (*(__int64 (__fastcall **)(PCUNICODE_STRING, PULONG32))(pFsRtlpMupCalls + 8))(pProviderName, pProviderId);
  else
    return -1073741637;
}
