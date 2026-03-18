/*
 * XREFs of ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C00670A8
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SmartRectInRegion(HRGN a1, struct tagRECT *a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]

  if ( !(unsigned int)GreRectInRegion() )
    return 0LL;
  if ( (unsigned int)GreGetRgnBox(a1, &v9) != 2 )
  {
    SetRectRgnIndirect(ghrgnInv2, a2);
    v7 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a1, 1LL) - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return 1LL;
      GreGetRgnBox(ghrgnInv2, &v9);
      v8 = *(_QWORD *)&a2->left - v9;
      if ( *(_QWORD *)&a2->left == v9 )
        v8 = *(_QWORD *)&a2->right - v10;
      v5 = v8 == 0;
      goto LABEL_7;
    }
    return 0LL;
  }
  if ( !(unsigned int)IntersectRect(&v9, &v9, a2) )
    return 0LL;
  v4 = *(_QWORD *)&a2->left - v9;
  if ( *(_QWORD *)&a2->left == v9 )
    v4 = *(_QWORD *)&a2->right - v10;
  v5 = v4 == 0;
LABEL_7:
  if ( !v5 )
    return 1LL;
  return 2LL;
}
