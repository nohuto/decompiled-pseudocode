/*
 * XREFs of PopResetCBTriggers @ 0x140626898
 * Callers:
 *     PopApplyPolicy @ 0x140626324 (PopApplyPolicy.c)
 * Callees:
 *     PopDiagTraceBatteryTriggerFlags @ 0x140610C2C (PopDiagTraceBatteryTriggerFlags.c)
 */

__int64 PopResetCBTriggers()
{
  __int64 result; // rax
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  do
  {
    *((_DWORD *)&PopCB + 6 * result + 75) &= 0xFFFFFF7C;
    PopDiagTraceBatteryTriggerFlags(&v1, (__int64)(&PopCB + 3 * result + 37));
    result = v1 + 1;
    v1 = result;
  }
  while ( (unsigned int)result < 4 );
  return result;
}
