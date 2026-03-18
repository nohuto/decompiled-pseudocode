/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x1405CB5A4
 * Callers:
 *     PipInitComputerIds @ 0x1408470D0 (PipInitComputerIds.c)
 *     PipCommitPendingOsExtensionResource @ 0x14086ABB0 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x14086ADC0 (PipCommitPendingService.c)
 * Callees:
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
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
