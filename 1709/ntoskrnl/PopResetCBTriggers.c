/*
 * XREFs of PopResetCBTriggers @ 0x1405C98EC
 * Callers:
 *     PopApplyPolicy @ 0x1405B9210 (PopApplyPolicy.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406FEA9C (PopBatteryUpdateCompositeInformation.c)
 * Callees:
 *     PopDiagTraceBatteryTriggerFlags @ 0x1405C9B9C (PopDiagTraceBatteryTriggerFlags.c)
 */

__int64 __fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  __int64 result; // rax
  int v2; // ebx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v3 = 0;
  v2 = ~a1;
  do
  {
    *((_DWORD *)&PopCB + 6 * result + 75) &= v2;
    PopDiagTraceBatteryTriggerFlags(&v3, &PopCB + 3 * result + 37);
    result = (unsigned int)(v3 + 1);
    v3 = result;
  }
  while ( (unsigned int)result < 4 );
  return result;
}
