/*
 * XREFs of sub_18006B460 @ 0x18006B460
 * Callers:
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18006B51C @ 0x18006B51C (sub_18006B51C.c)
 *     sub_18006B5B8 @ 0x18006B5B8 (sub_18006B5B8.c)
 * Callees:
 *     sub_18006B51C @ 0x18006B51C (sub_18006B51C.c)
 */

__int64 __fastcall sub_18006B460(unsigned __int64 a1)
{
  sub_18006B51C(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return sub_18001F5FC(a1);
}
