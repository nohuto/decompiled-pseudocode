/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x1404F23DC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400AFDC8 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400B0A44 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400B4DB8 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400B4F20 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x14050D500 (PoEnergyContextUpdateComponentPower.c)
 */

__int64 __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return PoEnergyContextUpdateComponentPower(a1, 12LL, a2);
  return result;
}
