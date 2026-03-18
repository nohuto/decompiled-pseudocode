/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1405F2E44
 * Callers:
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

__int64 EtwpInitializeStackLookasideList()
{
  __int64 result; // rax

  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  dword_14038CC20 = 0;
  dword_14038CC24 = 0;
  EtwpStackLookAsideList = 0uLL;
  return result;
}
