/*
 * XREFs of IopCancelPendingEject @ 0x140739FF4
 * Callers:
 *     PnpProcessRelation @ 0x1405C9EB4 (PnpProcessRelation.c)
 * Callees:
 *     IoCancelIrp @ 0x1400B6B20 (IoCancelIrp.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
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
