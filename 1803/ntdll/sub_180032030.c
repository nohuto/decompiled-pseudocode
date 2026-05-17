/*
 * XREFs of sub_180032030 @ 0x180032030
 * Callers:
 *     RtlSetThreadPreferredUILanguages @ 0x180031CA0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180032030(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi

  if ( !a1 )
    return 0LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  if ( (unsigned __int64)(6 * v4) > 0xFFFFFFFF )
    return 0LL;
  LOBYTE(a2) = *(_BYTE *)(a1 + 8);
  v5 = sub_180032BDC(*(unsigned __int16 *)(a1 + 4), a2, *(_QWORD *)(a1 + 16));
  v6 = v5;
  if ( !v5 )
    return 0LL;
  if ( (int)v4 > 0 )
  {
    memmove(*(void **)(v5 + 24), *(const void **)(a1 + 24), (unsigned int)(6 * v4));
    *(_WORD *)(v6 + 4) = v4;
  }
  *(_BYTE *)(v6 + 8) = *(_BYTE *)(a1 + 8);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(v6 + 40) = *(_DWORD *)(a1 + 40);
  return v6;
}
