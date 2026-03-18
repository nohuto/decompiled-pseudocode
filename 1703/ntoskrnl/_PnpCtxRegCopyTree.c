/*
 * XREFs of _PnpCtxRegCopyTree @ 0x140739BE0
 * Callers:
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegCopyTree(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL), 0);
  else
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, 0LL, 0);
}
