/*
 * XREFs of HUBPSM20_InitiatingResetPort @ 0x1C000E9D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x1C0003DB8 (HUBHTX_ResetPortUsingControlTransfer.c)
 */

__int64 __fastcall HUBPSM20_InitiatingResetPort(__int64 a1)
{
  HUBHTX_ResetPortUsingControlTransfer(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
