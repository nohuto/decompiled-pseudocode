/*
 * XREFs of PopResetIdleTime @ 0x14003A050
 * Callers:
 *     PopSetSystemState @ 0x14014ABF4 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x14014AC38 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x14014B898 (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x1404C55E0 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x140582D98 (PopInitSIdle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopResetIdleTime(int a1)
{
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc || (unsigned int)(a1 - 3) > 1 )
  {
    dword_14034B0A8 = 0;
    byte_14034B0F0 = 0;
  }
  dword_14034B0E0 = 0;
  return PopTraceSystemIdleTimeReset();
}
