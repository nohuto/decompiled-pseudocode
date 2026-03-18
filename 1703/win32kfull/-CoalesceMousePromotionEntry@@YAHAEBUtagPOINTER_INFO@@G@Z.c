/*
 * XREFs of ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C01D469C
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01D54CC (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalesceMousePromotionEntry(const struct tagPOINTER_INFO *a1, char a2)
{
  struct tagMOUSE_PROMOTION_ENTRY *v2; // r8
  unsigned int v4; // edx
  int v5; // eax
  int v6; // eax

  v2 = qword_1C032C3C8;
  if ( !qword_1C032C3C8 )
    return 0LL;
  if ( *((_DWORD *)qword_1C032C3C8 + 5) != *((_DWORD *)a1 + 3) )
    return 0LL;
  v4 = *((_DWORD *)a1 + 2);
  if ( v4 <= *((_DWORD *)qword_1C032C3C8 + 9) || qword_1C032C4A8 != *((_QWORD *)a1 + 3) )
    return 0LL;
  *((_QWORD *)qword_1C032C3C8 + 1) = *((_QWORD *)a1 + 6);
  *((_DWORD *)v2 + 9) = v4;
  v5 = *((_DWORD *)v2 + 11);
  *((_QWORD *)v2 + 3) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( (v5 & 8) == 0 && (a2 & 4) != 0 )
    *((_DWORD *)v2 + 11) = v5 | 8;
  v6 = *((_DWORD *)v2 + 11);
  if ( (v6 & 0x10) == 0 && (a2 & 8) != 0 )
    *((_DWORD *)v2 + 11) = v6 | 0x10;
  return 1LL;
}
