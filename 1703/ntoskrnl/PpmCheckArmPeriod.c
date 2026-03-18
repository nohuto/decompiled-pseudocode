/*
 * XREFs of PpmCheckArmPeriod @ 0x140160360
 * Callers:
 *     PpmCheckReInit @ 0x1405C02B8 (PpmCheckReInit.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1400888B0 (PopExecuteOnTargetProcessors.c)
 */

char PpmCheckArmPeriod()
{
  __int64 v0; // rdx
  char result; // al

  v0 = PpmCheckMinimumPeriod;
  result = PpmCheckArmed;
  if ( (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[175 * dword_14034BB2C + 7])) > (unsigned __int64)PpmCheckMinimumPeriod )
    v0 = (unsigned int)(10000 * HIDWORD(PpmCurrentProfile[175 * dword_14034BB2C + 7]));
  if ( !PpmCheckArmed )
    goto LABEL_7;
  if ( v0 != PpmCheckPeriod )
  {
    _InterlockedExchange64(&PpmCheckLastExecutionTime, 0LL);
    result = 0;
    PpmCheckArmed = 0;
  }
  if ( !result )
  {
LABEL_7:
    PpmCheckPeriod = v0;
    PopExecuteOnTargetProcessors((__int64)PpmCheckRegistered, (__int64)PpmCheckReset, 0LL, 0LL);
    result = _InterlockedExchange64(&PpmCheckLastExecutionTime, 1LL);
    PpmCheckArmed = 1;
  }
  return result;
}
