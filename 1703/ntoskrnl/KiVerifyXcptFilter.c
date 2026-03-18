/*
 * XREFs of KiVerifyXcptFilter @ 0x140818DB8
 * Callers:
 *     KiVerifyXcpt2 @ 0x1408186F4 (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x140818830 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x140818880 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x1408188D0 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140818920 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x140818970 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x1408189C0 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140818A20 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140818A80 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140818AE0 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140818B40 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140818C50 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140818CA0 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140818D10 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140818D60 (KiVerifyXcpt14.c)
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
