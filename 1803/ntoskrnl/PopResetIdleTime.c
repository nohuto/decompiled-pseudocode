/*
 * XREFs of PopResetIdleTime @ 0x1400CF6BC
 * Callers:
 *     PopSetSystemState @ 0x14016DB24 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x14016DB68 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x14016E84C (PopSystemRequiredSet.c)
 *     PopPolicySystemIdle @ 0x14051C940 (PopPolicySystemIdle.c)
 *     PopInitSIdle @ 0x1406118BC (PopInitSIdle.c)
 * Callees:
 *     PopTraceSystemIdleTimeReset @ 0x1400CF724 (PopTraceSystemIdleTimeReset.c)
 *     PopQueueWorkItem @ 0x1400CF7E4 (PopQueueWorkItem.c)
 */

__int64 __fastcall PopResetIdleTime(unsigned int a1)
{
  KeGetCurrentIrql();
  if ( !PopPlatformAoAc || a1 - 3 > 1 )
  {
    dword_1403A9F88 = 0;
    byte_1403A9FD0 = 0;
    PopQueueWorkItem(&PopSIdleUpdateNotificationWorkItem, 1LL);
  }
  if ( !PopPlatformAoAc )
    PopIsAboutToSleep = 0;
  dword_1403A9FC0 = 0;
  return PopTraceSystemIdleTimeReset(a1);
}
