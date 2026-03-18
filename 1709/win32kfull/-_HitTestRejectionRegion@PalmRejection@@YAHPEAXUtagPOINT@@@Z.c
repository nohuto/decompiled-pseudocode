/*
 * XREFs of ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C01E0594
 * Callers:
 *     ?ProcessInput@PalmRejection@@YAHPEAX@Z @ 0x1C01E006C (-ProcessInput@PalmRejection@@YAHPEAX@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C01E052C (-_GetNonRejectionRegion@PalmRejection@@YA-AUtagRECT@@PEAX@Z.c)
 */

__int64 __fastcall PalmRejection::_HitTestRejectionRegion(
        struct tagRECT *retstr,
        unsigned __int64 a2,
        struct tagPOINT a3)
{
  unsigned int v3; // edi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( SHIDWORD(a2) > (int)gPalmRejectTopEdgeThr )
  {
    v6 = (__int128)*PalmRejection::_GetNonRejectionRegion((PalmRejection *)&v6, retstr, *(void **)&a3);
    LOBYTE(v3) = !PtInRect(&v6, a2);
  }
  return v3;
}
