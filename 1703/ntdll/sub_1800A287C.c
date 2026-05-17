/*
 * XREFs of sub_1800A287C @ 0x1800A287C
 * Callers:
 *     sub_1800A2584 @ 0x1800A2584 (sub_1800A2584.c)
 *     sub_1800A28A4 @ 0x1800A28A4 (sub_1800A28A4.c)
 * Callees:
 *     sub_18009FCF0 @ 0x18009FCF0 (sub_18009FCF0.c)
 */

__int64 __fastcall sub_1800A287C(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)sub_18009FCF0();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
