/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00F1430
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C001D300 (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C001DAF0 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YAHPEAU_RECTFX@@0@Z @ 0x1C00F13F8 (-bIntersect@@YAHPEAU_RECTFX@@0@Z.c)
 *     ?vError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00F189C (-vError@HFDBASIS64@@QEAAXPEA_J@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C00F1A28 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vParentError@HFDBASIS64@@QEAAXPEA_J@Z @ 0x1C00F1ABC (-vParentError@HFDBASIS64@@QEAAXPEA_J@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x1C00F1B3C (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  HFDBASIS64 *v4; // rsi
  __int64 v5; // r10
  struct _RECTFX *v6; // r10
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v36; // r11d
  __int64 v37; // r10
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _RECTFX v48; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTFIX v49; // [rsp+40h] [rbp-20h] BYREF
  int v50; // [rsp+48h] [rbp-18h]
  int v51; // [rsp+4Ch] [rbp-14h]
  int v52; // [rsp+50h] [rbp-10h]
  int v53; // [rsp+54h] [rbp-Ch]
  int v54; // [rsp+58h] [rbp-8h]
  int v55; // [rsp+5Ch] [rbp-4h]
  __int64 v56; // [rsp+80h] [rbp+20h] BYREF

  if ( !*((_DWORD *)this + 41) )
  {
    v4 = (BEZIER64 *)((char *)this + 64);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v49);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v49.y);
    HFDBASIS64::vInit(this, v49.x, v50, v52, v54);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v49.y, v51, v53, v55);
    v5 = *((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v5 || (vBoundBox(&v49, &v48), bIntersect(&v48, v6)) )
    {
      while ( 1 )
      {
        HFDBASIS64::vError(this, &v56);
        if ( v56 <= *((_QWORD *)this + 16) )
        {
          HFDBASIS64::vError((BEZIER64 *)((char *)this + 32), &v56);
          if ( v56 <= v7 )
            break;
        }
        *((_DWORD *)this + 41) *= 2;
        v8 = *((_QWORD *)this + 3);
        v9 = (v8 + *((_QWORD *)this + 2)) >> 3;
        v10 = *((_QWORD *)this + 1) - v9;
        *((_QWORD *)this + 2) = v9;
        *((_QWORD *)this + 1) = v10 >> 1;
        *((_QWORD *)this + 3) = v8 >> 2;
        v11 = *((_QWORD *)this + 7);
        v12 = (v11 + *((_QWORD *)this + 6)) >> 3;
        v13 = *((_QWORD *)this + 5) - v12;
        *((_QWORD *)this + 6) = v12;
        *((_QWORD *)this + 7) = v11 >> 2;
        *((_QWORD *)this + 5) = v13 >> 1;
      }
    }
    v14 = (*((_DWORD *)this + 40))-- == 1;
    if ( !v14 )
    {
      v15 = *((_QWORD *)v4 + 2);
      v16 = *((_QWORD *)v4 + 1);
      *(_QWORD *)v4 += v16;
      *((_QWORD *)v4 + 1) = v15 + v16;
      *((_QWORD *)v4 + 2) = 2 * v15 - *((_QWORD *)v4 + 3);
      *((_QWORD *)v4 + 3) = v15;
      v17 = *((_QWORD *)this + 14);
      v18 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 12) += v18;
      *((_QWORD *)this + 13) = v17 + v18;
      v19 = 2 * v17 - *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = v17;
      *((_QWORD *)this + 14) = v19;
      HFDBASIS64::vError(v4, &v56);
      if ( v56 > geqErrorHigh || (HFDBASIS64::vError((BEZIER64 *)((char *)this + 96), &v56), v56 > v20) )
      {
        *((_DWORD *)this + 40) *= 2;
        v21 = *((_QWORD *)v4 + 3);
        v22 = (v21 + *((_QWORD *)v4 + 2)) >> 3;
        v23 = *((_QWORD *)v4 + 1) - v22;
        *((_QWORD *)v4 + 2) = v22;
        *((_QWORD *)v4 + 1) = v23 >> 1;
        *((_QWORD *)v4 + 3) = v21 >> 2;
        v24 = *((_QWORD *)this + 15);
        v25 = (v24 + *((_QWORD *)this + 14)) >> 3;
        v26 = *((_QWORD *)this + 13) - v25;
        *((_QWORD *)this + 14) = v25;
        *((_QWORD *)this + 15) = v24 >> 2;
        *((_QWORD *)this + 13) = v26 >> 1;
      }
      while ( (*((_DWORD *)this + 40) & 1) == 0 )
      {
        HFDBASIS64::vParentError(v4, &v56);
        v27 = geqErrorHigh;
        if ( v56 > geqErrorHigh )
          break;
        HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 96), &v56);
        if ( v56 > v27 )
          break;
        v28 = *((_QWORD *)v4 + 2);
        *((_QWORD *)v4 + 3) *= 4LL;
        *((_QWORD *)v4 + 1) = v28 + 2LL * *((_QWORD *)v4 + 1);
        *((_QWORD *)v4 + 2) = 8 * v28 - *((_QWORD *)v4 + 3);
        v29 = *((_QWORD *)this + 14);
        v30 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 15) *= 4LL;
        *((_QWORD *)this + 13) = v29 + 2 * v30;
        *((_QWORD *)this + 14) = 8 * v29 - *((_QWORD *)this + 15);
        *((int *)this + 40) >>= 1;
      }
    }
  }
  v31 = *((_QWORD *)this + 2);
  v32 = *((_QWORD *)this + 1);
  *(_QWORD *)this += v32;
  *((_QWORD *)this + 1) = v31 + v32;
  *((_QWORD *)this + 2) = 2 * v31 - *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v31;
  v33 = *((_QWORD *)this + 6);
  v34 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v34;
  *((_QWORD *)this + 5) = v33 + v34;
  *((_QWORD *)this + 6) = 2 * v33 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v33;
  a2->x = (*(_QWORD *)this + 0x8000000LL) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v14 = (*((_DWORD *)this + 41))-- == 1;
  if ( v14 && !*((_DWORD *)this + 40) )
    return 0LL;
  HFDBASIS64::vError(this, &v56);
  if ( v56 > *((_QWORD *)this + 16) || (HFDBASIS64::vError((BEZIER64 *)((char *)this + 32), &v56), v56 > v37) )
  {
    *((_DWORD *)this + 41) = 2 * v36;
    v38 = *((_QWORD *)this + 3);
    v39 = (v38 + *((_QWORD *)this + 2)) >> 3;
    v40 = *((_QWORD *)this + 1) - v39;
    *((_QWORD *)this + 2) = v39;
    *((_QWORD *)this + 1) = v40 >> 1;
    *((_QWORD *)this + 3) = v38 >> 2;
    v41 = *((_QWORD *)this + 7);
    v42 = (v41 + *((_QWORD *)this + 6)) >> 3;
    v43 = *((_QWORD *)this + 5) - v42;
    *((_QWORD *)this + 6) = v42;
    *((_QWORD *)this + 7) = v41 >> 2;
    *((_QWORD *)this + 5) = v43 >> 1;
  }
  for ( ; (*((_DWORD *)this + 41) & 1) == 0; *((int *)this + 41) >>= 1 )
  {
    HFDBASIS64::vParentError(this, &v56);
    v44 = *((_QWORD *)this + 16);
    if ( v56 > v44 )
      break;
    HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v56);
    if ( v56 > v44 )
      break;
    *((_QWORD *)this + 3) *= 4LL;
    v45 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 1) = v45 + 2LL * *((_QWORD *)this + 1);
    *((_QWORD *)this + 2) = 8 * v45 - *((_QWORD *)this + 3);
    v46 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 7) *= 4LL;
    v47 = v46 + 2LL * *((_QWORD *)this + 5);
    *((_QWORD *)this + 6) = 8 * v46 - *((_QWORD *)this + 7);
    *((_QWORD *)this + 5) = v47;
  }
  return 1LL;
}
