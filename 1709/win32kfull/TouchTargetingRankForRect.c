/*
 * XREFs of TouchTargetingRankForRect @ 0x1C023CE74
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01D314C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01D426C (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     TouchTargetingRankForRegion @ 0x1C023D628 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C023C3C8 (-_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 */

__int64 __fastcall TouchTargetingRankForRect(
        int *a1,
        struct tagRECT *a2,
        __int64 a3,
        int *a4,
        int *a5,
        unsigned int a6)
{
  int *v10; // r14
  unsigned int v11; // r15d
  int v12; // r13d
  int v14; // r8d
  int v15; // ecx
  signed int v16; // ecx
  signed int v17; // r8d
  signed int v18; // edx
  signed int v19; // r8d
  signed int v20; // r9d
  signed int v21; // eax
  signed int v22; // edx
  signed int v23; // r8d
  signed int v24; // ecx
  signed int v25; // ecx
  signed int v26; // edx
  signed int v27; // r9d
  LONG y; // r8d
  LONG x; // r9d
  int v30; // r11d
  int v31; // eax
  int v32; // r10d
  int v33; // ecx
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  LONG v37; // r10d
  LONG left; // r15d
  LONG v39; // eax
  LONG v40; // ecx
  int v41; // eax
  bool v42; // cc
  __int128 v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  LONG v46; // ecx
  LONG right; // eax
  LONG v48; // r11d
  LONG top; // r12d
  LONG bottom; // r12d
  int v51; // edx
  int v52; // eax
  struct tagPOINT v53[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v54; // [rsp+50h] [rbp-20h]
  struct tagRECT v55; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int16 v56; // [rsp+B0h] [rbp+40h] BYREF

  v56 = 4094;
  if ( *(_DWORD *)(a3 + 180)
    && (unsigned int)IntersectRect(&v55, a1, (int *)a3)
    && (!a4 || (unsigned int)IntersectRect(a1, a1, a4))
    && (unsigned int)IntersectRect(a1, &a2->left, a1)
    && *a1 != a1[2]
    && a1[1] != a1[3] )
  {
    v10 = a5;
    if ( a5 )
      *(_QWORD *)a5 = 0LL;
    v11 = a6;
    v54 = 0xFFFFFFFFLL;
    v12 = 0x7FFFFFFF;
    if ( !a6 )
    {
      *(struct tagRECT *)&v53[0].x = *a2;
      if ( a4 && !(unsigned int)IntersectRect(v53, (int *)v53, a4) )
        return 4094LL;
      v14 = 0x7FFFFFFF;
      if ( (unsigned __int64)(*(int *)(a3 + 184) * (__int64)(v53[1].x - v53[0].x) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v14 = *(int *)(a3 + 184) * (__int64)(v53[1].x - v53[0].x) / 1000;
      v15 = 0x7FFFFFFF;
      if ( (unsigned __int64)(*(int *)(a3 + 188) * (__int64)(v53[1].y - v53[0].y) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v15 = *(int *)(a3 + 188) * (__int64)(v53[1].y - v53[0].y) / 1000;
      if ( v14 > 1400 && v15 > 1400 )
        return 4093LL;
    }
    v16 = *a1;
    v17 = a1[2] - 1;
    v18 = a1[1];
    if ( *a1 == v17 )
    {
      v19 = *a1;
      v20 = a1[3] - 1;
    }
    else
    {
      v21 = a1[3] - 1;
      v55 = *a2;
      if ( v18 == v21 )
      {
        _TTUpdateRankWithSegment(v16, v21, v17, v21, v53, &v56, &v55, (const struct tagTOUCHTARGETINGCONTACT *)a3);
        goto LABEL_27;
      }
      _TTUpdateRankWithSegment(v16, v18, v16, v21, v53, &v56, &v55, (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v22 = a1[3] - 1;
      v23 = a1[2] - 1;
      v24 = *a1;
      v55 = *a2;
      _TTUpdateRankWithSegment(v24, v22, v23, v22, v53, &v56, &v55, (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v25 = a1[2] - 1;
      v26 = a1[3] - 1;
      v27 = a1[1];
      v55 = *a2;
      _TTUpdateRankWithSegment(v25, v26, v25, v27, v53, &v56, &v55, (const struct tagTOUCHTARGETINGCONTACT *)a3);
      v18 = a1[1];
      v16 = a1[2] - 1;
      v19 = *a1;
      v20 = v18;
    }
    v55 = *a2;
    _TTUpdateRankWithSegment(v16, v18, v19, v20, v53, &v56, &v55, (const struct tagTOUCHTARGETINGCONTACT *)a3);
LABEL_27:
    if ( v56 == 4094 || !v10 )
      return v56;
    y = v53[0].y;
    x = v53[0].x;
    if ( v11 && (_WORD)v11 != 3 )
      goto LABEL_52;
    v30 = 200;
    if ( (_WORD)v11 == 3 )
      v30 = HIWORD(v11);
    v31 = v53[0].x - *(_DWORD *)(a3 + 32);
    *v10 = v31;
    v32 = y - *(_DWORD *)(a3 + 36);
    v10[1] = v32;
    if ( v31 )
    {
      v33 = 0x7FFFFFFF;
      v34 = *(int *)(a3 + 184) * (__int64)(int)abs32(v31) / 1000;
      if ( v34 + 0x80000000LL <= v54 )
        v33 = v34;
      if ( v33 > v30 )
        return 4094LL;
    }
    if ( v32 )
    {
      v35 = 0x7FFFFFFF;
      v36 = *(int *)(a3 + 188) * (__int64)(int)abs32(v32) / 1000;
      if ( (unsigned __int64)(v36 + 0x80000000LL) <= 0xFFFFFFFF )
        v35 = v36;
      if ( v35 > v30 )
        return 4094LL;
    }
    if ( v11 )
    {
LABEL_52:
      v45 = a1[2] - 1;
      if ( x == *a1 )
      {
        if ( x + 1 < v45 && x + 1 < *(_DWORD *)(a3 + 8) )
          ++x;
      }
      else if ( x == v45 && x - 1 > *a1 && x - 1 >= *(_DWORD *)a3 )
      {
        --x;
      }
      v51 = a1[1];
      v52 = a1[3] - 1;
      if ( y == v51 )
      {
        if ( y + 1 < v52 && y + 1 < *(_DWORD *)(a3 + 12) )
          ++y;
      }
      else if ( y == v52 && y - 1 > v51 && y - 1 >= *(_DWORD *)(a3 + 4) )
      {
        --y;
      }
      *v10 = x - *(_DWORD *)(a3 + 32);
      v10[1] = y - *(_DWORD *)(a3 + 36);
      return v56;
    }
    v37 = *(_DWORD *)(a3 + 32);
    left = a2->left;
    if ( v37 >= a2->left )
    {
      right = a2->right;
      if ( v37 < right )
        goto LABEL_48;
      v48 = *(_DWORD *)(a3 + 36);
      top = a2->top;
      if ( v48 >= top )
      {
        bottom = a2->bottom;
        if ( v48 >= bottom && (int)abs32(v37 - right + 1) <= (int)abs32(v48 - bottom + 1) )
          goto LABEL_48;
        goto LABEL_63;
      }
      v42 = (int)abs32(v37 - right + 1) <= (int)abs32(v48 - top);
    }
    else
    {
      v39 = *(_DWORD *)(a3 + 36);
      v40 = a2->top;
      if ( v39 >= v40 )
      {
        v46 = a2->bottom;
        if ( v39 < v46 )
          goto LABEL_63;
        v41 = v39 - v46 + 1;
      }
      else
      {
        v41 = v39 - v40;
      }
      v42 = (int)abs32(v37 - left) <= (int)abs32(v41);
    }
    if ( v42 )
    {
LABEL_48:
      v43 = *(int *)(a3 + 188) * (__int64)(int)abs32(y - (a2->top + a2->bottom) / 2) * (__int128)0x20C49BA5E353F7CFLL;
      goto LABEL_49;
    }
LABEL_63:
    v43 = *(int *)(a3 + 184) * (__int64)(int)abs32(x - (left + a2->right) / 2) * (__int128)0x20C49BA5E353F7CFLL;
LABEL_49:
    v44 = (*((_QWORD *)&v43 + 1) >> 63) + (*((__int64 *)&v43 + 1) >> 7);
    if ( (unsigned __int64)(v44 + 0x80000000LL) <= 0xFFFFFFFF )
      v12 = v44;
    if ( v12 <= 700 )
      goto LABEL_52;
    return 4094LL;
  }
  return 4094LL;
}
