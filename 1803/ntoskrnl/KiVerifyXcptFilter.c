/*
 * XREFs of KiVerifyXcptFilter @ 0x1408BA40C
 * Callers:
 *     KiVerifyXcpt2 @ 0x1408B9D48 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x1408B9E80 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x1408B9ED0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1408B9F20 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x1408B9F70 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1408B9FC0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1408BA010 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x1408BA070 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x1408BA0D0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x1408BA130 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x1408BA190 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x1408BA2A0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x1408BA2F0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x1408BA360 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x1408BA3B0 (KiVerifyXcpt14.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiVerifyXcptFilter(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 12) = -1437226411;
    ++**(_DWORD **)a1;
  }
  else
  {
    *(_DWORD *)(a1 + 16) = 1;
  }
  return 1LL;
}
