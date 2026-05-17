/*
 * XREFs of sub_1800F7A54 @ 0x1800F7A54
 * Callers:
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 * Callees:
 *     sub_1800F7A2C @ 0x1800F7A2C (sub_1800F7A2C.c)
 *     sub_1800F7F4C @ 0x1800F7F4C (sub_1800F7F4C.c)
 *     sub_1800F834C @ 0x1800F834C (sub_1800F834C.c)
 */

__int64 __fastcall sub_1800F7A54(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax

  if ( !*(_DWORD *)(a1 + 100) )
  {
    v2 = sub_1800F834C(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 88));
    v3 = sub_1800F7A2C(a1);
    *(_DWORD *)(a1 + 100) = sub_1800F7F4C(*(_QWORD *)(a1 + 112), v3, v2);
  }
  return *(unsigned int *)(a1 + 100);
}
