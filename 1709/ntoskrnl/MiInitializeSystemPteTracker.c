/*
 * XREFs of MiInitializeSystemPteTracker @ 0x14085357C
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  __int64 v0; // rcx
  _QWORD *result; // rax

  if ( ((unsigned __int8)&stru_140388F00 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  v0 = 16LL;
  qword_140388F10 = 0LL;
  stru_140388F00 = 0uLL;
  result = &unk_140389830;
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
