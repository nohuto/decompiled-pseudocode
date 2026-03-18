/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x1405D4C78
 * Callers:
 *     PipInitComputerIds @ 0x14080F160 (PipInitComputerIds.c)
 *     PipCommitPendingOsExtensionResource @ 0x140833A90 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140833CA0 (PipCommitPendingService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegDeleteTree(__int64 a1, char *a2, const WCHAR *a3)
{
  __int64 v4; // r8

  if ( a1 && *(_QWORD *)a1 )
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  else
    v4 = 0LL;
  return RegRtlDeleteTreeInternal(a2, a3, v4, 0);
}
