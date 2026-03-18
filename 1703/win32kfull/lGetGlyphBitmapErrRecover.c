/*
 * XREFs of lGetGlyphBitmapErrRecover @ 0x1C022D9E4
 * Callers:
 *     ttfdQueryFontData @ 0x1C022E854 (ttfdQueryFontData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     CJGD @ 0x1C022C564 (CJGD.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C022FA24 (vFillGLYPHDATA_ErrRecover.c)
 *     fs_NewGlyph @ 0x1C02BBECC (fs_NewGlyph.c)
 */

__int64 __fastcall lGetGlyphBitmapErrRecover(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  char *v9; // r9
  unsigned int v10; // edi
  __int64 v11; // rax
  char *v12; // r14
  char v13; // [rsp+20h] [rbp-78h] BYREF

  result = CJGD(1u, 1, a1);
  v10 = result;
  if ( v9 )
  {
    if ( !a4 )
      goto LABEL_8;
  }
  else if ( !a4 )
  {
    return result;
  }
  if ( (int)result < 0 || a5 < (unsigned int)result )
    return 0xFFFFFFFFLL;
LABEL_8:
  v11 = *(_QWORD *)(a1 + 176);
  v12 = &v13;
  if ( v9 )
    v12 = v9;
  *(_DWORD *)(v11 + 108) = 0;
  *(_DWORD *)(v11 + 112) = 0;
  *(_WORD *)(v11 + 104) = -1;
  *(_WORD *)(v11 + 106) = a2;
  if ( (unsigned int)fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184)) )
    return 0xFFFFFFFFLL;
  vFillGLYPHDATA_ErrRecover(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL), a1, v12);
  if ( a4 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 200);
    *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 204);
    *(_DWORD *)(a4 + 8) = 1;
    *(_DWORD *)(a4 + 12) = 1;
    *(_BYTE *)(a4 + 16) = 0;
    *(_QWORD *)v12 = a4;
  }
  return v10;
}
