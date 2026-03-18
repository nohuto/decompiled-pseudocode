/*
 * XREFs of PpmCheckPreConditionsForDeepSleep @ 0x14013B330
 * Callers:
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmCheckPreConditionsForDeepSleep(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( PopDeepSleepIsEnabled && *(_BYTE *)(a1 + 33) && PopDeepSleepIsEngaged )
    return PopDeepSleepEvaluateWorkItemQueued == 0;
  return v1;
}
