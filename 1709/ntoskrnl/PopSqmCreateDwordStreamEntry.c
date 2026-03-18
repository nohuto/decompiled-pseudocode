/*
 * XREFs of PopSqmCreateDwordStreamEntry @ 0x14024D714
 * Callers:
 *     PopSqmBatteryUpdate @ 0x14070CA6C (PopSqmBatteryUpdate.c)
 * Callees:
 *     <none>
 */

void __fastcall PopSqmCreateDwordStreamEntry(_DWORD *a1, int a2)
{
  a1[2] = a2;
  *a1 = 1;
}
