/*
 * XREFs of MmUpdateHiberMappings @ 0x1404306AC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     KeFlushCurrentTbOnly @ 0x14017B2B8 (KeFlushCurrentTbOnly.c)
 *     MiEnumerateKernelLeafPtes @ 0x14042F008 (MiEnumerateKernelLeafPtes.c)
 *     MiUpdateUserMappings @ 0x14042F614 (MiUpdateUserMappings.c)
 */

unsigned __int64 __fastcall MmUpdateHiberMappings(int a1, __int64 a2)
{
  if ( !a1 )
    return MiUpdateUserMappings();
  if ( a1 == 1 )
  {
    MiEnumerateKernelLeafPtes(
      (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiInvalidateHiberPhasePages,
      a2);
    return KeFlushCurrentTbOnly(0);
  }
  else
  {
    MiUpdateUserMappings();
    return MiEnumerateKernelLeafPtes(
             (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiRevertHiberPhasePages,
             0LL);
  }
}
