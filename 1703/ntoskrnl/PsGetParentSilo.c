/*
 * XREFs of PsGetParentSilo @ 0x1406DE24C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140747700 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140747A10 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
