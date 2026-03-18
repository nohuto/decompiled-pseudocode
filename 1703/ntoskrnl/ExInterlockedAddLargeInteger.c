/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14025D5E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x140022648 (ExpAcquireSpinLockDisabled.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  bool v6; // cl
  LARGE_INTEGER result; // rax

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  result = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  _InterlockedAnd64((volatile signed __int64 *)Lock, 0LL);
  if ( v6 )
    _enable();
  return result;
}
