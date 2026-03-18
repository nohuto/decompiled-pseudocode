/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1401E9ED0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14070C650 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x14070C710 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x14070C860 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1401EA830 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
