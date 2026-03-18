/*
 * XREFs of PopResetCBTriggers @ 0x1405C3DD8
 * Callers:
 *     PopApplyPolicy @ 0x1405C3850 (PopApplyPolicy.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406CABEC (PopBatteryUpdateCompositeInformation.c)
 * Callees:
 *     <none>
 */

int *__fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  int *result; // rax
  int v2; // edx
  __int64 v3; // rcx

  result = &dword_14034B4AC;
  v2 = ~a1;
  v3 = 4LL;
  do
  {
    *result &= v2;
    result += 6;
    --v3;
  }
  while ( v3 );
  return result;
}
