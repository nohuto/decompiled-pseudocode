/*
 * XREFs of PopPepDeviceWaitWake @ 0x1402794F0
 * Callers:
 *     PopRequestCompletion @ 0x140165E50 (PopRequestCompletion.c)
 *     PopRequestPowerIrp @ 0x1401671C0 (PopRequestPowerIrp.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x140166FE0 (PopPepUpdateConstraints.c)
 */

int __fastcall PopPepDeviceWaitWake(__int64 a1, char a2)
{
  int result; // eax

  if ( a2 )
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  else
    result = _InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  if ( result == 1 )
    return PopPepUpdateConstraints(a1, 5, a2);
  return result;
}
