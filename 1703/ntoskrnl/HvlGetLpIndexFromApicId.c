/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1401E5020
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1406D63E0 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x1406D64A0 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x1406D65F0 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1401E59DC (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1, a2, a3, a4)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
