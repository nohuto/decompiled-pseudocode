/*
 * XREFs of KiVerifyXcptFilter @ 0x140848E28
 * Callers:
 *     KiVerifyXcpt2 @ 0x14084875C (KiVerifyXcpt2.c)
 *     KiVerifyXcpt0 @ 0x1408488A0 (KiVerifyXcpt0.c)
 *     KiVerifyXcpt1 @ 0x1408488F0 (KiVerifyXcpt1.c)
 *     KiVerifyXcpt3 @ 0x140848940 (KiVerifyXcpt3.c)
 *     KiVerifyXcpt4 @ 0x140848990 (KiVerifyXcpt4.c)
 *     KiVerifyXcpt5 @ 0x1408489E0 (KiVerifyXcpt5.c)
 *     KiVerifyXcpt6 @ 0x140848A30 (KiVerifyXcpt6.c)
 *     KiVerifyXcpt7 @ 0x140848A90 (KiVerifyXcpt7.c)
 *     KiVerifyXcpt8 @ 0x140848AF0 (KiVerifyXcpt8.c)
 *     KiVerifyXcpt9 @ 0x140848B50 (KiVerifyXcpt9.c)
 *     KiVerifyXcpt10 @ 0x140848BB0 (KiVerifyXcpt10.c)
 *     KiVerifyXcpt11 @ 0x140848CC0 (KiVerifyXcpt11.c)
 *     KiVerifyXcpt12 @ 0x140848D10 (KiVerifyXcpt12.c)
 *     KiVerifyXcpt13 @ 0x140848D80 (KiVerifyXcpt13.c)
 *     KiVerifyXcpt14 @ 0x140848DD0 (KiVerifyXcpt14.c)
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
