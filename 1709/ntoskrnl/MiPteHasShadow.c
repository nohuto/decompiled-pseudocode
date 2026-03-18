/*
 * XREFs of MiPteHasShadow @ 0x14017C178
 * Callers:
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiTerminateWsle @ 0x140058F20 (MiTerminateWsle.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1400EDF24 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14017C214 (MiReadWriteAnyLevelShadowPte.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 * Callees:
 *     <none>
 */

__int64 MiPteHasShadow()
{
  __int64 result; // rax

  if ( (MiFlags & 0x1800000) == 0 )
    return 0LL;
  result = 1LL;
  if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
    return 0LL;
  return result;
}
