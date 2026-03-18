/*
 * XREFs of MiInitializeSystemPteTracker @ 0x1408C5040
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  __int64 v0; // rcx
  _QWORD *result; // rax

  if ( ((unsigned __int8)&stru_1403CC1C0 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = 16LL;
  qword_1403CC1D0 = 0LL;
  stru_1403CC1C0 = 0uLL;
  result = &unk_1403CCDF0;
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v0;
  }
  while ( v0 );
  return result;
}
