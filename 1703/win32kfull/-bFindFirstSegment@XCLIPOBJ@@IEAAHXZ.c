/*
 * XREFs of ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C0128FA4
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C01293C4 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C01297EC (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C0128E14 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C0128E68 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z @ 0x1C0129E54 (-vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bFindFirstSegment(XCLIPOBJ *this)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edi
  struct _POINTL *v8; // r8
  LONG y; // edx
  struct _POINTL *v10; // r8
  LONG v11; // r9d
  LONG x; // edx
  int *v13; // r10
  _DWORD *v14; // r10
  _DWORD *v15; // rcx
  int v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // r9
  struct _POINTL *v20; // r8
  int v21; // eax
  LONG v22; // edx
  int v23; // ecx
  int v24; // r11d
  int v25; // r10d
  LONG v26; // edx
  int v27; // ecx
  int v29; // ecx
  int v30; // edx
  int v31; // [rsp+40h] [rbp+8h] BYREF
  int v32; // [rsp+44h] [rbp+Ch] BYREF

  *(_QWORD *)(*((_QWORD *)this + 18) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 18) + 152LL);
  v2 = *((_QWORD *)this + 18);
  v3 = *((_QWORD *)this + 10);
  if ( (*(_DWORD *)(v2 + 24) & 0x800000) != 0 )
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 4);
    v4 = *((_QWORD *)this + 10);
    v5 = *((_QWORD *)this + 18);
    v6 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v3 + 8);
    v5 = *((_QWORD *)this + 18);
    v6 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL);
  }
  *(_DWORD *)(v5 + 168) = v6;
  v7 = 0;
  v8 = (struct _POINTL *)*((_QWORD *)this + 18);
  y = v8[20].y;
  if ( (((unsigned int)v8[3].x >> 23) & 1) == v8[16].y < y )
  {
    XCLIPOBJ::vIntersectScan(this, y, 0LL, v8 + 16, &v8[3].y);
  }
  else
  {
    v8[3].y = v8[20].x;
    *(_DWORD *)(*((_QWORD *)this + 18) + 164LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 132LL);
  }
  v10 = (struct _POINTL *)*((_QWORD *)this + 18);
  v11 = v10[15].y;
  x = v10[21].x;
  if ( (((unsigned int)v10[3].x >> 23) & 1) == v11 >= x )
  {
    XCLIPOBJ::vIntersectScan(this, x, v10 + 18, v10 + 19, (int *)&v10[20]);
  }
  else
  {
    v10[18].y = v11;
    *(_DWORD *)(*((_QWORD *)this + 18) + 144LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 120LL);
    *(_DWORD *)(*((_QWORD *)this + 18) + 168LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) + 1;
    v13 = (int *)*((_QWORD *)this + 18);
    v31 = v13[24];
    v32 = v13[25];
    DDA_CLIPLINE::vUnflip((DDA_CLIPLINE *)(v13 + 16), &v31, &v32);
    if ( (*v15 & 5) != 0 )
    {
      v16 = v14[31];
      v17 = v32;
    }
    else
    {
      v16 = v14[30];
      v17 = v31;
    }
    if ( v16 - v17 >= 0 )
      v18 = v16 - v17;
    else
      v18 = v17 - v16;
    v14[40] = v18;
  }
  v19 = (_DWORD *)*((_QWORD *)this + 10);
  v20 = (struct _POINTL *)*((_QWORD *)this + 18);
  v21 = *v19 - 1;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = v21;
  v22 = v20[16].x;
  v23 = v21;
  if ( v22 >= v19[v21 + 3] )
  {
    *((_DWORD *)this + 24) = v21;
    if ( (v20[3].x & 0x400000) != 0 )
      return 0LL;
    *((_DWORD *)this + 24) = v21 + 1;
  }
  else if ( v22 < v19[3] )
  {
    if ( (v20[3].x & 0x400000) == 0 )
      return 0LL;
    *((_DWORD *)this + 24) = -1;
  }
  else
  {
    v24 = 0;
    do
    {
      while ( 1 )
      {
        v25 = (v23 + v24) / 2;
        *((_DWORD *)this + 24) = v25;
        v26 = v20[16].x;
        if ( v26 >= v19[v25 + 3] )
          break;
        v23 = v25 - 1;
        if ( v26 >= v19[v25 + 2] )
          goto LABEL_17;
      }
      v24 = v25 + 1;
    }
    while ( v26 >= v19[v25 + 4] );
    *((_DWORD *)this + 24) = v25 + 1;
LABEL_17:
    *((_DWORD *)this + 24) -= ((unsigned int)v20[3].x >> 22) & 1;
  }
  v27 = *((_DWORD *)this + 24);
  if ( (((unsigned __int8)v27 ^ (unsigned __int8)((unsigned int)v20[3].x >> 22)) & 1) != 0 )
    return 1LL;
  v29 = *((_DWORD *)this + 25) + v27;
  *((_DWORD *)this + 24) = v29;
  v30 = v19[v29 + 3];
  LOBYTE(v7) = v30 > v20[18].x;
  if ( (((unsigned int)v20[3].x >> 22) & 1) != v7 )
  {
    XCLIPOBJ::bIntersectWall(this, v30, 0LL, v20 + 16, &v20[3].y);
    return 1LL;
  }
  return 0LL;
}
