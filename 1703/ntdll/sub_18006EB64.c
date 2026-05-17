/*
 * XREFs of sub_18006EB64 @ 0x18006EB64
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18006C5C0 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     sub_180047104 @ 0x180047104 (sub_180047104.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18006EB64(__int64 a1)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi

  if ( !a1 )
    return 0LL;
  v3 = *(unsigned __int16 *)(a1 + 4);
  if ( (unsigned __int64)(6 * v3) > 0xFFFFFFFF )
    return 0LL;
  v4 = sub_180047104(*(unsigned __int16 *)(a1 + 4), *(_BYTE *)(a1 + 8), *(_QWORD *)(a1 + 16));
  v5 = v4;
  if ( !v4 )
    return 0LL;
  if ( (int)v3 > 0 )
  {
    memmove(*(void **)(v4 + 24), *(const void **)(a1 + 24), (unsigned int)(6 * v3));
    *(_WORD *)(v5 + 4) = v3;
  }
  *(_BYTE *)(v5 + 8) = *(_BYTE *)(a1 + 8);
  *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 40);
  return v5;
}
