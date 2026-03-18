/*
 * XREFs of ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C029AE38
 * Callers:
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027768C (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1C0299778 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vInitSimple(
        ESTROBJ *this,
        unsigned __int16 *a2,
        int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5)
{
  struct RFONTOBJ *v7; // rdi
  struct _GLYPHPOS *v9; // rax
  struct _GLYPHPOS *v10; // rsi
  __int64 v11; // rax
  bool v12; // zf
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // r11d
  __int64 v16; // r10
  int v17; // eax
  int v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = a3;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v7 = a5;
  *((_QWORD *)this + 7) = a5;
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 5) = a2;
  v9 = (struct _GLYPHPOS *)AllocFreeTmpBuffer(32LL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)this + 16) |= 1u;
    *((_QWORD *)this + 9) = v9;
    *((_DWORD *)this + 1) = *(_DWORD *)(*(_QWORD *)v7 + 268LL) & 0x71 | 2;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v7, (struct RFONTOBJ *)1, v9, a2, &v18, a4, this) )
    {
      if ( v18 )
      {
        v11 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = v11;
      }
      v10->ptl.x = 0;
      v10->ptl.y = *(_DWORD *)(*(_QWORD *)v7 + 340LL);
      v12 = (*((_DWORD *)this + 16) & 0x1400) == 0;
      v13 = *(_DWORD *)(*(_QWORD *)v7 + 304LL);
      *((_DWORD *)this + 2) = v13;
      if ( v12 && v13 )
      {
        *((_DWORD *)this + 3) = 0;
        if ( v13 > 0x7FFFFFFF )
          return;
        v14 = v13;
      }
      else
      {
        *((_DWORD *)this + 2) = 0;
        v10->ptl.y = *((_DWORD *)ESTROBJ::GetLinkedRfontOnIndex(this, 0, v7) + 85);
        v17 = *(_DWORD *)(v16 + 20) + 15;
        *((_DWORD *)this + 3) = v15 >> 4;
        v14 = v17 >> 4;
      }
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 5) = v14;
      *((_DWORD *)this + 6) = *(_DWORD *)(*(_QWORD *)v7 + 344LL);
      if ( (*(_DWORD *)(*(_QWORD *)v7 + 12LL) & 0x10000000) != 0 )
      {
        --*((_DWORD *)this + 3);
        ++*((_DWORD *)this + 5);
      }
      *((_DWORD *)this + 16) |= 4u;
    }
  }
}
