/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x140226F70
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14076FB10 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x14076FBD0 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x14076FD20 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1402278D8 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
