/*
 * XREFs of sub_18006248C @ 0x18006248C
 * Callers:
 *     sub_1800623C8 @ 0x1800623C8 (sub_1800623C8.c)
 * Callees:
 *     sub_180102360 @ 0x180102360 (sub_180102360.c)
 */

__int64 __fastcall sub_18006248C(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), a3);
  if ( (byte_18015D028 & 8) != 0 )
    sub_180102360(*(_QWORD *)(a1 + 112), *(_QWORD *)(a1 + 72));
  result = (*(_DWORD *)(a2 + 28) ^ (~(a3 + ~(*(_DWORD *)(a2 + 28) >> 8)) << 8)) & 0xFFFF00;
  *(_DWORD *)(a2 + 28) ^= result;
  return result;
}
