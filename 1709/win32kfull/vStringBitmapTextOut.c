/*
 * XREFs of vStringBitmapTextOut @ 0x1C0144D08
 * Callers:
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0274058 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1C000DCD0 (STROBJ_bEnum.c)
 *     vDrawGlyph @ 0x1C0144B48 (vDrawGlyph.c)
 */

char __fastcall vStringBitmapTextOut(__int64 a1, _DWORD *a2, unsigned int a3)
{
  int v3; // ebx
  int v4; // ebp
  PGLYPHPOS v6; // r8
  char result; // al
  GLYPHBITS *pgb; // rcx
  ULONG v10; // [rsp+40h] [rbp+8h] BYREF
  PGLYPHPOS v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 16);
  v11 = 0LL;
  v6 = *(PGLYPHPOS *)(a1 + 32);
  if ( v3 > 0 )
    v3 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v6 || (result = STROBJ_bEnum((STROBJ *)a1, &v10, &v11), (v6 = v11) != 0LL) )
  {
    pgb = v6->pgdf->pgb;
    v6->ptl.x += pgb->ptlOrigin.x - v3;
    v6->ptl.y += pgb->ptlOrigin.y - v4;
    return vDrawGlyph(a2, a3, (__int64)v6);
  }
  return result;
}
