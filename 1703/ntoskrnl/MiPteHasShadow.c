/*
 * XREFs of MiPteHasShadow @ 0x14017C9F0
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140102188 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiReadPteShadow @ 0x14017CA54 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
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
