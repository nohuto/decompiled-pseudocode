/*
 * XREFs of sub_18001F750 @ 0x18001F750
 * Callers:
 *     sub_180008378 @ 0x180008378 (sub_180008378.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F750(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  if ( (a4 & 1) != 0 )
    return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ qword_18015BFA8 ^ *(_QWORD *)(a1 + 16)))(
             *(_QWORD *)a1,
             a2,
             (a4 >> 1) & 1);
  else
    return sub_18001F7A8(a1 + 80, a1, a2, (a4 >> 1) & 1);
}
