/*
 * XREFs of MmUpdateHiberMappings @ 0x14040DF80
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     PopMarkComponentsBootPhase @ 0x14040D5C8 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MiEnumerateKernelLeafPtes @ 0x14040DFCC (MiEnumerateKernelLeafPtes.c)
 *     MiUpdateUserMappings @ 0x14040E018 (MiUpdateUserMappings.c)
 */

unsigned __int64 __fastcall MmUpdateHiberMappings(int a1, __int64 a2)
{
  if ( !a1 )
    return MiUpdateUserMappings();
  if ( a1 == 1 )
  {
    MiEnumerateKernelLeafPtes(MiInvalidateHiberPhasePages, a2);
    return KeFlushCurrentTbOnly(0);
  }
  else
  {
    MiUpdateUserMappings();
    return MiEnumerateKernelLeafPtes(MiRevertHiberPhasePages, 0LL);
  }
}
