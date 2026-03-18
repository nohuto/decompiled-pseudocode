/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0075F90
 * Callers:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C002483C (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     EngHTBlt @ 0x1C0030E00 (EngHTBlt.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C006CF98 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0076E60 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngTextOut @ 0x1C0083290 (EngTextOut.c)
 *     EngAlphaBlend @ 0x1C0085010 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0098798 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     EngTransparentBlt @ 0x1C00A8840 (EngTransparentBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A9838 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00DC1BC (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_bEnum @ 0x1C01082B0 (CLIPOBJ_bEnum.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C02587AC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C02631B0 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026E634 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0271744 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C0290CD0 (NtGdiCLIPOBJ_bEnum.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02A13F8 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02A1698 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // r15
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // esi
  int v11; // ebp
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r8d
  int *v19; // rax
  int v20; // eax
  __int64 v21; // r8
  int v22; // r9d
  int v23; // edx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // ebp
  int *v31; // rdx
  unsigned int v32; // r8d
  int v33; // r9d
  int v34; // r13d
  unsigned int v35; // edi
  __int64 v36; // rax

  v4 = a3 + 4;
  if ( a2 < 0x14 )
  {
    if ( a4 )
      *a4 = 0;
    return 0LL;
  }
  v8 = a2 - 4;
  if ( a4 )
    *a4 = 4;
  *(_DWORD *)a3 = 0;
  if ( !*((_DWORD *)this + 32) )
  {
    v9 = *((_QWORD *)this + 10);
    v10 = *(_DWORD *)(v9 + 4);
    v11 = *(_DWORD *)(v9 + 8);
    if ( !*((_DWORD *)this + 22) )
      return 0LL;
    while ( 1 )
    {
      v12 = *((unsigned int *)this + 24);
      v13 = (_DWORD *)*((_QWORD *)this + 10);
      if ( (_DWORD)v12 == *((_DWORD *)this + 26) )
      {
        v18 = *((_DWORD *)this + 27);
        if ( v18 >= 2 )
        {
          if ( v13[1] <= *((_DWORD *)this + 17) )
          {
LABEL_30:
            *((_DWORD *)this + 22) = 0;
            return 0LL;
          }
          *((_QWORD *)this + 10) = (char *)v13 - (unsigned int)(4 * *(v13 - 1) + 16);
        }
        else
        {
          if ( v13[2] >= *((_DWORD *)this + 19) )
            goto LABEL_30;
          *((_QWORD *)this + 10) = (char *)v13 + (unsigned int)(4 * *v13 + 16);
        }
        --*((_DWORD *)this + 22);
        v19 = (int *)*((_QWORD *)this + 10);
        v10 = v19[1];
        v11 = v19[2];
        if ( (v18 & 1) != 0 )
        {
          v25 = *v19 - 2;
          *((_DWORD *)this + 26) = -2;
          *((_DWORD *)this + 24) = v25;
          if ( v25 != -2 )
          {
            v26 = *((_QWORD *)this + 10);
            v27 = *((_DWORD *)this + 18);
            do
            {
              v28 = *((unsigned int *)this + 24);
              if ( *(_DWORD *)(v26 + 4 * v28 + 12) < v27 )
                break;
              v29 = v28 - 2;
              *((_DWORD *)this + 24) = v29;
            }
            while ( v29 != -2 );
          }
        }
        else
        {
          *((_DWORD *)this + 24) = 0;
          v20 = *v19;
          *((_DWORD *)this + 26) = v20;
          if ( v20 )
          {
            v21 = *((_QWORD *)this + 10);
            v22 = *((_DWORD *)this + 16);
            do
            {
              v23 = *((_DWORD *)this + 24);
              if ( *(_DWORD *)(v21 + 4LL * (unsigned int)(v23 + 1) + 12) > v22 )
                break;
              *((_DWORD *)this + 24) = v23 + 2;
            }
            while ( v23 + 2 != *((_DWORD *)this + 26) );
          }
        }
      }
      else
      {
        v14 = v13[v12 + 3];
        v15 = v13[(unsigned int)(v12 + 1) + 3];
        if ( *((_DWORD *)this + 16) > v14 )
          v14 = *((_DWORD *)this + 16);
        *v4 = v14;
        if ( *((_DWORD *)this + 18) < v15 )
          v15 = *((_DWORD *)this + 18);
        v4[2] = v15;
        if ( v14 >= v15 )
        {
          *((_DWORD *)this + 24) = *((_DWORD *)this + 26);
        }
        else
        {
          v16 = v10;
          if ( *((_DWORD *)this + 17) > v10 )
            v16 = *((_DWORD *)this + 17);
          v4[1] = v16;
          v17 = v11;
          if ( *((_DWORD *)this + 19) < v11 )
            v17 = *((_DWORD *)this + 19);
          v8 -= 16;
          v4[3] = v17;
          v4 += 4;
          *((_DWORD *)this + 24) += *((_DWORD *)this + 25);
          if ( a4 )
            *a4 += 16;
          ++*(_DWORD *)a3;
          if ( v8 < 0x10 )
            return 1LL;
        }
      }
      if ( !*((_DWORD *)this + 22) )
        return 0LL;
    }
  }
  v30 = *((_DWORD *)this + 27);
  v31 = (int *)*((_QWORD *)this + 10);
  v32 = *((_DWORD *)this + 24);
  v33 = *((_DWORD *)this + 26);
  v34 = *((_DWORD *)this + 25);
  v35 = v8 >> 4;
  if ( !*((_DWORD *)this + 22) )
    return 0LL;
  while ( v32 == v33 )
  {
    if ( v30 >= 2 )
      v31 = (int *)((char *)v31 - (unsigned int)(4 * *(v31 - 1) + 16));
    else
      v31 = (int *)((char *)v31 + (unsigned int)(4 * *v31 + 16));
    --*((_DWORD *)this + 22);
    if ( *v31 )
    {
      if ( (v30 & 1) != 0 )
      {
        v32 = *v31 - 2;
        v33 = -2;
      }
      else
      {
        v32 = 0;
        v33 = *v31;
      }
      break;
    }
LABEL_56:
    if ( !*((_DWORD *)this + 22) )
      return 0LL;
  }
  --v35;
  v36 = v32 + 1;
  *v4 = v31[v32 + 3];
  v32 += v34;
  v4[2] = v31[v36 + 3];
  v4[1] = v31[1];
  v4[3] = v31[2];
  v4 += 4;
  ++*(_DWORD *)a3;
  if ( a4 )
    *a4 += 16;
  if ( v35 )
    goto LABEL_56;
  *((_DWORD *)this + 24) = v32;
  *((_DWORD *)this + 26) = v33;
  *((_QWORD *)this + 10) = v31;
  return 1LL;
}
