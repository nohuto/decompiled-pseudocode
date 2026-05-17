/*
 * XREFs of sub_18009F268 @ 0x18009F268
 * Callers:
 *     sub_18009EF60 @ 0x18009EF60 (sub_18009EF60.c)
 *     sub_18009F290 @ 0x18009F290 (sub_18009F290.c)
 * Callees:
 *     sub_18009FCF0 @ 0x18009FCF0 (sub_18009FCF0.c)
 */

__int64 __fastcall sub_18009F268(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)sub_18009FCF0();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
