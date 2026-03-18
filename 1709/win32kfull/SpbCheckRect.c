/*
 * XREFs of SpbCheckRect @ 0x1C01F0058
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C0067FFC (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     _ScrollDC @ 0x1C006B7C0 (_ScrollDC.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     SpbCheckDce @ 0x1C0072E70 (SpbCheckDce.c)
 *     SpbCheckPwnd @ 0x1C01EFFBC (SpbCheckPwnd.c)
 * Callees:
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C0144124 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01EF968 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 */

char __fastcall SpbCheckRect(struct tagWND *a1, struct tagRECT *a2)
{
  int v4; // eax
  struct tagSPB *v5; // rcx
  struct tagSPB *v6; // rbx

  v4 = IsVisible((__int64)a1);
  if ( v4 )
  {
    while ( 1 )
    {
      LOBYTE(v4) = gpDispInfo;
      v5 = *(struct tagSPB **)(gpDispInfo + 24LL);
      if ( !v5 )
        break;
      while ( 1 )
      {
        v6 = *(struct tagSPB **)v5;
        v4 = SpbCheckRect2(v5, a1, a2);
        if ( !v4 )
        {
          LOBYTE(v4) = IsSpbPresentOrNull(v6);
          if ( !(_BYTE)v4 )
            break;
        }
        v5 = v6;
        if ( !v6 )
          return v4;
      }
    }
  }
  return v4;
}
