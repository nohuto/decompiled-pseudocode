/*
 * XREFs of _ExcludeUpdateRgn @ 0x1C0080120
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C007DB30 (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserExcludeUpdateRgn @ 0x1C013D250 (NtUserExcludeUpdateRgn.c)
 * Callees:
 *     GreExtSelectClipRgn @ 0x1C008074C (GreExtSelectClipRgn.c)
 *     GreGetRandomRgn @ 0x1C00808C0 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C00809E4 (GetDCOrgOnScreen.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0080A38 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, struct tagWND *a2)
{
  __int64 v2; // rax
  unsigned int v6; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+34h] [rbp-24h]
  _BYTE v8[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = *((_QWORD *)a2 + 22);
  if ( !v2 )
    return GreGetClipBox(a1, v8, 0LL);
  if ( v2 == 1 )
    return GreIntersectClipRect(a1, 0LL, 0LL, 0LL, 0);
  if ( !(unsigned int)GetDCOrgOnScreen(a1, &v6) )
    return 0LL;
  if ( (unsigned int)GreGetRandomRgn(a1) == 1 )
    GreOffsetRgn(ghrgnInv1, v6, v7);
  else
    CalcVirtualScreenClipRegion(ghrgnInv1, a2);
  GreCombineRgn(ghrgnInv1, ghrgnInv1, *((_QWORD *)a2 + 22), 4LL);
  GreOffsetRgn(ghrgnInv1, -v6, -v7);
  return GreExtSelectClipRgn(a1);
}
