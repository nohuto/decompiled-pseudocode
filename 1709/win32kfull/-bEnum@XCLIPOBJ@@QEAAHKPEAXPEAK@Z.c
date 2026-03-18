/*
 * XREFs of ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002D16C
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C000AB4C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     EngTextOut @ 0x1C0011110 (EngTextOut.c)
 *     EngAlphaBlend @ 0x1C0012D70 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00149D8 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00277E0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C002E470 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngHTBlt @ 0x1C003CCA0 (EngHTBlt.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0065E58 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0072798 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00BB584 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngTransparentBlt @ 0x1C00ED7C0 (EngTransparentBlt.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00EDD94 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_bEnum @ 0x1C0112260 (CLIPOBJ_bEnum.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0259A30 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C026ADBC (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C026DE48 (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C028D3A0 (NtGdiCLIPOBJ_bEnum.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C029DAA4 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C029DD48 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bEnum(XCLIPOBJ *this, unsigned int a2, char *a3, unsigned int *a4)
{
  _DWORD *v4; // r15
  unsigned int v8; // edi
  __int64 v9; // rax
  int v10; // ebp
  int v11; // r12d
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r8d
  int *v19; // rax
  int v20; // edx
  int v21; // esi
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rcx
  int v25; // edx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v29; // ebp
  int *v30; // rdx
  unsigned int v31; // r8d
  int v32; // r9d
  int v33; // r12d
  unsigned int v34; // edi
  __int64 v35; // rax

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
LABEL_35:
            *((_DWORD *)this + 22) = 0;
            return 0LL;
          }
          *((_QWORD *)this + 10) = (char *)v13 - (unsigned int)(4 * *(v13 - 1) + 16);
        }
        else
        {
          if ( v13[2] >= *((_DWORD *)this + 19) )
            goto LABEL_35;
          *((_QWORD *)this + 10) = (char *)v13 + (unsigned int)(4 * *v13 + 16);
        }
        --*((_DWORD *)this + 22);
        v19 = (int *)*((_QWORD *)this + 10);
        v10 = v19[1];
        v11 = v19[2];
        if ( (v18 & 1) != 0 )
        {
          v23 = *v19 - 2;
          *((_DWORD *)this + 26) = -2;
          *((_DWORD *)this + 24) = v23;
          if ( v23 != -2 )
          {
            v24 = *((_QWORD *)this + 10);
            v25 = *((_DWORD *)this + 18);
            do
            {
              v26 = *((unsigned int *)this + 24);
              if ( *(_DWORD *)(v24 + 4 * v26 + 12) < v25 )
                break;
              v27 = v26 - 2;
              *((_DWORD *)this + 24) = v27;
            }
            while ( v27 != -2 );
          }
        }
        else
        {
          *((_DWORD *)this + 24) = 0;
          v20 = *v19;
          *((_DWORD *)this + 26) = *v19;
          if ( v20 )
          {
            v21 = *((_DWORD *)this + 16);
            do
            {
              v22 = *((_DWORD *)this + 24);
              if ( v19[v22 + 1 + 3] > v21 )
                break;
              *((_DWORD *)this + 24) = v22 + 2;
            }
            while ( v22 + 2 != v20 );
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
  v29 = *((_DWORD *)this + 27);
  v30 = (int *)*((_QWORD *)this + 10);
  v31 = *((_DWORD *)this + 24);
  v32 = *((_DWORD *)this + 26);
  v33 = *((_DWORD *)this + 25);
  v34 = v8 >> 4;
  if ( !*((_DWORD *)this + 22) )
    return 0LL;
  while ( v31 == v32 )
  {
    if ( v29 >= 2 )
      v30 = (int *)((char *)v30 - (unsigned int)(4 * *(v30 - 1) + 16));
    else
      v30 = (int *)((char *)v30 + (unsigned int)(4 * *v30 + 16));
    --*((_DWORD *)this + 22);
    if ( *v30 )
    {
      if ( (v29 & 1) != 0 )
      {
        v31 = *v30 - 2;
        v32 = -2;
      }
      else
      {
        v31 = 0;
        v32 = *v30;
      }
      break;
    }
LABEL_56:
    if ( !*((_DWORD *)this + 22) )
      return 0LL;
  }
  --v34;
  v35 = v31 + 1;
  *v4 = v30[v31 + 3];
  v31 += v33;
  v4[2] = v30[v35 + 3];
  v4[1] = v30[1];
  v4[3] = v30[2];
  v4 += 4;
  ++*(_DWORD *)a3;
  if ( a4 )
    *a4 += 16;
  if ( v34 )
    goto LABEL_56;
  *((_DWORD *)this + 24) = v31;
  *((_DWORD *)this + 26) = v32;
  *((_QWORD *)this + 10) = v30;
  return 1LL;
}
