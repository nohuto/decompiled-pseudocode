/*
 * XREFs of GreGetBoundsRect @ 0x1C00F2548
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00F24E0 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C001B914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  DC *v5; // rdx
  unsigned int v6; // edi
  char *v7; // rbx
  __int64 v8; // rbx
  struct REGION *v10; // rax
  __int64 v11; // rcx
  LONG v12; // r9d
  LONG v13; // r8d
  LONG v14; // ecx
  LONG v15; // r10d
  __int128 v16; // xmm0
  LONG v17; // ecx
  LONG v18; // eax
  LONG v19; // edx
  LONG v20; // r8d
  LONG v21; // eax
  LONG v22; // r9d
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // edx
  LONG v29; // r8d
  LONG v30; // ecx
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // r9d
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  DC *v39; // [rsp+20h] [rbp-69h] BYREF
  int v40; // [rsp+28h] [rbp-61h]
  unsigned int v41; // [rsp+2Ch] [rbp-5Dh]
  int v42; // [rsp+30h] [rbp-59h] BYREF
  __m128i v43; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v44[32]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v45; // [rsp+70h] [rbp-19h]
  int v46; // [rsp+78h] [rbp-11h]
  int v47; // [rsp+7Ch] [rbp-Dh]
  struct _POINTL v48[2]; // [rsp+A0h] [rbp+17h] BYREF
  LONG x; // [rsp+B0h] [rbp+27h]
  LONG y; // [rsp+B4h] [rbp+2Bh]
  LONG v51; // [rsp+B8h] [rbp+2Fh]
  LONG v52; // [rsp+BCh] [rbp+33h]

  v39 = 0LL;
  v40 = 0;
  v41 = 0;
  XDCOBJ::vLock(&v39, a1);
  v5 = v39;
  v6 = 3;
  if ( !v39 )
    return 0;
  v7 = 0LL;
  if ( a3 < 0 )
  {
    v7 = (char *)v39 + 1480;
    if ( *((_DWORD *)v39 + 370) < *((_DWORD *)v39 + 372) && *((_DWORD *)v39 + 371) < *((_DWORD *)v39 + 373) )
      goto LABEL_10;
    goto LABEL_4;
  }
  if ( (a3 & 0x4000) != 0 )
  {
    v7 = (char *)v39 + 1496;
    if ( !IsRectEmptyInl((const struct tagRECT *)((char *)v39 + 1496)) )
    {
LABEL_10:
      *(_OWORD *)&a2->x = *(_OWORD *)v7;
      goto LABEL_11;
    }
    goto LABEL_4;
  }
  if ( IsRectEmptyInl((const struct tagRECT *)((char *)v39 + 1512)) )
  {
LABEL_4:
    v6 = 1;
    goto LABEL_5;
  }
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v44, (struct XDCOBJ *)&v39, 0);
  if ( (v44[24] & 1) != 0 )
  {
    v10 = XDCOBJ::prgnEffRao(&v39);
    v7 = (char *)v39 + 1512;
    v43 = *(__m128i *)((char *)v10 + 88);
    v11 = *((_DWORD *)v39 + 10) & 1;
    LODWORD(v10) = *((_DWORD *)v39 + 2 * v11 + 358);
    v12 = v43.m128i_i32[2] - (_DWORD)v10;
    v13 = _mm_cvtsi128_si32(v43) - (_DWORD)v10;
    LODWORD(v10) = *((_DWORD *)v39 + 2 * v11 + 359);
    v14 = v43.m128i_i32[1] - (_DWORD)v10;
    v15 = v43.m128i_i32[3] - (_DWORD)v10;
    if ( *((_DWORD *)v39 + 378) > v13 )
      v13 = *((_DWORD *)v39 + 378);
    a2->x = v13;
    if ( *((_DWORD *)v7 + 2) < v12 )
      v12 = *((_DWORD *)v7 + 2);
    a2[1].x = v12;
    if ( *((_DWORD *)v7 + 1) > v14 )
      v14 = *((_DWORD *)v7 + 1);
    a2->y = v14;
    if ( *((_DWORD *)v7 + 3) < v15 )
      v15 = *((_DWORD *)v7 + 3);
    a2[1].y = v15;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v43, (struct XDCOBJ *)&v39, 1026);
    if ( !v43.m128i_i64[0] )
      goto LABEL_29;
    if ( (*(_DWORD *)(v43.m128i_i64[0] + 32) & 1) != 0 )
    {
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)&v43, a2, 2LL) )
        goto LABEL_27;
      goto LABEL_29;
    }
    v16 = *(_OWORD *)&a2->x;
    x = a2->x;
    y = a2[1].y;
    v51 = a2[1].x;
    v52 = a2->y;
    *(_OWORD *)&v48[0].x = v16;
    if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)&v43, v48, 4LL) )
    {
LABEL_29:
      v6 = 0;
      goto LABEL_27;
    }
    v17 = v48[1].x;
    v18 = v48[1].x;
    v19 = v48[0].x;
    v20 = x;
    if ( v48[0].x < v48[1].x )
      v18 = v48[0].x;
    if ( v18 >= x )
    {
      v21 = x;
    }
    else
    {
      v21 = v48[1].x;
      if ( v48[0].x < v48[1].x )
        v21 = v48[0].x;
    }
    v22 = v51;
    if ( v21 >= v51 )
    {
      v24 = v51;
    }
    else
    {
      v23 = v48[1].x;
      if ( v48[0].x < v48[1].x )
        v23 = v48[0].x;
      if ( v23 >= x )
      {
        v24 = x;
      }
      else
      {
        v24 = v48[1].x;
        if ( v48[0].x < v48[1].x )
          v24 = v48[0].x;
      }
    }
    a2->x = v24;
    v25 = v17;
    if ( v19 > v17 )
      v25 = v19;
    if ( v25 <= v20 )
    {
      v26 = v20;
    }
    else
    {
      v26 = v17;
      if ( v19 > v17 )
        v26 = v19;
    }
    if ( v26 <= v22 )
    {
      v17 = v22;
    }
    else
    {
      v27 = v17;
      if ( v19 > v17 )
        v27 = v19;
      if ( v27 <= v20 )
      {
        v17 = v20;
      }
      else if ( v19 > v17 )
      {
        v17 = v19;
      }
    }
    v28 = v48[0].y;
    v29 = y;
    a2[1].x = v17;
    v30 = v48[1].y;
    v31 = v48[1].y;
    if ( v28 < v48[1].y )
      v31 = v28;
    if ( v31 >= v29 )
    {
      v32 = v29;
    }
    else
    {
      v32 = v48[1].y;
      if ( v28 < v48[1].y )
        v32 = v28;
    }
    v33 = v52;
    if ( v32 >= v52 )
    {
      v35 = v52;
    }
    else
    {
      v34 = v48[1].y;
      if ( v28 < v48[1].y )
        v34 = v28;
      if ( v34 >= v29 )
      {
        v35 = v29;
      }
      else
      {
        v35 = v48[1].y;
        if ( v28 < v48[1].y )
          v35 = v28;
      }
    }
    a2->y = v35;
    v36 = v30;
    if ( v28 > v30 )
      v36 = v28;
    if ( v36 <= v29 )
    {
      v37 = v29;
    }
    else
    {
      v37 = v30;
      if ( v28 > v30 )
        v37 = v28;
    }
    if ( v37 <= v33 )
    {
      v30 = v33;
    }
    else
    {
      v38 = v30;
      if ( v28 > v30 )
        v38 = v28;
      if ( v38 <= v29 )
      {
        v30 = v29;
      }
      else if ( v28 > v30 )
      {
        v30 = v28;
      }
    }
    a2[1].y = v30;
  }
  else
  {
    v6 = XDCOBJ::bFullScreen((XDCOBJ *)&v39) != 0;
  }
LABEL_27:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v44);
  v5 = v39;
  if ( v6 == 3 )
  {
LABEL_11:
    if ( (a3 & 1) != 0 )
    {
      *((_DWORD *)v7 + 1) = 0x7FFFFFFF;
      *(_DWORD *)v7 = 0x7FFFFFFF;
      *((_DWORD *)v7 + 3) = 0x80000000;
      *((_DWORD *)v7 + 2) = 0x80000000;
      v5 = v39;
    }
  }
LABEL_5:
  if ( v5 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v39);
    v42 = 0;
    v8 = *(_QWORD *)v39;
    HmgDecrementExclusiveReferenceCountEx(v39, v41, &v42);
    if ( v42 )
      bDeleteDCInternalEx(v8, 0LL);
  }
  return v6;
}
