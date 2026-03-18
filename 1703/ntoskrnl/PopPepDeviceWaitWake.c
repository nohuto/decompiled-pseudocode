/*
 * XREFs of PopPepDeviceWaitWake @ 0x1401401E4
 * Callers:
 *     PopRequestCompletion @ 0x140144A90 (PopRequestCompletion.c)
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x1401459A0 (PopPepUpdateConstraints.c)
 */

__int64 __fastcall PopPepDeviceWaitWake(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  else
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 128));
  if ( (_DWORD)result == 1 )
  {
    LOBYTE(a3) = a2;
    return PopPepUpdateConstraints(a1, 5LL, a3);
  }
  return result;
}
