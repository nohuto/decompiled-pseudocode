/*
 * XREFs of sub_18007DC74 @ 0x18007DC74
 * Callers:
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     sub_18001FD40 @ 0x18001FD40 (sub_18001FD40.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007DC74(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = *(unsigned __int16 *)(a1 + 34);
  if ( *(_WORD *)(a1 + 32) == (_WORD)result )
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    v3 = _InterlockedExchange64((volatile __int64 *)(a1 + 16), a2);
    if ( (v3 & 1) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), v3 >> 1);
  }
  return result;
}
