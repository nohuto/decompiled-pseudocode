/*
 * XREFs of HvlConfigureMemoryZeroingOnReset @ 0x1402267F8
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 *     PopHiberCheckResume @ 0x140475210 (PopHiberCheckResume.c)
 *     PopShutdownSystem @ 0x1404873E0 (PopShutdownSystem.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     HvlpSetRegister64 @ 0x14022DC60 (HvlpSetRegister64.c)
 */

__int64 __fastcall HvlConfigureMemoryZeroingOnReset(char a1)
{
  __int64 result; // rax

  if ( (HvlpFlags & 0x40000) != 0 )
    return HvlpSetRegister64(624LL, a1 != 0);
  return result;
}
