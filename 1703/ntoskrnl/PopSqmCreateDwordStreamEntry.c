/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x140238664
 * Callers:
 *     PopSqmBatteryUpdate @ 0x1406D6804 (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
