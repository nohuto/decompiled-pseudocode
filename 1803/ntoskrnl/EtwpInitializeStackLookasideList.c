/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140655B78
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

__int64 EtwpInitializeStackLookasideList()
{
  __int64 result; // rax

  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  result = 0LL;
  dword_1403D0EE0 = 0;
  dword_1403D0EE4 = 0;
  EtwpStackLookAsideList = 0uLL;
  return result;
}
