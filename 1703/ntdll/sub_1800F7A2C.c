/*
 * XREFs of sub_1800F7A2C @ 0x1800F7A2C
 * Callers:
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 *     sub_1800F7A54 @ 0x1800F7A54 (sub_1800F7A54.c)
 * Callees:
 *     sub_1800F8150 @ 0x1800F8150 (sub_1800F8150.c)
 */

__int64 __fastcall sub_1800F7A2C(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a1 + 96) = sub_1800F8150(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
  return *(unsigned int *)(a1 + 96);
}
