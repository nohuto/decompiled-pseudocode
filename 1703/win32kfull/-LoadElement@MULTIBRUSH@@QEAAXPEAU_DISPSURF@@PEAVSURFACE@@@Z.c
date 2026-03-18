/*
 * XREFs of ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C027FDCC
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0280600 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0282070 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02825A0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02833F0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C02836D0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0283A30 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02843E8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 *     ?bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02848C0 (-bBitBltScreenToScreen@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 * Callees:
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C024A738 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 */

void __fastcall MULTIBRUSH::LoadElement(MULTIBRUSH *this, struct _DISPSURF *a2, struct SURFACE *a3)
{
  __int64 v5; // rdx
  __int64 v7; // rbx
  struct PALETTE *v8; // r10
  _DWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r8
  int NearestIndexFromColorref; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 1);
  if ( v5 && a3 )
  {
    if ( *((_DWORD *)a2 + 6) )
    {
      v7 = *((_QWORD *)a2 + 6);
      v8 = ppalDefault;
      if ( (*(_DWORD *)(v7 + 2188) & 0x100) != 0 )
        v8 = DrvRealizeHalftonePalette(*((_QWORD **)a2 + 6), 0);
      if ( *((int *)a2 + 6) <= 0
        || (v9 = (_DWORD *)*((_QWORD *)this + 1), *v9 != -1)
        || (v10 = (unsigned int)v9[7], (_DWORD)v10 == -1) )
      {
        v11 = *((_QWORD *)this + 1);
        if ( *(_DWORD *)v11 == -1 )
        {
          v15 = *((_QWORD *)this + 4);
          if ( v15 )
          {
            *((_QWORD *)this + 6) = *(_QWORD *)(v11 + 32);
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(v15 + 16 * (*((unsigned int *)a2 + 4) + 1LL));
            *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 4)
                                                                 + 16LL * *((unsigned int *)a2 + 4)
                                                                 + 8);
          }
        }
        else
        {
          v12 = *((_QWORD *)a3 + 16);
          v13 = *(unsigned int *)(v11 + 28);
          v18 = v12;
          if ( v12 && (v13 & 0x3000000) == 0 && (*(_DWORD *)(v7 + 2188) & 0x100) != 0 )
            NearestIndexFromColorref = XEPALOBJ::ulDispatchGFPEFunction(&v18, *(unsigned int *)(v12 + 96), v13);
          else
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v12, v8, *(unsigned int *)(v11 + 28), 1LL);
          **((_DWORD **)this + 1) = NearestIndexFromColorref;
        }
      }
      else
      {
        **((_DWORD **)this + 1) = ulGetNearestIndexFromColorref(*((_QWORD *)a3 + 16), v8, v10, 1LL);
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = 0LL;
      }
    }
    else
    {
      v16 = *((_QWORD *)this + 4);
      if ( v16 )
        *(_QWORD *)(v5 + 8) = *(_QWORD *)(v16 + 16LL * *((unsigned int *)a2 + 4) + 8);
    }
    if ( *((_QWORD *)this + 4) )
    {
      *(_QWORD *)(*((_QWORD *)this + 1) + 80LL) = a3;
      v17 = *((_QWORD *)a3 + 16);
      if ( v17 )
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL) = v17;
    }
  }
}
