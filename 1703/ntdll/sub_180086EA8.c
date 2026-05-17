/*
 * XREFs of sub_180086EA8 @ 0x180086EA8
 * Callers:
 *     sub_18001A8B4 @ 0x18001A8B4 (sub_18001A8B4.c)
 *     sub_18001A950 @ 0x18001A950 (sub_18001A950.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 * Callees:
 *     sub_18001A8B4 @ 0x18001A8B4 (sub_18001A8B4.c)
 */

__int64 __fastcall sub_180086EA8(unsigned __int64 a1)
{
  sub_18001A8B4(*(_QWORD *)(a1 + 176));
  *(_DWORD *)(a1 + 104) &= ~0x20u;
  *(_DWORD *)(a1 + 276) = 1;
  return sub_18003015C(a1);
}
