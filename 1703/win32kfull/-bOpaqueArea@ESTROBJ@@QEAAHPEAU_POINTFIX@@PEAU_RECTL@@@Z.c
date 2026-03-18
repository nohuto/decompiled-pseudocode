/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C007BF18
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

__int64 __fastcall ESTROBJ::bOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, struct _RECTL *a3)
{
  int v6; // edx
  LONG v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  __int64 result; // rax
  _QWORD *v11; // rax
  EFLOAT *v12; // r15
  __int64 v13; // r14
  EFLOAT *v14; // r8
  int v15; // esi
  int v16; // edx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // ecx
  int v36; // eax
  FIX v37; // r10d
  int v38; // r9d
  int v39; // ecx
  FIX v40; // r9d
  FIX v41; // r8d
  FIX y; // eax
  int v43; // edx
  LONG v44; // eax
  int v45; // ecx
  int v46; // [rsp+20h] [rbp-20h] BYREF
  int v47; // [rsp+24h] [rbp-1Ch] BYREF
  int v48; // [rsp+28h] [rbp-18h] BYREF
  int v49; // [rsp+2Ch] [rbp-14h] BYREF
  int v50; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v51[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v52; // [rsp+70h] [rbp+30h] BYREF
  int v53; // [rsp+88h] [rbp+48h] BYREF

  if ( (*((_DWORD *)this + 1) & 2) != 0 )
  {
    v6 = (*((_DWORD *)this + 20) + 8) >> 4;
    a3->left = v6 + (*((int *)this + 26) >> 4);
    v7 = v6 + ((*((_DWORD *)this + 28) + 15) >> 4);
    a3->right = v7;
    v8 = *((_QWORD *)this + 7);
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 12LL) & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)v8 + 488LL) & 6) != 0 )
    {
      a3->right = v7 + 1;
      *((_DWORD *)this + 1) &= ~0x10u;
    }
    v9 = (*((_DWORD *)this + 21) + 8) >> 4;
    a3->top = v9 - ((*((_DWORD *)this + 27) + 15) >> 4);
    a3->bottom = v9 - (*((int *)this + 29) >> 4);
    return 0LL;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 7);
  v12 = (EFLOAT *)(*v11 + 396LL);
  v13 = *v11 + 412LL;
  v15 = 0;
  if ( (unsigned int)EFLOAT::bIsZero(v12) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)v13) )
  {
    v16 = (*((_DWORD *)this + 20) + 8) >> 4;
    if ( *(float *)v14 < 0.0 )
    {
      a3->left = v16 - ((*((_DWORD *)this + 28) + 15) >> 4);
      a3->right = v16 - (*((int *)this + 26) >> 4);
    }
    else
    {
      a3->left = v16 + (*((int *)this + 26) >> 4);
      a3->right = v16 + ((*((_DWORD *)this + 28) + 15) >> 4);
    }
    v17 = (*((_DWORD *)this + 21) + 8) >> 4;
    if ( *(float *)(v13 + 4) < 0.0 )
    {
      a3->top = v17 - ((*((_DWORD *)this + 27) + 15) >> 4);
      a3->bottom = v17 - (*((int *)this + 29) >> 4);
    }
    else
    {
      a3->top = v17 + (*((int *)this + 29) >> 4);
      a3->bottom = v17 + ((*((_DWORD *)this + 27) + 15) >> 4);
    }
    ++a3->right;
    return 0LL;
  }
  if ( (unsigned int)EFLOAT::bIsZero(v14) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v13 + 4)) )
  {
    v19 = (*((_DWORD *)this + 20) + 8) >> 4;
    if ( *(float *)v13 < 0.0 )
    {
      a3->left = v19 - ((*((_DWORD *)this + 27) + 15) >> 4);
      a3->right = v19 - (*((int *)this + 29) >> 4);
    }
    else
    {
      a3->left = v19 + (*((int *)this + 29) >> 4);
      a3->right = v19 + ((*((_DWORD *)this + 27) + 15) >> 4);
    }
    v20 = (*((_DWORD *)this + 21) + 8) >> 4;
    if ( *(float *)v12 < 0.0 )
    {
      a3->top = v20 - ((*((_DWORD *)this + 28) + 15) >> 4);
      a3->bottom = v20 - (*((int *)this + 26) >> 4);
    }
    else
    {
      a3->top = v20 + (*((int *)this + 26) >> 4);
      a3->bottom = v20 + ((*((_DWORD *)this + 28) + 15) >> 4);
    }
    ++a3->bottom;
    return 0LL;
  }
  v52 = 0;
  bFToL(v18, &v52, 0LL);
  v48 = 0;
  bFToL(v21, &v48, v22);
  v50 = 0;
  bFToL(v23, &v50, v24);
  v46 = 0;
  bFToL(v25, &v46, v26);
  v49 = 0;
  bFToL(v27, &v49, v28);
  v53 = 0;
  bFToL(v29, &v53, v30);
  v51[0] = 0;
  bFToL(v31, v51, v32);
  v47 = 0;
  bFToL(v33, &v47, v34);
  v35 = v49;
  v36 = v50;
  v37 = v52 + v49 + *((_DWORD *)this + 20);
  a2->x = v37;
  v38 = v35 + v36;
  v39 = v51[0];
  v40 = *((_DWORD *)this + 20) + v38;
  a2[1].x = v40;
  v41 = *((_DWORD *)this + 20) + v39 + v36;
  a2[2].x = v41;
  a2[3].x = v52 + *((_DWORD *)this + 20) + v39;
  a2->y = v48 + v53 + *((_DWORD *)this + 21);
  a2[1].y = v46 + v53 + *((_DWORD *)this + 21);
  a2[2].y = v46 + v47 + *((_DWORD *)this + 21);
  a2[3].y = v48 + v47 + *((_DWORD *)this + 21);
  a3->left = a2[v40 > v37 == v40 > v41].x;
  a3->right = a2[(v40 > v37 == v40 > v41) + 2].x;
  y = a2[1].y;
  LOBYTE(v15) = y > a2->y;
  v43 = v15 ^ (y > a2[2].y) ^ 1;
  a3->top = a2[v43].y;
  a3->bottom = a2[v43 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v44 = a3->top >> 4;
  a3->left = (a3->left >> 4) - 2;
  v45 = a3->right + 15;
  a3->top = v44 - 2;
  result = 1LL;
  a3->right = (v45 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return result;
}
