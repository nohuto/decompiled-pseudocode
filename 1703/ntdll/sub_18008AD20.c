/*
 * XREFs of sub_18008AD20 @ 0x18008AD20
 * Callers:
 *     sub_180093ED0 @ 0x180093ED0 (sub_180093ED0.c)
 *     sub_180102D18 @ 0x180102D18 (sub_180102D18.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_18008AD20(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
    return ((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
         - 16LL * *(unsigned __int16 *)(a1 + 36)
         + ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL)
         - 16;
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  return a2
       + ((unsigned __int16)a2 ^ (unsigned __int16)qword_18015BFE8 ^ *(unsigned __int16 *)(a2 + 24) ^ (unsigned __int64)*(unsigned __int16 *)(**(_QWORD **)a1 + 24LL));
}
