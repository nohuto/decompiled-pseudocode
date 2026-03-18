/*
 * XREFs of TouchTargetingRankForRect @ 0x1C023AF0C
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01CEC10 (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01CFB94 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     TouchTargetingRankForRegion @ 0x1C023B6B8 (TouchTargetingRankForRegion.c)
 * Callees:
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     _TTUpdateRankWithSegment @ 0x1C023BE04 (_TTUpdateRankWithSegment.c)
 */

__int64 __fastcall TouchTargetingRankForRect(int *a1, int *a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  int *v10; // r14
  unsigned int v11; // r15d
  int v12; // r13d
  int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  int v24; // ecx
  int v25; // ecx
  int v26; // edx
  int v27; // r9d
  int v28; // r8d
  int v29; // r9d
  int v30; // r11d
  int v31; // eax
  int v32; // r10d
  int v33; // ecx
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // rdx
  int v37; // r10d
  int v38; // r15d
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  bool v42; // cc
  __int128 v43; // rax
  __int64 v44; // rdx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // r11d
  int v49; // r12d
  int v50; // r12d
  int v51; // edx
  int v52; // eax
  __int128 v53; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v54; // [rsp+50h] [rbp-20h]
  __int128 v55; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int16 v56; // [rsp+B0h] [rbp+40h] BYREF

  v56 = 4094;
  if ( a3[45]
    && (unsigned int)IntersectRect((int *)&v55, a1, a3)
    && (!a4 || (unsigned int)IntersectRect(a1, a1, a4))
    && (unsigned int)IntersectRect(a1, a2, a1)
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
      v53 = *(_OWORD *)a2;
      if ( a4 && !(unsigned int)IntersectRect((int *)&v53, (int *)&v53, a4) )
        return 4094LL;
      v14 = 0x7FFFFFFF;
      if ( (unsigned __int64)(a3[46] * (__int64)(DWORD2(v53) - (int)v53) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v14 = a3[46] * (__int64)(DWORD2(v53) - (int)v53) / 1000;
      v15 = 0x7FFFFFFF;
      if ( (unsigned __int64)(a3[47] * (__int64)(HIDWORD(v53) - DWORD1(v53)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v15 = a3[47] * (__int64)(HIDWORD(v53) - DWORD1(v53)) / 1000;
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
      v55 = *(_OWORD *)a2;
      if ( v18 == v21 )
      {
        TTUpdateRankWithSegment(v16, v21, v17, v21, (__int64)&v53, (__int64)&v56, (__int64)&v55, (__int64)a3);
        goto LABEL_27;
      }
      TTUpdateRankWithSegment(v16, v18, v16, v21, (__int64)&v53, (__int64)&v56, (__int64)&v55, (__int64)a3);
      v22 = a1[3] - 1;
      v23 = a1[2] - 1;
      v24 = *a1;
      v55 = *(_OWORD *)a2;
      TTUpdateRankWithSegment(v24, v22, v23, v22, (__int64)&v53, (__int64)&v56, (__int64)&v55, (__int64)a3);
      v25 = a1[2] - 1;
      v26 = a1[3] - 1;
      v27 = a1[1];
      v55 = *(_OWORD *)a2;
      TTUpdateRankWithSegment(v25, v26, v25, v27, (__int64)&v53, (__int64)&v56, (__int64)&v55, (__int64)a3);
      v18 = a1[1];
      v16 = a1[2] - 1;
      v19 = *a1;
      v20 = v18;
    }
    v55 = *(_OWORD *)a2;
    TTUpdateRankWithSegment(v16, v18, v19, v20, (__int64)&v53, (__int64)&v56, (__int64)&v55, (__int64)a3);
LABEL_27:
    if ( v56 == 4094 || !v10 )
      return v56;
    v28 = DWORD1(v53);
    v29 = v53;
    if ( v11 && (_WORD)v11 != 3 )
      goto LABEL_52;
    v30 = 200;
    if ( (_WORD)v11 == 3 )
      v30 = HIWORD(v11);
    v31 = v53 - a3[8];
    *v10 = v31;
    v32 = v28 - a3[9];
    v10[1] = v32;
    if ( v31 )
    {
      v33 = 0x7FFFFFFF;
      v34 = a3[46] * (__int64)(int)abs32(v31) / 1000;
      if ( v34 + 0x80000000LL <= v54 )
        v33 = v34;
      if ( v33 > v30 )
        return 4094LL;
    }
    if ( v32 )
    {
      v35 = 0x7FFFFFFF;
      v36 = a3[47] * (__int64)(int)abs32(v32) / 1000;
      if ( (unsigned __int64)(v36 + 0x80000000LL) <= 0xFFFFFFFF )
        v35 = v36;
      if ( v35 > v30 )
        return 4094LL;
    }
    if ( v11 )
    {
LABEL_52:
      v45 = a1[2] - 1;
      if ( v29 == *a1 )
      {
        if ( v29 + 1 < v45 && v29 + 1 < a3[2] )
          ++v29;
      }
      else if ( v29 == v45 && v29 - 1 > *a1 && v29 - 1 >= *a3 )
      {
        --v29;
      }
      v51 = a1[1];
      v52 = a1[3] - 1;
      if ( v28 == v51 )
      {
        if ( v28 + 1 < v52 && v28 + 1 < a3[3] )
          ++v28;
      }
      else if ( v28 == v52 && v28 - 1 > v51 && v28 - 1 >= a3[1] )
      {
        --v28;
      }
      *v10 = v29 - a3[8];
      v10[1] = v28 - a3[9];
      return v56;
    }
    v37 = a3[8];
    v38 = *a2;
    if ( v37 >= *a2 )
    {
      v47 = a2[2];
      if ( v37 < v47 )
        goto LABEL_48;
      v48 = a3[9];
      v49 = a2[1];
      if ( v48 >= v49 )
      {
        v50 = a2[3];
        if ( v48 >= v50 && (int)abs32(v37 - v47 + 1) <= (int)abs32(v48 - v50 + 1) )
          goto LABEL_48;
        goto LABEL_63;
      }
      v42 = (int)abs32(v37 - v47 + 1) <= (int)abs32(v48 - v49);
    }
    else
    {
      v39 = a3[9];
      v40 = a2[1];
      if ( v39 >= v40 )
      {
        v46 = a2[3];
        if ( v39 < v46 )
          goto LABEL_63;
        v41 = v39 - v46 + 1;
      }
      else
      {
        v41 = v39 - v40;
      }
      v42 = (int)abs32(v37 - v38) <= (int)abs32(v41);
    }
    if ( v42 )
    {
LABEL_48:
      v43 = a3[47] * (__int64)(int)abs32(v28 - (a2[1] + a2[3]) / 2) * (__int128)0x20C49BA5E353F7CFLL;
      goto LABEL_49;
    }
LABEL_63:
    v43 = a3[46] * (__int64)(int)abs32(v29 - (v38 + a2[2]) / 2) * (__int128)0x20C49BA5E353F7CFLL;
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
