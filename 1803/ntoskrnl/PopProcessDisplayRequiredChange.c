/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x140524F6C
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140075E54 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140075F04 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x1400762C0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140076428 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x140531AD4 (PoEnergyContextUpdateComponentPower.c)
 */

__int64 __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return PoEnergyContextUpdateComponentPower(a1, 12LL, a2);
  return result;
}
