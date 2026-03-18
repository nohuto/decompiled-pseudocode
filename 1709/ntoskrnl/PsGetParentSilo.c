/*
 * XREFs of PsGetParentSilo @ 0x1407146F0
 * Callers:
 *     CmpParseKey @ 0x1404A9210 (CmpParseKey.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     VRegEnabledInJob @ 0x1406A3A3C (VRegEnabledInJob.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140789F30 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14078A24C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x14012CFAC (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
