/*
 * XREFs of IopCancelPendingEject @ 0x1406A78E4
 * Callers:
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 * Callees:
 *     IoCancelIrp @ 0x140018D10 (IoCancelIrp.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 */

void __fastcall IopCancelPendingEject(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 72) && !_InterlockedExchange((volatile __int32 *)(a1 + 80), 1) )
  {
    IoCancelIrp(*(PIRP *)(a1 + 72));
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 80), 2) == 3 )
      IoFreeIrp(*(PIRP *)(a1 + 72));
  }
}
