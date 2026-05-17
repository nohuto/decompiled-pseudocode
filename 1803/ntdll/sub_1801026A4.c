/*
 * XREFs of sub_1801026A4 @ 0x1801026A4
 * Callers:
 *     sub_1801028AC @ 0x1801028AC (sub_1801028AC.c)
 *     sub_180102BEC @ 0x180102BEC (sub_180102BEC.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1801026A4(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
    return ((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
         - 16LL * *(unsigned __int16 *)(a1 + 36)
         + ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL)
         - 16;
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  return a2
       + ((unsigned __int16)a2 ^ (unsigned __int16)qword_18015D458 ^ *(unsigned __int16 *)(a2 + 24) ^ (unsigned __int64)*(unsigned __int16 *)(**(_QWORD **)a1 + 24LL));
}
