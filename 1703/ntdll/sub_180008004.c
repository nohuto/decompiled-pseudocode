/*
 * XREFs of sub_180008004 @ 0x180008004
 * Callers:
 *     sub_180007F98 @ 0x180007F98 (sub_180007F98.c)
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180008004(__int64 a1)
{
  return *(_DWORD *)(a1 + 16) == -571548178 && a1 != *(_QWORD *)&qword_18015BFE0;
}
