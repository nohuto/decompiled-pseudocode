/*
 * XREFs of PopCriticalShutdown @ 0x1406FCAD8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 * Callees:
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 */

__int64 PopCriticalShutdown()
{
  _DWORD v1[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v2[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+48h] [rbp-20h]
  __int64 v4; // [rsp+50h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v1[2] = 0;
  v1[0] = 6;
  v1[1] = -1073741820;
  v2[0] = 1;
  v2[1] = 128;
  PopCriticalShutdownInProgress = 1;
  return PopExecutePowerAction((unsigned int)v2, 0, (unsigned int)v1, 5, 1);
}
