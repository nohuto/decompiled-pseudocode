/*
 * XREFs of NVMePerfStateTransition @ 0x1C0006030
 * Callers:
 *     NVMePowerActive @ 0x1C00060B0 (NVMePowerActive.c)
 *     NVMeMaxOperationalPower @ 0x1C0006468 (NVMeMaxOperationalPower.c)
 *     NVMePowerSetPerfState @ 0x1C000659C (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMePerfStateTransition(__int64 a1)
{
  unsigned __int8 v2; // al
  bool result; // al

  result = 0;
  if ( (*(_DWORD *)(a1 + 1120) & 2) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 1128);
    if ( *(_BYTE *)(a1 + 1127) != v2 )
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Requesting transition to P%u\n", v2);
      if ( !(unsigned int)StorPortExtendedFunction(66LL, a1, 0LL, 0LL) )
        return 1;
    }
  }
  return result;
}
