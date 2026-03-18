/*
 * XREFs of _ExcludeUpdateRgn @ 0x1C00F82DC
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0028A5C (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserExcludeUpdateRgn @ 0x1C0136650 (NtUserExcludeUpdateRgn.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C00F84A0 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C00F85B8 (GetDCOrgOnScreen.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreExtSelectClipRgnInternal @ 0x1C013EDB0 (GreExtSelectClipRgnInternal.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-24h]
  _BYTE v11[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a2 + 176);
  if ( !v2 )
    return GreGetClipBox(a1, v11, 0LL);
  if ( v2 == 1 )
    return GreIntersectClipRect(a1, 0LL, 0LL, 0LL, 0);
  result = GetDCOrgOnScreen(a1, &v9);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)GreGetRandomRgn(a1) == 1 )
    {
      GreOffsetRgn(ghrgnInv1, v9, v10);
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 368) & 0xF) == 0
        && (v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 52LL) & 1) != 0 )
      {
        v7 = *(_QWORD *)(gpDispInfo + 128LL);
      }
      else if ( (*(_DWORD *)(a2 + 368) & 0xF) == 1
             && (v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v8 + 8) + 52LL) & 1) != 0 )
      {
        v7 = *(_QWORD *)(gpDispInfo + 136LL);
      }
      else
      {
        v7 = *(_QWORD *)(gpDispInfo + 120LL);
      }
      GreCombineRgn(ghrgnInv1, v7, 0LL, 5LL);
    }
    GreCombineRgn(ghrgnInv1, ghrgnInv1, *(_QWORD *)(a2 + 176), 4LL);
    GreOffsetRgn(ghrgnInv1, -v9, -v10);
    return GreExtSelectClipRgnInternal(a1);
  }
  return result;
}
