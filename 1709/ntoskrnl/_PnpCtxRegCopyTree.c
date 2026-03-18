/*
 * XREFs of _PnpCtxRegCopyTree @ 0x14077E2D0
 * Callers:
 *     PipMigratePnpState @ 0x14083E9C4 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlCopyTreeInternal @ 0x140785B88 (_RegRtlCopyTreeInternal.c)
 */

__int64 __fastcall PnpCtxRegCopyTree(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL), 0);
  else
    return RegRtlCopyTreeInternal(a2, a3, a4, a5, 0, 0LL, 0);
}
