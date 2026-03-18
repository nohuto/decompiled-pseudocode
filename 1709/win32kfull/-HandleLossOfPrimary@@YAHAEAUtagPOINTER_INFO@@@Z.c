/*
 * XREFs of ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01E127C
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01E1D98 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01E1830 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 */

__int64 __fastcall HandleLossOfPrimary(struct tagPOINTER_INFO *a1)
{
  int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)a1 + 3);
  if ( (v1 & 0x40004) == 0 || (v1 & 0x10000) != 0 )
  {
    ResetMousePromotionInfo(0, v1);
    return 0LL;
  }
  else
  {
    *((_DWORD *)a1 + 3) = 303104;
    v2 = *((_DWORD *)a1 + 3);
    if ( (v1 & 2) != 0 )
      v2 = 303106;
    *((_DWORD *)a1 + 3) = v2;
    if ( (v1 & 0x4000) != 0 )
      *((_DWORD *)a1 + 3) |= 0x4000u;
    return 1LL;
  }
}
